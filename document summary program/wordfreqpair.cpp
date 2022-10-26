#include "WordFreqPair.h"


WordFreqPair::WordFreqPair() {
	_word = "";
	_count = 0;
}

WordFreqPair::WordFreqPair(std::string word, int count) {
	_word = word;
	_count = 0;
}
void WordFreqPair::setWord(std::string word) {
	_word = word;

}
 std::string WordFreqPair::getWord() {
	 return _word;
}
void WordFreqPair::setCount() {
	_count++;
}
int WordFreqPair::getCount() {
	return _count;
}


