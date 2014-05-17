#pragma once

#include "BSTNode.h"

#include<iostream>
#include<string>
#include<cstdlib>
#include<sstream>
using namespace std;

template<class T>
class BSTree
{
    public:
    /*
     * Default Constructor BSTree
     * Initializes count to 0 and root to NULL
     */
        BSTree()
        :count(0), root(NULL)
        {}
        
    /*
     * Default Destructor BSTree
     * Calls clear() function to free all memory
     */
        ~BSTree()
        {
            clear();
        }
        
    /*
     * Function reveals size of tree
     * @return an int representing the size of the Tree
     */
        unsigned int getSize() const
        {
            return count;
        }
        
    /*
     * Function frees all memory
     * Calls private clear function to clear root
     */
        void clear()
        {
            clear(root);
        }
        
    /*
     * Function inserts a new content into the tree in ascending order
     * @param newContents an int to be inserted into the tree
     * @return calls private insert function
     */
        bool insert(T newContents)
        {
            return insert(newContents, root);
        }
        
    /*
     * Function searches binary tree for a specific target
     * @param targetData an int being searched for in the binary tree
     * @return calls private find function
     */
        bool find(T targetData)
        {
            return find(targetData, root);
        }
        
    /*
     * Function searches binary tree for a specific target in order to remove it
     * @param targetData an int being searched for in the binary tree to be removed
     * @return calls private remove function
     */
        bool remove(T targetData)
        {
            return remove(targetData, root);
        }
        
    /*
     * Function reveals data of a specified target
     * @param targetData an int being searched for in the binary tree
     * @return calls private getData function
     */
        T* getData(T targetData)
        {
            return getData(targetData, root);
        }
        
    /*
     * Function arranges contents of tree in order(for printing later)
     * @return calls private inOrder function
     */
        void inOrder()
        {
            inOrder(root);
        }
        
    /*
     * Function arranges tree contents in reverse order(for printing later)
     * @return calls reverseOrder find function
     */
        void reverseOrder()
        {
            reverseOrder(root);
        }
        
    private:
    
        unsigned int count;
        BSTNode<T>* root;
    
    /*
     * Private function clears memory
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     */
        void clear(BSTNode<T>*& tempRoot)
        {
            if(tempRoot!=NULL)
            {
                clear(tempRoot->getLeftChild());
                clear(tempRoot->getRightChild());
                delete tempRoot;
                tempRoot =NULL;
                count--;
            }
        }
        
    /*
     * Private function inserts new content in ascending order
     * DUPLICATE VALUES ARE NOT ALLOWED
     * @param newContents int representing the new value being inserted
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     * @return true if insertion was successful;false if otherwise
     */
        bool insert(T newContents, BSTNode<T>*& tempRoot)
        {
            if(tempRoot == NULL)
            {
                tempRoot = new BSTNode<T>(newContents);
                count++;
                return true;
            }
            else if(newContents < tempRoot->getData())
            {
                return insert(newContents, tempRoot->getLeftChild());
            }
            else if(newContents > tempRoot->getData())
            {
                return insert(newContents, tempRoot->getRightChild());
            }
            else
            {
                return false;
            }
        }
        
    /*
     * Private function searches binary tree for a specific target
     * @param targetData an int being searched for in the binary tree
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     * @return true if target was found; false if otherwise
     */
        bool find(T targetData, BSTNode<T>*& tempRoot)
        {
            if (tempRoot == NULL) 
            {
                return false;
            }
            else if (targetData < tempRoot->getData()) 
            {
                return remove(targetData, tempRoot->getLeftChild());
            }
            else if (targetData > tempRoot->getData()) 
            {
                return remove(targetData, tempRoot->getRightChild());
            }
            else 
            {
                return true;
            }
        }
        
    /*
     * Private function searches binary tree for a specific target in order to remove it
     * @param targetData an int being searched for in the binary tree
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     * @return true if target was removed; false if otherwise
     */
        bool remove(T targetData, BSTNode<T>*& tempRoot)
        {
            if (tempRoot == NULL) 
            {
                return false;
            }
            else if (targetData < tempRoot->getData()) 
            {
                return remove(targetData, tempRoot->getLeftChild());
            }
            else if (targetData > tempRoot->getData()) 
            {
                return remove(targetData, tempRoot->getRightChild());
            }
            else 
            {
                if (tempRoot->getLeftChild() == NULL) 
                {
                    BSTNode<T>* oldPtr = tempRoot;
                    tempRoot = tempRoot->getRightChild();
                    delete oldPtr;
                    count--;
                }
                else
                {
                    removeMax(tempRoot -> getData(), tempRoot -> getLeftChild());
                }
                return true;
            }
        }
    
    /*
     * Private function searches binary tree for all 
     * instances of a specific target in order to remove them
     * @param targetData an int being searched for in the binary tree
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     * @return true if target was removed; false if otherwise
     */
        void removeMax(T& targetData, BSTNode<T>*& tempRoot)
        {
            if (tempRoot -> getRightChild() == NULL) 
            {
                BSTNode<T>* maxNode = tempRoot;
                targetData = tempRoot -> getData();
                tempRoot = tempRoot -> getLeftChild();
                delete maxNode;
            }
            else
            {
                removeMax(targetData, tempRoot -> getRightChild());
            }
        }
        
    /*
     * Private function searches binary tree for specified target and retrieves pointer
     * @param targetData an int being searched for in the binary tree
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     * @return returns a pointer
     */
        T* getData(T targetData, BSTNode<T>* tempRoot)
        {
            if(tempRoot == NULL)
            {
				return NULL;
			}
			else if(tempRoot->getData() == targetData)
			{
				return &tempRoot->getData();
			}
			else if(targetData < tempRoot->getData())
			{
				return getData(targetData, tempRoot->getLeftChild());
			}
			else
			{
				return getData(targetData, tempRoot->getRightChild());
			}
        }
    
    /*
     * Private function arranges tree contents in order
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     */
        void inOrder(BSTNode<T>*& tempRoot)
        {
            if(tempRoot!=NULL)
            {
                inOrder(tempRoot->getLeftChild());
                cout << tempRoot->getData() << " ";
                inOrder(tempRoot->getRightChild());
            }
        }
        
    /*
     * Private function arranges tree contents in reverse order
     * @param tempRoot a temporary BSTNode pointer used to avoid memory leaks
     *        and substitute pointer root for the moment
     */
        void reverseOrder(BSTNode<T>* tempRoot)
        {
            if(tempRoot!=NULL)
            {
                inOrder(tempRoot->getRightChild());
                cout << tempRoot->getData() << " ";
                inOrder(tempRoot->getLeftChild());
            }
        }
};