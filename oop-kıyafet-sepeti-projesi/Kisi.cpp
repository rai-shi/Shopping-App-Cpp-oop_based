#include "Kisi.h"

Kisi::Kisi(char* ad_soyad, char* telno) 
	:ad_soyad(ad_soyad)
{
	setTelNo(telno);
}

bool Kisi::TelNoValidation(char* telno)
{
	return true;
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

