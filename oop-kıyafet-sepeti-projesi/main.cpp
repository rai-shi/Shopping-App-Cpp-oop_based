#include <iostream>
using namespace std;

#include "Kisi.h"
#include "Kiyafet.h"
#include "Zaman.h"
#include "Kullanici.h"
#include "utilityFunc.h"
#include "KiyafetLinkedList.h"


int main()
{
	
//  kiþi kullanýcý utility kontrolü
	
	Utility utility;

	string sname = "bidi";
	string snickname = "rai";
	string seposta = "bidi@hotmail.com";
	string spassword = "Raishi1234"; //"Raishi1234"
	string stelno = "05061400604";
	string sadres = "ortahisar";
	string starih = "12-3-2000";

	char* cname = new char[sname.length()];
	char* cnickname = new char[snickname.length()];
	char* ceposta = new char[seposta.length()];
	char* cpassword = new char[spassword.length()];
	char* ctelno = new char[stelno.length()];
	char* cadres = new char[sadres.length()];
	char* ctarih = new char[starih.length()];

	cname = utility.stringToChar(sname);
	cnickname = utility.stringToChar(snickname);
	ceposta = utility.stringToChar(seposta);
	cpassword = utility.stringToChar(spassword);
	ctelno = utility.stringToChar(stelno);
	cadres = utility.stringToChar(sadres);
	ctarih = utility.stringToChar(starih);

	Kullanici person(cname, cnickname,ceposta,cpassword, ctelno,cadres,ctarih);
	
	int LineCount = utility.TxtlineCount("kiyafetdeposu.txt");
	string* TxtLines = utility.getTxtContent("kiyafetdeposu.txt",LineCount);

	vector<vector<string>> kiyafetler;
	kiyafetler =	utility.splitListItems(TxtLines,5);


	for (int i = 0; i < LineCount; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << kiyafetler[i][j] << " ";
		}
		cout << endl;
	}



	

	


}

