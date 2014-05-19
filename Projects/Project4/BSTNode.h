#pragma once
#include <iostream>

#include <cstdlib>
#include<string>

template<class T>
class BSTNode
{
  public:
  
    /*
     * Default Constructor BSTNode
     * Initializes leftChild and rightChild to NULL, data to newData
     */
        BSTNode(T newData)
        :leftChild(NULL), rightChild(NULL), data(newData)
        {}
        
    /*
     * Default Destructor BSTNode
     * Nothing to do
     */
        ~BSTNode()
        {}
        
    /*
     * Function assigns a new value to data
     * @param newData an int with new contents to be assigned to data
     */
        void setData(T newData)
        {
            data = newData;
        }
        
    /*
     * Function assigns the contents of a new node to leftChild
     * @param newLeftChild a new pointer whose contents are to 
     * be assigned to leftChild
     */
        void setLeftChild(BSTNode<T>* newLeftChild)
        {
            leftChild = newLeftChild;
        }
        
    /*
     * Function assigns the contents of a new node to rightChild
     * @param newRightChilc a new pointer whose contents are to 
     * assigned to rightChild
     */
        void setRightChild(BSTNode<T>* newRightChild)
        {
            rightChild = newRightChild;
        }
        
    /*
     * Function retrieves data of a pointer/node
     * @return returns data of specified node
     */
        T getData() const
        {
            return data;
        }
        
    /*
     * Function retrieves the smaller/leftChild node of the root
     * @return returns leftChild
     */
        BSTNode* getLeftChild() const
        {
            return leftChild;
        }
        
    /*
     * Function retrieves bigger/rightChild node of the root
     * @ return returns rightChild
     */
        BSTNode* getRightChild() const
        {
            return rightChild;
        }
        
    /*
     * Function retrieves data of a pointer/node(by reference)
     * @return returns data of specified node
     */
        T& getData()
        {
            return data;
        }
        
    /*
     * Function retrieves the smaller/leftChild node of the root(by reference)
     * @return returns leftChild
     */
        BSTNode*& getLeftChild()
        {
            return leftChild;
        }
        
    /*
     * Function retrieves the bigger/rightChild node of the root(by reference)
     * @return returns rightChild
     */
        BSTNode*& getRightChild()
        {
            return rightChild;
        }
    
  private:
  
    BSTNode<T>* leftChild;
    BSTNode<T>* rightChild;
    T data;
};