#include<iostream>
#include <queue>
#include "../BinaryTree.h"

using namespace std;

vector<vector<int>> zigzagTraversal(BinaryTree *&root) {
    vector<vector<int>> result;
    if (root == nullptr) {
        return result;
    }

    queue<BinaryTree*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel(levelSize);

        for (int i = 0; i < levelSize; ++i) {
            BinaryTree *curr = q.front();
            q.pop();

            int index = leftToRight ? i : (levelSize-1-i);
            currentLevel[index] = curr->node;

            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
        }

        result.push_back(currentLevel);
        leftToRight = !leftToRight;
    }
    return result;
}

int main() {
    BinaryTree *root = new BinaryTree(40);
    root->left = new BinaryTree(20);
    root->left->left = new BinaryTree(30);
    root->left->right = new BinaryTree(10);
    root->left->right->left = new BinaryTree(100);
    root->left->right->right = new BinaryTree(67);

    root->right = new BinaryTree(60);
    root->right->left = new BinaryTree(25);
    root->right->right = new BinaryTree(55);
    root->right->right->left = new BinaryTree(50);

    int maxSum = INT_MIN;
    vector<vector<int>> ans = zigzagTraversal(root);
    for (auto x:ans) {
        for (auto j:x) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}