#pragma once

#include<sstream>
#include<iostream>
#include<cstdlib>
using namespace std;

class Item
{

    private:
    
        string name;
        unsigned int value;
    	
    public:
    
        Item(string newName = "item", unsigned int newValue = 0);
        
        virtual~Item();
        	
        void setName(string newName);
        
        void setValue(unsigned int newValue);
        	
        string getName();
        
        unsigned int getValue();
        	
        string toString();
        
};