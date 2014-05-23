//
// Grader comments 2014.05.22
// -50 points total
//
/*
 * Programming Project 4
 * Binary Search Tree
 * Implementation and functionality are being tested
 * 
 * Rios Jimenez, Stacy A.
 * May 16th, 2014
 */
 
#include "BSTree.h"
#include "Word.h"
#include "BSTNode.h"

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        cout << "Retry using a command line" << endl;
    }
    else
    {
        BSTree<Word>* leafty = NULL;

    	ifstream fileIn(argv[1]);
    	
    	if(!fileIn.good()){
    	    cout << "Unable to open file" << endl;
    	}
    	else
    	{
    	    string line;
            while(getline(fileIn, line))
            {
                char letter = line[0];
                
                if(letter == '#')
                {
                	
                }

				//
				// Grader comments 2014.05.22
				// You were close here. See below.
				// -10 points
				//
                /*else if(leafty == NULL)
                {
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                }*/
					
				else if((leafty == 0) && (letter != 'C'))
				{
					cout << "MUST CREATE TREE INSTANCE" << endl;
				}

                else if(letter == 'C')
                {
                    if(leafty != NULL)
                    {
                        delete leafty;
                    }
                    leafty = new BSTree<Word>;
                    cout << "TREE CREATED" << endl;
                }
                else
                {
                    if(letter == 'X')
                    {
                        cout << "TREE CLEARED" << endl;
                        leafty->clear();
                    }
                    else if(letter == 'D')
                    {
                        cout << "TREE DELETED" << endl;
                        delete leafty;
                        leafty = NULL;
                    }
                    else if(letter == 'N')
                    {
                        cout << "TREE SIZE IS " << leafty->getSize() << endl;
                    }
                    else if(letter == 'O')
                    {
                        if(leafty->getSize() > 0)
                        {
                            leafty->inOrder();
                        }
                        else
                        {
                            cout << "TREE EMPTY" << endl;
                        }
                    }
                    else if(letter == 'E')
                    {
                        if(leafty->getSize() > 0)
                        {
                            leafty->reverseOrder();
                        }
                        else
                        {
                            cout << "TREE EMPTY" << endl;
                        }
                    }
                    else
                    {
                        string str = line.substr(2);
                        stringstream ss(str);
                        int value = 0;
                        ss >> value;
                        
                        if(letter == 'I')
                        {
							//
							// Grader comments 2014.05.22
							// Should insert str here, not line.
							// -10 points
							//
							// Also, the int called "value" above is unnecessary.
							// Note that you never use it anywhere.
							// 
							//
                            if(leafty->insert(str)){					// Rob
                                cout << "WORD " << str << " INSERTED" << endl;
                            }
                            else
                            {
                                Word* wordie = leafty->getData(str);	// Rob
                                wordie->incrementCount();
                                cout << "WORD " << str << " INCREMENTED" << endl;
                            }
                        }
                        else if(leafty->getSize() > 0)
                        {
                            if(letter == 'F')
                            {
							//
							// Grader comments 2014.05.22
							// Should insert str here, not line.
							// -10 points
							//
                                if(leafty->find(str))
                                {
                                    cout << "FOUND " << str << endl;
                                }
                                else
                                {
                                    cout << str << " NOT FOUND" << endl;
                                }
                            }
                            else if(letter == 'R')
                            {
							//
							// Grader comments 2014.05.22
							// Should insert str here, not line.
							// -10 points
							//
                                if(leafty->remove(str))
                                {
                                    cout << "REMOVED " << str << endl;
                                }
                                else{
                                    cout << str << " NOT FOUND" << endl;
                                }
                            }
                            else if(letter == 'G')
                            {
							//
							// Grader comments 2014.05.22
							// Should insert str here, not line.
							// -10 points
							//
                                Word* wordie = leafty->getData(str);
                                if(wordie != NULL)
                                {
                                    cout << "GOT " << str << ' ' << wordie->getCount() << endl;
                                }
                                else
                                {
                                    cout << str << " NOT FOUND" << endl;
                                }
                            }
                        }
                        else
                        {
                            cout << "TREE EMPTY" << endl;
                        }
                    }
                }
            }
    	}
    	if(leafty != NULL)
    	{
    	    delete leafty;
    	    leafty = NULL;
    	}
    	
    	fileIn.close();
    }
    
	return 0;
}