/** @file */
#include <string>

#include "novel_printer.h"

NovelPrinter::NovelPrinter(std::string novel)
{
	novel_ = novel;
}

void NovelPrinter::PrintNovel()
{
	std::cout << "\n\n" << novel_ << "\n\n";
}