//
//  TreeType.cpp
//  CS221 Binary Search Tree
//
//  Created by Brandon Perry on 1/28/22.
//

#include "TreeType.hpp"
#include <string>
#include <fstream>

TreeType::TreeType()
{
root = NULL;
};


TreeType::~TreeType()

{
};


bool TreeType::IsEmpty() const
// Function: Determines whether tree is empty
// Pre: Tree exists
// Post: Function value = (tree is empty)
{
    return root == NULL;
};


void TreeType::PutItem(ItemType item)
// Function: Adds item to tree
// Pre: Tree exists
//      Tree is not full
//      item is not in tree
// Post: item is in tree
//       Binary search property is maintained
{
    Insert(root, item);
};


int TreeType::GetLength() const
// Function: Determines the number of elements in tree
// Pre: Tree exists
// Post: Function value = number of elements in tree
{
    return CountNodes(root);
};


int TreeType::LeafCount() const
// Function: Counts the number of leaf nodes
// Pre: Tree exists
// Post: Function value = number of leaf nodes in tree
{
    return Count(root);
};


int TreeType::SingleParentCount() const
// Function: Counts the number of nodes with only one child
// Pre: Tree exists
// Post: Function value = number of nodes with only one child
{
    return SingleCount(root);
};



// helper functions
int Count(TreeNode* tree)
// Function: Counts and returns the number of leaf nodes
// Pre: Tree exists
// Post: Function value = number of leaf nodes
{
    if (tree == NULL)
    {
            return 0; // base case 1
    }
    else if ((tree->right == NULL) && (tree->left == NULL))
    {
        return 1; // base case 2
    }
    else
    {
        return Count(tree->left) + Count(tree->right); // general case for recursion call
    }
};


int SingleCount(TreeNode* tree)
// Function: Counts and returns the number of nodes with only one child
// Pre: Tree exists
// Post: Function value = number of nodes with only one child
{
    int count = 0;
    if (tree == NULL)
    {
            return 0; // base case 1
    }
    else if ((tree->left == NULL) && (tree->right != NULL))
    {
        return SingleCount(tree->right) + 1; // base case 2
    }
    else if ((tree->left != NULL) && (tree->right == NULL))
    {
        return SingleCount(tree->left) + 1; // base case 3
    }
    else
    {
        return SingleCount(tree->left) + SingleCount(tree->right); // general case for recursion call
    }
    
    return count;
};


void Insert(TreeNode*& tree, ItemType item)
// Function: Inserts item into tree
// Pre: Tree exists
// Post: item is in tree
//      search property is maintained
{
    if (tree == NULL)
    {
        tree = new TreeNode;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if (item < tree->info)
    {
        Insert(tree->left, item);
    }
    else
    {
        Insert(tree->right, item);
    }
};


int CountNodes(TreeNode* tree)
// Function: Counts the number of nodes in the tree
// Pre: Tree exists
// Post: Function value = number of nodes in teh tree
{
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        return CountNodes(tree->left) + CountNodes(tree->right) + 1;
    }
};
