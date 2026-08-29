#include<iostream>
#include <queue>
#include "../BinaryTree.h"

using namespace std;

bool checkIdentical(BinaryTree *&root1, BinaryTree *&root2) {
    if (root1 == nullptr && root2 == nullptr) {
        return true;
    }
    if (root1 == nullptr || root2 == nullptr) {
        return false;
    }
    return (root1->node == root2->node) && checkIdentical(root1->left, root2->left) && checkIdentical(root1->right, root2->right);
}

int main() {
    BinaryTree *root1 = new BinaryTree(40);
    root1->left = new BinaryTree(20);
    root1->left->left = new BinaryTree(30);
    root1->left->right = new BinaryTree(10);
    root1->left->right->left = new BinaryTree(100);
    root1->left->right->right = new BinaryTree(67);

    root1->right = new BinaryTree(60);
    root1->right->left = new BinaryTree(25);
    root1->right->right = new BinaryTree(55);
    root1->right->right->left = new BinaryTree(50);


    BinaryTree *root2 = new BinaryTree(40);
    root2->left = new BinaryTree(20);
    root2->left->left = new BinaryTree(30);
    root2->left->right = new BinaryTree(10);
    root2->left->right->left = new BinaryTree(100);
    root2->left->right->right = new BinaryTree(67);

    root2->right = new BinaryTree(60);
    root2->right->left = new BinaryTree(25);
    root2->right->right = new BinaryTree(55);
    root2->right->right->left = new BinaryTree(50);




    cout<<checkIdentical(root1, root2);

}