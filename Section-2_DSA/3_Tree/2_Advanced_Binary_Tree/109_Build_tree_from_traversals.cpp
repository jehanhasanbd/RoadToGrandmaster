#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include "../BinaryTree.h"

using namespace std;

void level_order_traversal_BFS(BinaryTree *&root) {
    queue<BinaryTree*> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        BinaryTree *frontNode = q.front();
        q.pop();

        if (frontNode == nullptr) {
            cout<<endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        }
        else {
            cout<<frontNode->node<<" ";
            if (frontNode->left != nullptr) {
                q.push(frontNode->left);
            }
            if (frontNode->right != nullptr) {
                q.push(frontNode->right);
            }
        }
    }
}

int linearSearch(int *arr, int start, int end, int key) {
    for (int i = start; i <= end; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Build from Preorder and Inorder
BinaryTree* buildTreePreInorderArray(int *preorder, int *inorder,
                                     int start, int end, int &preIndex) {
    if (start > end) {
        return nullptr;
    }

    int element = preorder[preIndex];
    preIndex++;

    BinaryTree *temp = new BinaryTree(element);

    if (start == end) {
        return temp;
    }

    int pos = linearSearch(inorder, start, end, element);

    temp->left = buildTreePreInorderArray(preorder, inorder, start, pos-1, preIndex);
    temp->right = buildTreePreInorderArray(preorder, inorder, pos+1, end, preIndex);

    return temp;
}

// Build from Postorder and Inorder
BinaryTree* buildTreePostInorderArray(int *postorder, int *inorder,
                                      int start, int end, int &postIndex) {
    if (start > end) {
        return nullptr;
    }

    int element = postorder[postIndex];
    postIndex--;

    BinaryTree *temp = new BinaryTree(element);

    if (start == end) {
        return temp;
    }

    int pos = linearSearch(inorder, start, end, element);

    // For postorder, build right first, then left
    temp->right = buildTreePostInorderArray(postorder, inorder, pos+1, end, postIndex);
    temp->left = buildTreePostInorderArray(postorder, inorder, start, pos-1, postIndex);

    return temp;
}

int main() {
    int preOrder[] = {3, 1, 13, 5, 6, 10, 11, 16, 15, 9, 4, 2};
    int inorder[] = {13, 1, 6, 5, 3, 11, 10, 9, 15, 4, 16, 2};
    int postOrder[] = {13, 6, 5, 1, 11, 9, 4, 15, 2, 16, 10, 3};
    int n = 12;

    int preIndex = 0;
    int postIndex = n - 1;

    BinaryTree *root1 = buildTreePreInorderArray(preOrder, inorder, 0, n-1, preIndex);
    BinaryTree *root2 = buildTreePostInorderArray(postOrder, inorder, 0, n-1, postIndex);

    cout << "Tree from Preorder & Inorder:" << endl;
    level_order_traversal_BFS(root1);

    cout << endl << "Tree from Postorder & Inorder:" << endl;
    level_order_traversal_BFS(root2);

    return 0;
}