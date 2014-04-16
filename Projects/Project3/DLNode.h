#pragma once
#include <iostream>

#include <cstdlib>
#include<sstream>
using namespace std;

class DLNode
{
    public:
    /*
     *initialize contents to zero, next and previous to NULL
     */
        DLNode(); 
     
    /*
     *initialize contents to newContents, next and previous to NULL
     */
        DLNode (int newContents);
        
    /*
     *nothing to be done
     */
        virtual ~DLNode();
        
    /*
     *
     */
        void setContents (int newContents);
     
    /*
     *
     */
        void setNext (DLNode* newNext);
    
    /*
     *
     */
        void setPrevious (DLNode* newPrevious);
    
    /*
     *
     */
        int getContents () const;
    
    /*
     *
     */
        DLNode* getNext () const;
    
    /*
     *
     */
        DLNode* getPrevious () const;
    
    private:
    /*
     *
     */
        int contents;
        
    /*
     *pointer to previous node
     */
        DLNode* previousNode;
     
     /*
      *pointer to next node
      */
        DLNode* nextNode;
      
