// Bleep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"


int main()
{
	string disliked = "scary";
	string disliked2 = "sleep";
	string disliked3 = "monday";

	vector<string>words;
	for (string temp; cin >> temp;)
		words.push_back(temp);
	cout << "Number of words: " << words.size() << endl;

	for (int i = 0; i < words.size(); i++)
		if (words[i] == disliked || words[i] == disliked2 || words[i] == disliked3)
		{
			words[i] = "Bleeep";
		}
	for (int i = 0; i < words.size(); i++)
		if (i == 0 || words[i - 1] != words[i]) // is this a new word?
		{
			cout << words[i] << endl;
		}

	system("pause");
    return 0;
}

