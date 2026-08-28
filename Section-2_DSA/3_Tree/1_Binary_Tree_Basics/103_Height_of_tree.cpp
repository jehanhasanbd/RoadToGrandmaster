#include<iostream>
#include <queue>
#include "../BinaryTree.h"

using namespace std;

int height_of_tree(BinaryTree *&root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + max(height_of_tree(root->left), height_of_tree(root->right));
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
    cout<<height_of_tree(root);

}