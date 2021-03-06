//
// Grader comments 2014.05.15
// + 50: naming conventions good
// + 50: header documentation missing
// + 50: formatting good
// -  5: Makefile -- see comments there
// +113: driver -- see comments below; look for "grader comments" and "Rob"
// +150: DLNode good
// +280: DLList -- see comments DLList.cpp
// 
/*
 *Programming Project 3
 *Stacy Rios
 *April 25th, 2014
 */

#include "DLList.h"

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

//
// Grader comments 2014.05.15
// -  4: X needs to check for the list not existing yet.
// - 28: All commands except C need to check for the list not existing
//       and report "MUST CREATE LIST".
// -  5: A & Z say "VALUE LIST EMPTY" when the list is empty. Should just be "LIST EMPTY".
//
int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        cout << "Retry using a command line" << endl;
    }
    else
    {
        DLList<int>* nodeList = NULL;

    	ifstream fileIn(argv[1]);
    	
    	if(!fileIn.good()){
    	    cout << "File unable to open" << endl;
    	}
    	else
    	{
    	    string line;
            while(getline(fileIn, line))
            {
                char letter = line[0];
                
                if(letter == '#')
                {}
                
                else if(letter == 'C')
                {
                    if(nodeList != NULL)
                    {
                        delete nodeList;
                    }
                    nodeList = new DLList<int>;
                    cout << "LIST CREATED" << endl;
                }
                else
                {
                    if(letter == 'X')
                    {
						if(nodeList == 0) {	// Rob added to make grading easier
							cout << "MUST CREATE LIST" << endl;
						} else {
	                        cout << "LIST CLEARED" << endl;
	                        nodeList->clear();
						}
                    }
                    else if(letter == 'D')
                    {
                        cout << "LIST DELETED" << endl;
                        delete nodeList;
                        nodeList = NULL;
                    }
                    else if(letter == 'A')
                    {
                        try
                        {
                            cout << "VALUE " << nodeList->getFront() << " AT HEAD" << endl;
                        }
                        catch (Error e)
                        {
                            cout << e.message << endl;
                        }
                    }
                    else if(letter == 'Z')
                    {
                        try
                        {
                            cout << "VALUE " << nodeList->getBack() << " AT TAIL" << endl;
                        }
                        catch (Error e)
                        {
                            cout << e.message << endl;
                        }
                    }
                    else if(letter == 'T')
                    {
                        if(nodeList->getSize() > 0)
                        {
                            nodeList->popFront();
                            cout << "REMOVED HEAD" << endl;
                        }
                        else
                        {
                            cout << "LIST EMPTY" << endl;
                        }
                    }
                    else if(letter == 'K')
                    {
                        if(nodeList->getSize() > 0)
                        {
                            nodeList->popBack();
                            cout << "REMOVED TAIL" << endl;
                        }
                        else
                        {
                            cout << "LIST EMPTY" << endl;
                        }
                    }
                    else if(letter == 'N')
                    {
                        cout << "LIST SIZE IS " << nodeList->getSize() << endl;
                    }
                    else if(letter == 'P')
                    {
                        if(nodeList->getSize() > 0)
                        {
                            cout << *nodeList << endl;
                        }
                        else
                        {
                            cout << "LIST EMPTY" << endl;
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
                            cout << "VALUE " << value << " INSERTED" << endl;
                            nodeList->insert(value);
                        }
                        else if(letter == 'F')
                        {
                            cout << "VALUE " << value << " ADDED TO HEAD" << endl;
                            nodeList->pushFront(value);
                        }
                        else if(letter == 'B')
                        {
                            cout << "VALUE " << value << " ADDED TO TAIL" << endl;
                            nodeList->pushBack(value);
                        }
                        else if(letter == 'E')
                        {
                            if(nodeList->removeAll(value))
                            {
                                cout << "VALUE " << value << " ELIMINATED" << endl;
                            }
                            else
                            {
                                cout << "VALUE " << value << " NOT FOUND" << endl;
                            }
                        }
                        else if(letter == 'R')
                        {
                            if(nodeList->removeFirst(value))
                            {
                                cout << "VALUE " << value << " REMOVED" << endl;
                            }
                            else
                            {
                                cout << "VALUE " << value << " NOT FOUND" << endl;
                            }
                        }
                        else if(letter == 'G')
                        {
                            if(nodeList->get(value))
                            {
                                cout << "VALUE " << value << " FOUND" << endl;
                            }
                            else
                            {
                                cout << "VALUE " << value << " NOT FOUND" << endl;
                            }
                            
                        }
                    }
                }
            }
    	}
    	fileIn.close();
    }
    
	return 0;
}