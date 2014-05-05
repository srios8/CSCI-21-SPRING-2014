#pragma once
#include <iostream>

#include <cstdlib>
#include<sstream>

class BSTNode
{
    public:
        BSTNode();
        /*:leftChild(NULL), rightChild(NULL), contents(0)
        {}*/
        
        BSTNode(int newContents);
        /*:contents(newContents)
        {}*/
        
        ~BSTNode();
        /*{
            leftChild = NULL;
            rightChild = NULL;
        }*/
        
        void setContents(int newContents);
        /*{
            contents = newContents;
        }*/
        
        int getContents() const;
        /*{
            return contents;
        }*/
        
        int& getContents();
        /*{
            return contents;
        }*/
        
        void setLeftChild(BSTNode* newLeftChild);
        /*{
            leftChild = newLeftChild;
        }*/
        
        void setRightChild(BSTNode* newRightChild);
        /*{
            rightChild = newRightChild;
        }*/
        BSTNode* getLeftChild() const;
        /*{
            return leftChild;
        }*/
        
        BSTNode*& getLeftChild();
        /*{
            return leftChild;
        }*/
        
        BSTNode* getRightChild() const;
        /*{
            return rightChild;
        }*/
        
        BSTNode*& getRightChild();
        /*{
            return rightChild;
        }*/
    
    private:
        BSTNode* leftChild;
        BSTNode* rightChild;
        int contents;
};