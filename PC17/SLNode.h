#pragma once

#include <string>;
using namespace std;


class SLNode
{
    public:
    /*
     * sets values nextNode(NULL) and contents(0)overloaded constructor, int parameter assigned to contents
     */
        SLNode(); 
    
    /*
     * overloaded constructor, int parameter assigned to contents
     */
        SLNode(int contents); 
	
	/*
	 * destructor, sets nextNode to NULL
	 */
	    ~SLNode();
	
	/*
	 * Getters/Setters
	 */
    	void setContents (int);
    	int getContents () const;
    	
        void setNextNode (SLNode*);
    	SLNode* getNextNode () const;
        
    private:
    
    /*
     *SLNode* that points to the next node in a singly-linked list
     */
        SLNode* nextNode;
        
    /*
     *int used to store the data contents of this SLNode
     */
    	int contents;
};

