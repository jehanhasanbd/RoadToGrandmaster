#include<iostream>
#include<queue>
#include "../BinaryTree.h"

using namespace std;

BinaryTree* get_mirror_tree(BinaryTree *&root) {
    if (root == nullptr) {
        return nullptr;
    }

    BinaryTree *mirror_root = new BinaryTree(root->node);
    mirror_root->left = get_mirror_tree(root->right);
    mirror_root->right = get_mirror_tree(root->left);

    return mirror_root;
}


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
    BinaryTree *mirror_root =  get_mirror_tree(root);
    level_order_traversal_BFS(mirror_root);
}