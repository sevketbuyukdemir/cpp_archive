/**
 * Source : https://www.geeksforgeeks.org/
 *
 * !!!My summary :
 *
 * Necessary Operations for tree :
 *      Searching
 *      Traversing
 *      Insertion
 *      Deletion
 *
 *  Binary Tree : A tree whose elements have at most 2 children is called a binary tree.
 *              Since each element in a binary tree can have only 2 children, we typically name them
 *              the left and right child.
 *
 *                 Elements of binary tree struct :
 *                      Data
 *                      Pointer to left child
 *                      Pointer to right child
 *  Binary Tree Traversal :
 *      In-order Traversal:
 *          1- Traverse the left subtree.
 *          2- Visit the node.
 *          3- Traverse the right subtree.
 *      Pre-order Traversal:
 *          1- Visit the node.
 *          2- Traverse the left subtree.
 *          3- Traverse the right subtree.
 *      Post-order Traversal:
 *          1- Traverse the left subtree.
 *          2- Traverse the right subtree.
 *          3- Visit the node.
 *
 *
 *
 *  Binary Search Tree : Binary Search Tree is a node-based binary tree data structure which has the following properties:
 *
 *      1- The left subtree of a node contains only nodes with keys lesser than the node’s key.
 *      2- The right subtree of a node contains only nodes with keys greater than the node’s key.
 *      3- The left and right subtree each must also be a binary search tree.
 *  (Non-recursive Binary Tree Traversal Algorithms)
 *
 *  AVL tree : AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and
 *  right subtrees cannot be more than one for all nodes.
 *
 *  !!! B-tree not equal Binary Tree!!!
 *  B-Trees : B-Tree is a self-balancing search tree. In most of the other self-balancing search trees , it is assumed
 *  that everything is in main memory.
 *      Properties of B-Tree
 *      1) All leaves are at same level.
 *      2) A B-Tree is defined by the term minimum degree ‘t’. The value of t depends upon disk block size.
 *      3) Every node except root must contain at least t-1 keys. Root may contain minimum 1 key.
 *      4) All nodes (including root) may contain at most 2t – 1 keys.
 *      5) Number of children of a node is equal to the number of keys in it plus 1.
 *      6) All keys of a node are sorted in increasing order. The child between two keys k1 and k2 contains all keys in the range from k1 and k2.
 *      7) B-Tree grows and shrinks from the root which is unlike Binary Search Tree. Binary Search Trees grow downward and also shrink from downward.
 *      8) Like other balanced Binary Search Trees, time complexity to search, insert and delete is O(Logn).
 */
#include <iostream>

int main() {
    std::cout << "Trees!" << std::endl;
    return 0;
}
