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
	// stringler '\0' karakterine sahiptir ki bellek nereye kadar okuyaca��n� bilsin, \0 g�r�nce okumay� b�rak�r
	// char * sonuna \0 ekleyince art�k garbage valuelar okunmuyor ger�ek bir string'e d�n���yor.

	return chr;
}

string Utility::charToString(char* chr)
{
	string str;
	str = chr;
	return str;
}

string *Utility::getTxtContent(string txtName) 
{
	ifstream read;		
	string line;
	string * txtLines = nullptr;
	int i = 0;

	read.open(txtName, ios::app);

	if (read.is_open()) 
	{											
		while (!(read.eof())) 
		{											
			getline(read, line);
			txtLines[i++] = line; // sat�rlar� okuduk�a birer elaman olarak listeye koy
		}
	}
	txtLines[i] = "null"; // biti�i belirtmek i�in
	return txtLines;
}

