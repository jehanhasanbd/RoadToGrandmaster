#include<iostream>
#include <queue>
#include "../BinaryTree.h"

using namespace std;

void addLeftBoundary(BinaryTree *node, vector<int> &result) {
    if (node == nullptr) {
        return;
    }
    if (!node->left && !node->right) {    // skip leaf node
        return;
    }

    result.push_back(node->node);
    if (node->left) {
        addLeftBoundary(node->left, result);
    }
    else {
        addLeftBoundary(node->right, result);
    }
}
void addRightBoundary(BinaryTree *node, vector<int> &result) {
    if (node == nullptr) {
        return;
    }
    if (!node->left && !node->right) {    // skip leaf node
        return;
    }

    result.push_back(node->node);
    if (node->right) {
        addRightBoundary(node->right, result);
    }
    else {
        addRightBoundary(node->left, result);
    }
}
void addAllLeafNode(BinaryTree *node, vector<int> &result) {
    if (node == nullptr) {
        return;
    }
    if (!node->left && !node->right) {    // skip leaf node
        result.push_back(node->node);
        return;
    }
    addAllLeafNode(node->left, result);
    addAllLeafNode(node->right, result);

}



vector<int> boundaryTraversal(BinaryTree *&root) {
    vector<int> result;
    if (root == nullptr) {
        return result;
    }

    // add root node
    result.push_back(root->node);

    // Traverse left boundary (exclude root and leaves)
    addLeftBoundary(root->left, result);

    // Add all leaves (left and right)
    addAllLeafNode(root->left, result);
    addAllLeafNode(root->right, result);

    // Traverse right boundary in reverse (exclude root and leaves)
    vector<int> rightBoundary;
    addRightBoundary(root->right, rightBoundary);
    for (int i = rightBoundary.size()-1; i >=0; --i) {
        result.push_back(rightBoundary[i]);
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
    vector<int> ans = boundaryTraversal(root);
    for (auto x:ans) {
        cout<<x<<" ";
    }


}