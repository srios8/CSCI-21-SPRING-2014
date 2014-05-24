#pragma once

#include<sstream>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Item
{
    public:
    
        Item(string newName = "item", unsigned int newValue = 0);
        
        virtual~Item();
        	
        void setName(string newName);
        
        void setValue(unsigned int newValue);
        	
        string getName() const;
        
        unsigned int getValue() const;
        	
        string toString();
        
    private:
    
        string name;
        unsigned int value;
};