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
	string charToString(char*); // buna da �ok da gerek yok ama dursun 

	string * getTxtContent(string,int);
	int TxtlineCount(string);

	// vector <string*> splitListItems(string[]);

};
#endif

// e�er sorun ��z�l�rse classa gerek olmadan yard�mc� fonksiyonlar� direkt burda depolayabiliriz.
