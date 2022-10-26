#include "DocSummary.h"

DocSummary::DocSummary(std::string filename) {
	std::string fileName = filename;
	_numberOfSentences = 0;
	_numberOfWords = 0;
	punctuaion = ".", "!", "?";
	fstream file;
	std::string word1;
	file.open(filename.c_str());
	while (file >> word1) {
		cout << word1 << " ";
		WordFreqPair newWord(word1, 1);
		wordList.push_back(newWord);
	}
	file.close();
}

void DocSummary::printSummary(){
	cout << "\nThere are:" << _numberOfSentences << " sentences.\n";
	cout << "There are:" << _numberOfWords << " words.\n";
	for (int i = 0; i < wordList.size(); i++) {
		cout << wordList[i].getWord() << "\t" << wordList[i].getCount() << "\n";
	}
}

void DocSummary::increaseSentenceCount(std::string newWord) {
	for (int i = 0; i < wordList.size(); i++) {
		if (wordList[i].getWord().find(punctuaion) != std::string::npos) {
			_numberOfSentences++;
		}
	}
}

void DocSummary::addWord(std::string newWord) {
	for (int i = 0; i < wordList.size(); i++) {
		if (wordList[i].getWord() == newWord) {
			wordList[i].setCount();
		}
	}
}

void DocSummary::analyseDocument() {
	for (int i = 0;i < wordList.size(); i++) {
		
	}
}
	




