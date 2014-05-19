#include "Item.h"

#include<sstream>
#include<iostream>
#include<cstdlib>
using namespace std;

class MagicItem: public Item
{
        
    public:
        MagicItem(string newName = "magicitem", unsigned int newValue = 0, string newDescription = "nodescription", unsigned int newManaRequired = 0);
        
        virtual~MagicItem();
        
        void setDescription(string newDescription);
        
        void setManaRequired(unsigned int newManaRequired);
        
        string getDescription();
        
        unsigned int getManaRequired();
        
        string toString();
        
    
    private:
        string description;
        unsigned int manaRequired;
};