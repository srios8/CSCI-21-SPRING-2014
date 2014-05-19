#include "Word.h"

Word::Word()
:count(1)
{}
        
Word::Word(string newWord)
:word(newWord), count(1)
{}
    
Word::~Word()
{}
        
string Word::getWord() const
{
    return word;
}
        
void Word::setWord(string newWord)
{
    word = newWord;
}
        
unsigned int Word::getCount() const
{
    return count;
}
        
void Word::incrementCount()
{
    count++;
}
        
bool operator==(const Word& lefty, const Word& righty)
{
    return (lefty.getWord() == righty.getWord());
}
        
bool operator < (const Word& lefty, const Word& righty)
{
    return (lefty.getWord() < righty.getWord());
}
    
bool operator > (const Word& lefty, const Word& righty)
{
    return (lefty.getWord()>righty.getWord());
}
        
ostream& operator << (ostream& outs, const Word& word)
{
    outs << word.getWord() << " " << word.count;
    return outs;
}