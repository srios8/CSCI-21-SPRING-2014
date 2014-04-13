#pragma once 

#include <string>
using namespace std;


class Prize
{
    public:
    
        /*
         * public default constructor: initial values prizeName ("NO NAME"), prizeValue (0)
         */
        Prize();
         
        /*
         * public overloaded constructor: parameters for all data members
         */
        Prize(string newPrizeName, unsigned int newPrizeValue);
        
        /*
         * public destructor: empty  
         */
        ~Prize();
        
        /*
         * public accessors/gets and mutators/sets for all data members
         */
        void setPrizeName(string newPrizeName);
        string getPrizeName() const;
        
        void setPrizeValue(unsigned int newPrizeValue);
        unsigned int getPrizeValue() const;
            
        /*
         * friend overloaded operator==: returns true if the prizeName and prizeValue 
         * of the two Prizes being compared are equivalent, else return false
         */
        friend bool operator == (Prize firstPrize, Prize secondPrize);
    
    private:
        string prizeName;
        unsigned int prizeValue;
    
};