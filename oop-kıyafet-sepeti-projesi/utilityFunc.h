#pragma once 
#ifndef UTILITYFUNC_H
#define UTILITYFUNC_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


class Utility
{
public:

	char* stringToChar(string);
	string charToString(char*); // buna da çok da gerek yok ama dursun 

	string * getTxtContent(string,int);
	int TxtlineCount(string);

	vector<vector<string>> splitListItems(string list[], int listSize);


};
#endif

// eðer sorun çözülürse classa gerek olmadan yardýmcý fonksiyonlarý direkt burda depolayabiliriz.
