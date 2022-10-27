#include "WordFreqPair.h"


WordFreqPair::WordFreqPair() { //constructs initial object 
	_word = "";
	_count = 0;
}
WordFreqPair::WordFreqPair(std::string word, int count) { //constructs wordfreqpair object containing a string word and number count
	_word = word;
	_count = 1;
}
void WordFreqPair::setWord(std::string word) { //sets word attribute
	_word = word;
}
 std::string WordFreqPair::getWord() { //returns word
	 return _word;
}
void WordFreqPair::setCount() { //sets count attribute
	_count++;
}
int WordFreqPair::getCount() { //returns count
	return _count;
}


