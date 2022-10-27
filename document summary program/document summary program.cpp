#include "DocSummary.h"


DocSummary::DocSummary(std::string filename) {
	filename = filename;
	_numberOfSentences = 1;
	_numberOfWords = 0;
	punctuaion = ".", "!", "?";
	fstream file;
	std::string word1;
	file.open(filename.c_str()); //file is read in to a string and printed
	while (file >> word1) {
		cout << word1 << " ";
		addWord(word1);		
		_numberOfWords++; //number of words are incremented
	}
	file.close();	//file is closed	
	increaseSentenceCount(word1); 
}

void DocSummary::printSummary(){ //prints the number of sentences, words, and the objects
	cout << "\nThere are:" << _numberOfSentences << " sentences.\n";
	cout << "There are:" << _numberOfWords << " words.\n";
	for (int i = 0; i < wordList.size(); i++) {
		cout << wordList[i].getWord() << "\t" << wordList[i].getCount() << "\n";
	}
}

void DocSummary::increaseSentenceCount(std::string newWord) { //searches for punctuation 
	for (int i = 0; i < wordList.size(); i++) {
		if (wordList[i].getWord().find(punctuaion) != std::string::npos) {
			_numberOfSentences++;
		}
	}
}

void DocSummary::addWord(std::string newWord) { //adds words to the wordfreqpair object if they dont already exist, and if they do only the count attribute is incremented
	bool exists = false;
	for (int i = 0; i < wordList.size(); i++) {
		if (wordList[i].getWord() == newWord) {
			wordList[i].setCount();
			return;
		}
	}
	WordFreqPair newNewWord(newWord, 1);
	wordList.push_back(newNewWord);
}


	




