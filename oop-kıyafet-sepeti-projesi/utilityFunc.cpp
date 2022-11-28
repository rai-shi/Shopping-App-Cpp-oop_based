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
			txtLines[i++] = line; // satýrlarý okudukça birer elaman olarak listeye koy
		}
	}
	txtLines[i] = "null"; // bitiþi belirtmek için
	return txtLines;
}

