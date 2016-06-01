#ifndef __NOVEL_PRINTER__
#define __NOVEL_PRINTER__

/** @file novel_printer class definition */
#include <iostream>
#include <string>

/** @class NovelPrinter 
 *  @brief Novel Printing class to print novel novels
 * 
 *  blah blah blah
 *  blah blah bleh
 */ 

class NovelPrinter{

public:
	/// Constructor to novel class
	NovelPrinter(std::string novel);

	/// Prints the member field novel_
	void PrintNovel();

private:
	/// the member field that contains the goodies
	std::string novel_;

};

#endif