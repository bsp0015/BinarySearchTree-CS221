//
//  TestDrive.cpp
//  CS221 Binary Search Tree
//
//  Created by Brandon Perry on 1/28/22.
//

#include <stdio.h>
#include "TreeType.hpp"
#include <string>
#include <fstream>
#include <iostream>

int main()
{
    using namespace std;
    ifstream inFile;        // operation file
    ofstream outFile;       // output file
    string inFileName;      // intput file name
    string outFileName;     // output file name
    string command;         // operation to be executed
    
    int numCommands;
    
    //prompts for file name, reads in, preapres file
    cout << "Enter name of input file; press return." << endl;
    cin >> inFileName;
    inFile.open(inFileName.c_str());
    
    cout << "Enter name of output file; press return." << endl;
    cin >> outFileName;
    outFile.open(outFileName.c_str());
    
    // makes sure file is opened
    if (!inFile)
    {
        cout << "File not found." << endl;
        exit(2);
    }
    
    // initializes number of commands
    numCommands = 0;
    
    // initializes values for functions
    TreeType tree;
    ItemType item;
    
    // while the end of file hasn't been reached
    while (!inFile.eof()) {
        
        // read in command
        inFile >> command;
        while (command != "Quit")
        {
            if (command == "IsEmpty")
            {
               // test if tree is empty
                if (tree.IsEmpty() == true)
                {
                    outFile << "The tree is empty" << endl;
                }
                else
                {
                    outFile << "The tree is not empty" << endl;
                }
                
            }
            else if (command == "PutItem")
            {
                // read in item value
                inFile >> item;
                
                // call function
                tree.PutItem(item);
                
                // let user know what item was put
                outFile << "The item " << item << " was added to the tree" << endl;
            }
            else if (command == "GetLength")
            {
                // call function
                outFile << "The length of the tree is: " << tree.GetLength() << endl;
            }
            else if (command == "LeafCount")
            {
                // call function
                outFile << "The number of Leaves is: " << tree.LeafCount() << endl;
            }
            else if (command == "SingleParentCount")
            {
                // call function
                outFile << "The number of Single Parent Nodes is: " << tree.SingleParentCount() << endl;
            }
            else
            {
                outFile << "Error occurred. Command not recognized" << endl;
            }
            
            // increments the number of commands
            numCommands++;
            
            // prints out command operation
            cout << "Command number " << numCommands << " completed." << endl;
            inFile >> command;
        };
    };
    
    // lets user know testing is complete
    cout << "Testing completed." << endl;
    return 0;
}
