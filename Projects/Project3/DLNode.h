#pragma once

#include <string>
#include <cstdlib>

template <typename T>
class DLNode{
    public:
        /*
         * Default constructor that initializes nextNode/prevNode to NULL.
         */
        DLNode()
        : nextNode(NULL), previousNode(NULL)
        {}
        
        /*
         * Constructor initializes nextNode/prevNode to NULL and contents to newContents.
         * @param newContents an int representing new contents
         */
        DLNode(T newContents)
        : nextNode(NULL), previousNode(NULL), contents(newContents)
        {}
        
        /*
         * Default deconstructor sets nextNode/prevNode to NULL
         */
        ~DLNode()
        {
            nextNode = NULL;
            previousNode = NULL;
        }
        
        /*
         * Sets contents to new value 
         * @param newContents an int redfining a value
         */
        void setContents(T newContents)
        {
            contents = newContents;
        }
        
        /*
         * Reveals contents of list.
         * @return an integer representing contents of node
         */
        T getContents() const
        {
            return contents;
        }
        
        /*
         * Sets pointer to following node
         * @param newNextNode node being set
         */
        void setNext(DLNode<T>* newNextNode)
        {
            nextNode = newNextNode;
        }
        
        /*
         * Sets to pointer to previous node
         * @param newNextNode is the node being set.
         */
        void setPrevious(DLNode<T>* newPreviousNode)
        {
            previousNode = newPreviousNode;
        }
        
        /*
         * Reveals value of next node
         * @return the following node
         */
        DLNode* getNext() const
        {
            return nextNode;
        }
        
        /*
         * Reveals value of previous node
         * @return previous node
         */
        DLNode* getPrevious() const
        {
            return previousNode;
        }
        
    private:
  
        
        DLNode<T>* nextNode;
        DLNode<T>* previousNode;
        T contents;
};