#ifndef __NOVEL_PRINTER__
#define __NOVEL_PRINTER__

/// @file 
/// @brief novel_printer class definition 

#include <iostream>
#include <string>

/// @class NovelPrinter 
/// Novel Printing class to print novel novel
///
/// blah blah blah
/// blah blah bleh
 

class NovelPrinter{

public:
	/// Constructor to novel class
	///
	/// @param novel input string to save to novel private member
	NovelPrinter(std::string novel);

	/// Novel Printer
	///
	/// Prints the member field novel_
	/// using std::cout to pring
	void PrintNovel();

private:
	
	std::string novel_; ///< string to contain the work-in-progress masterpiece

};

#endif