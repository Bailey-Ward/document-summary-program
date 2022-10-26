#include "DocSummary.h"

DocSummary::DocSummary(std::string filename) {
	std::string fileName = filename;
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
	fstream file;
	std::string word1;
	file.open(filename.c_str());
	while (file >> word1) {
		cout << word1 << " ";
		WordFreqPair newWord(word1);
		wordList.push_back(newWord);
	}
	file.close();
	addWord(word1);
	increaseSentenceCount(word1);

}

