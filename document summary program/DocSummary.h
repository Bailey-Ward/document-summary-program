#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "WordFreqPair.h"

using namespace std;

class DocSummary {
private:
	std::string filename;
	int _numberOfSentences;
	int _numberOfWords;
	std::vector<WordFreqPair> wordList;
	void increaseSentenceCount(std::string);
	void addWord(std::string);
	std::string punctuaion;

public:

	DocSummary(std::string);
	void printSummary(void);
	void analyseDocument(void);
};
