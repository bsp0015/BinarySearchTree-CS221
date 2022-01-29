# Binary-Search-Tree-CS221

This was an assignment for __CS221 Computer Science II: Data Structures__. It used a short version of a binary search tree. It required a test plan document with abstract data type specs as well.


Completed: 11-09-2020

Assigned by: Mr. Troung Tran

## Assignment Instructions:

### 1. Overview 
Implement a brief version of Binary Search Tree (BST)


### 2. Requirement
Consider the BST with recursive implementation in chapter 8:


### 2.1 (Class) 
Implement a short version of a BST ADT name TreeType class based on the code in chapter 8.

This BST will have a TreeNode struct (see below) to hold the items. The items in the tree are ItemType of characters.
This version, the BST must have the following functions:

Three original functions (other functions are not required):

```C++
bool IsEmpty() const; // see textbook
void PutItem(ItemType item); // see textbook
int GetLength() const; // see textbook
```

Two additional functions:
```C++
int LeafCount() const;  // Post condition: Return the number of leaf nodes in the tree. 
                        // This function need to call a helper function Count(TreeNode* tree).
int SingleParentCount() const; // Post condition: Return the number of node with only one child. 
                               // This function needs to call a helper function SingleCount(TreeNode* tree).
```
*Notice: The constructor of the TreeType class must be implemented to create an empty tree. 








### 2.2 (Helper) 
In the TreeType class, Implement two helper functions mentioned above.
```C++
int Count(TreeNode* tree) // This is a recursive function to count and return the number of leaf nodes in the tree.
int SingleCount(TreeNode* tree) // This is a recursive function to count and return the number of nodes with only one child.
```
**You may use this sample header file:
```C++
#include <string>
#include <fstream>

typedef char ItemType; // define the ItemType of character
struct TreeNode;

class TreeType
{

...

}
```
The struct TreeNode is):
```C++
struct TreeNode

{
     ItemType info;
     TreeNode* left;
     TreeNode* right
}
```

### 2.3 (TestDriver)
Implement the test program (TestDrive.cpp) for testing the TreeType class. This test program must create a BST (this shorted version), read an input file, test all functions of the TreeType class required above, and write output results to an output file. 

The input file must cover the following:

- IsEmpty
- PutItem N
- PutItem F
- PutItem Q
- PutItem K
- PutItem D
- PutItem G
- PutItem B
- IsEmpty
- GetLength
- LeafCount
- SingleParentCount
- Error
- Quit

 

## 3. Submission

### 3.2 Program Test Plan Document 
The student shall provide the test plan document. The document must include a detailed test plan, input file, expected output, and results of test experiments (actual output and snapshot of console/terminal output).
