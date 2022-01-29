//
//  TreeType.hpp
//  CS221 Binary Search Tree
//
//  Created by Brandon Perry on 1/28/22.
//

#ifndef TreeType_h
#define TreeType_h

#include <stdio.h>
#include <string>
#include <fstream>

typedef char ItemType; // define the ItemType of character
struct TreeNode;

class TreeType
{
public:
    // normal functions
    TreeType();
    ~TreeType();
    bool IsEmpty() const;
    void PutItem(ItemType item);
    int GetLength() const;
    
    // additional functions
    int LeafCount() const;
    int SingleParentCount() const;
    
private:
    TreeNode* root;
};


struct TreeNode
{
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};


int CountNodes(TreeNode* tree);
void Insert(TreeNode*& tree, ItemType item);
int SingleCount(TreeNode* tree);
int Count(TreeNode* tree);


#endif /* TreeType_hpp */
