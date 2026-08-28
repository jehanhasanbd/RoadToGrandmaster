#include<iostream>
#include "../BinaryTree.h"

using namespace std;

void inorderTraversal(BinaryTree *&root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout<<root->node<<" ";
    inorderTraversal(root->right);
}

int main() {
    BinaryTree *root = new BinaryTree(10);
    root->left = new BinaryTree(15);
    root->right = new BinaryTree(5);
    inorderTraversal(root);

}