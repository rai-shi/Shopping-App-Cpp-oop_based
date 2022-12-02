#include "utilityFunc.h"

char* Utility::stringToChar(string str)
{
	char* chr = new char[str.length()];
	for (int i = 0; i < str.length(); i++)
	{
		chr[i] = str[i];
	}
	chr[str.length()] = '\0';

	// char*'lar c-type stringlerdir. 
	// stringler '\0' karakterine sahiptir ki bellek nereye kadar okuyacaðýný bilsin, \0 görünce okumayý býrakýr
	// char * sonuna \0 ekleyince artýk garbage valuelar okunmuyor gerçek bir string'e dönüþüyor.

	return chr;
}

string Utility::charToString(char* chr)
{
	string str;
	str = chr;
	return str;
}

int Utility::TxtlineCount(string txtName)
{
	ifstream read;
	string line;
	int numberOfLines = 0;

	read.open(txtName, ios::app);

	if (read.is_open())
	{
		while (!(read.eof()))
		{
			getline(read, line);
			numberOfLines++;
		}
	}
	read.close();
	return numberOfLines;
}

string* Utility:: getTxtContent(string txtName, int txtLineCount) 
{
	ifstream read;
	string line;
	string* txtLines = new string[txtLineCount + 1];  
	int i = 0;

	read.open(txtName, ios::app);

	if (read.is_open())
	{
		for (int i = 0; i < txtLineCount; i++)
		{
			getline(read, line);
			txtLines[i] = line;
		}
	}
	read.close();
	return txtLines;
}




vector<vector<string>> Utility::splitListItems(string list[], int listSize)
{
	string bracket = ",";
	string line;
	vector<string> words;
	vector<vector<string>> lines;

	for (int i = 0; i < listSize; i++)
	{
		int pos = 0;
		int wordsindex = 0;


		line = list[i];


		while ((pos = line.find(bracket)) != string::npos)
		{
			words.push_back(line.substr(0, pos));
			line = line.erase(0, pos + bracket.length());
		}
		words.push_back(line);

		lines.push_back(words);

		for (int j = 0; j < 4; j++)
		{
			words.clear();
		}
	}

	return lines;
}
