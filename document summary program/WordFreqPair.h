#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;


class WordFreqPair {
private:
	int _count;
	std::string _word;

public:
	WordFreqPair(void);
	WordFreqPair(std::string, int);
	void setWord(std::string);
	std::string getWord();
	void setCount();
	int getCount();
};

