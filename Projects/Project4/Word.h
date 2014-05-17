/*
data members: word (string), count (unsigned int)
Word () : count to 1
Word (string newWord) : initialize word to newWord, count to 1
virtual ~Word () : nothing to be done
string getWord () const
void setWord (string newWord)
unsigned int getCount () const
void incrementCount () : add 1 to count
operator== (make sure this is case-insensitive)
operator< (make sure this is case-insensitive)
operator> (make sure this is case-insensitive)
operator<< : place contents of Word formatted as "WORD COUNT" on the stream
*/

#pragma once

#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

class Word
{
    public:
    
    /*
     * Default constructor
     * Sets count to one
     */
        Word();
        
    /*
     * Overloaded constructor
     * Sets word to new string and count to one.
     */
        Word(string newWord);
        
    /*
     * Destructor
     * Nothing to be done
     */
        ~Word();
        
    /*
     * Function retrieves word
     * @return returns word
     */
        string getWord() const;
        
    /*
     * Function sets word to newWord
     */
        void setWord(string newWord);
        
    /*
     * Function retrieves count
     * @return returns vount
     */
        unsigned int getCount() const;
        
    /*
     * Function adds one to count
     */
        void incrementCount();
        
    /*
     * operator==
     * case sensitive
     */
        friend bool operator==(const Word& lefty, const Word& righty);
        
    /*
     * operator<
     * case sensitive
     */
        friend bool operator<(const Word& lefty, const Word& righty);
        
    /*
     * operator >
     * case sensitive
     */
        friend bool operator>(const Word& lefty, const Word& righty);
        
    /*
     * operator<<
     * place contents of Word formatted as "WORD COUNT" on the stream
     */
        friend ostream& operator<<(ostream& outs, const Word& wordy);
        
    private:
        string word;
        unsigned int count;
};