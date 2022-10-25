#include "DocSummary.h"
#include "wordfreqpair.cpp"


DocSummary::DocSummary(std::string filename) {
	std::string filename = filename;
	_numberOfSentences = 0;
	_numberOfWords = 0;
	punctuaion = ".", "!", "?";
}


void DocSummary::printSummary(){
	cout << "There are:" << _numberOfSentences << " sentences.";
	cout << "There are:" << _numberOfWords << " words.";
}

void DocSummary::increaseSentenceCount(std::string newWord) {
	for (WordFreqPair wordObj : wordList) {
		if (wordObj.getWord().find(punctuaion) != std::string::npos) {
			_numberOfSentences++;
		}
	}
}

void DocSummary::addWord(std::string newWord) {
	for (WordFreqPair wordObj: wordList) {
		if (wordObj.getWord() == newWord) {
			wordObj.setCount();
		}
	}
}

void DocSummary::analyseDocument() {

}

