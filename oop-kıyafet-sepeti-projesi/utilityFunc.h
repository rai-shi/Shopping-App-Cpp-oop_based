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
	// buna da çok da gerek yok ama dursun 
	string charToString(char*);

	string * getTxtContent(string);
	// vector <string*> splitListItems(string[]);

};
#endif

// eðer sorun çözülürse classa gerek olmadan yardýmcý fonksiyonlarý direkt burda depolayabiliriz.
