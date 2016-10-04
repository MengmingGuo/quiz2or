/** @file: tarray.h
 * @brief: This is a class to introduce you to the syntax of working with 
 * template classes. Notice that the type being stored is completely
 * anonymous.
 * Your assignment is to implent the eight functions listed in this 
 * header in a tarray.template file.
 * @author: John Dolan			
 */

#include<iostream>

template<class T>
class Tarray{
    public:
	/* Constructor makes an object with a dynamic array of size 5 */
	Tarray(); 

    	
	void add(T item);

	/** iterator functions
         *places the current_index at the beginning of the array
	 */ 
         void start();

	
	bool is_item()const;

	/* moves current index to the next array location */
	void advance();

   	
	T current()const;

	/* removes the item at the current index spot */
	void remove_current();
    private:
	void resize();
	T *data; 
	std::size_t capacity;
	std::size_t used;
	std::size_t current_index;
};


#include "tarray.template"
