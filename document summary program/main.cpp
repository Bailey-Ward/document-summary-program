#include <iostream>
#include <fstream>
#include <string>
#include "DocSummary.h"

int main()
{
	DocSummary doc1("textfile.txt");
	doc1.analyseDocument();
	doc1.printSummary();

	getchar();
}