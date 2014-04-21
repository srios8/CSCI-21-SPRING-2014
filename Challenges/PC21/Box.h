/*
 *Programming challenge 21
 *Stacy A. Rios
 *April 21st, 2014
 */
 #pragma once
 #include <string>
 #include <iostream>
 #include <cstdlib>
 
 using namespace std;
 
 template <typename Temp>
 class Box{
	public:

		/*
         *one parameter newContents to be assigned to contents
         */
		Box(Temp newContents);

		/*
         * getter
         */
		Temp getContents();

		/*
	     *setter
		 */
		void setContents(Temp newContents);

		/*
		 *function overloads operator
		 */
		friend ostream& operator << (ostream& out, Box<Temp> in)
		{
			return out << in.getContents();
		}

 	private:
		Temp contents;
 };
 
template <typename Tbox>
Box <Tbox>::Box(Tbox newContents)
:contents(newContents)
{}

template <typename Tvar>
Tvar Box <Tvar>::getContents()
{
	return contents;
}

template <typename Tnew>
void Box<Tnew>::setContents(Tnew newContents)
{
	contents = newContents;
}