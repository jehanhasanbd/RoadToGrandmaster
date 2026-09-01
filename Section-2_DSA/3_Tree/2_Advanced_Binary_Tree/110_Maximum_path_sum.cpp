#include<iostream>
#include <queue>
#include "../BinaryTree.h"

using namespace std;

int max_path_sum(BinaryTree *&root, int &maxSum) {
    if (root == nullptr) {
        return 0;
    }
    int left = max(0, max_path_sum(root->left, maxSum));
    int right = max(0, max_path_sum(root->right, maxSum));

    maxSum = max(maxSum, root->node+left+right);
    return root->node + max(left, right);
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
    max_path_sum(root, maxSum);
    cout<<maxSum;
}