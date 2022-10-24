#include "DocSummary.h"
#include "wordfreqpair.cpp"


class DocSummary {
private:
	std::string filename = "textfile.txt";
	int numberOfSentences{};
	int numberOfWords{};
	std::vector<WordFreqPair> wordList;

public:
	int _numberOfSentences;
	int _numberOfWords;
	DocSummary() {
		_numberOfSentences = numberOfSentences;
		_numberOfWords = numberOfWords;
	}
	void printSummary(){
		cout << "There are:" << numberOfSentences << " sentences.";
		cout << "There are:" << numberOfWords << " words.";
	}
private:
	std::string increaseSentenceCount() {

	}
	std::string addWord() {

	}
public:
	void analyseDocument() {

	}
};
