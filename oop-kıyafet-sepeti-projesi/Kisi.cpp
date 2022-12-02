#include "Kisi.h"

Kisi::Kisi(char* ad_soyad, char* telno) 
	:ad_soyad(ad_soyad)
{
	setTelNo(telno);
}

bool Kisi::TelNoValidation(string telno)
{

	//regular expression
	// 1)  05 ile baþlayanlar
	// 2)  0123456789 ile devam edenler
	// 3)  11 rakam toplamda
	const regex pattern("(05)?[0-9]{11}");

	// regex_match() girilen numara ile regular expression arasýndaki uyuma bakacak
	if (regex_match(telno, pattern))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Kisi::setTelNo(char* telno)
{
	while (true)
	{
		if (TelNoValidation(telno))
		{
			this->telno = telno;
			break;
		}
		else
		{
			string tempstr;
			char* tempchar= nullptr;
			cout << "girilen telno uygun degil.tekrar giriniz: ";
			cin >> tempstr;
			tempchar = utility.stringToChar(tempstr);
			setTelNo(tempchar);
			break;
		}
	}
}
char* Kisi::getTelNo() const
{
	return this->telno;
}

char* Kisi::getAdSoyad() const
{
	return this->ad_soyad;
}

