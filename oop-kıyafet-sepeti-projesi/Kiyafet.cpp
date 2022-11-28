#include "Kiyafet.h"


Kiyafet::Kiyafet(char* kategori, int kiyafet_adi, double fiyat, char* boyut, char* renk, int stok)
{
	setKategori(kategori);
	setKiyafetAdi(kiyafet_adi);
	setFiyat(fiyat);
	setBoyut(boyut);
	setRenk(renk);
	setStok(stok);
}

// elbise tshirt pantolon gömlek etek ayakkabý
void Kiyafet::setKategori(char* kategori)
{
	string category = utility.charToString(kategori);
	while (true)
	{
		if ((category == "elbise") || (category == "tshirt") || (category == "pantolon") || (category == "gomlek") || (category == "etek") || (category == "ayakkabi"))
		{
			this->kategori = kategori;
			break;
		}
		else
		{
			string tempstr;
			char* tempchr = nullptr;
			cout << "yanlis kategori girisi yaptiniz. lutfen tekrar giriniz: ";
			cin >> tempstr;
			tempchr = utility.stringToChar(tempstr);
			setKategori(tempchr);
			break;
		}
	}
}
char* Kiyafet::getKategori()
{
	return this->kategori;
}

void Kiyafet::setKiyafetAdi(int kiyafet_adi)
{
	this->kiyafet_adi = kiyafet_adi;
}
int Kiyafet::getKiyafetAdi()
{
	return this->kiyafet_adi;
}

void Kiyafet::setFiyat(double)
{
	while (true)
	{
		if (fiyat > 0.0)
		{
			this->fiyat = fiyat;
			break;
		}
		else
		{
			double tempFiyat;
			cout << " fiyat 0 ya da negatif bir deger olamaz. lütfen dogru giriniz: ";
			cin >> tempFiyat;
			setFiyat(tempFiyat);
			break;
		}
	}
}
double Kiyafet::getFiyat()
{
	return this->fiyat;
}

// s m l xl
// ayrýca burada gelen char param str'ye dönüþtürmeden kullanýldý.
// eðer sorun çýkmaz sa str = char * atamalarýnda utility fonksiyonlara gerek yok.
void Kiyafet::setBoyut(char* boyut)
{
	while (true)
	{
		if ((boyut == "s") || (boyut == "m") || (boyut == "l") || (boyut == "xl") )
		{
			this->boyut = boyut;
			break;
		}
		else
		{
			string tempstr;
			char* tempchr = nullptr;
			cout << "yanlis boyut girisi yaptiniz. lutfen tekrar giriniz: ";
			cin >> tempstr;
			tempchr = utility.stringToChar(tempstr);
			setBoyut(tempchr);
			break;
		}
	}
}
char* Kiyafet::getBoyut()
{
	return this->boyut;
}

// mavi, yeþil, kýrmýzý, sarý, siyah, beyaz
void Kiyafet::setRenk(char* renk)
{
	while (true)
	{
		if ((renk == "mavi") || (renk == "yesil") || (renk == "kirmizi") || (renk == "sari") || (renk=="siyah") || (renk == "beyaz"))
		{
			this->renk = renk;
			break;
		}
		else
		{
			string tempstr;
			char* tempchr = nullptr;
			cout << "yanlis renk girisi yaptiniz. lutfen tekrar giriniz: ";
			cin >> tempstr;
			tempchr = utility.stringToChar(tempstr);
			setRenk(tempchr);
			break;
		}
	}
}
char* Kiyafet::getRenk()
{
	return this->renk;
}

void Kiyafet::setStok(int stok)
{
	while (true)
	{
		if (stok > 0)
		{
			this->stok = stok;
			break;
		}
		else
		{
			int tempStok;
			cout << "Stok degeri 0 veya negatif olamaz. lutfen tekrar giriniz: ";
			cin >> tempStok;
			setStok(tempStok);
			break;
		}
	}
}
int Kiyafet::getStok()
{
	return this->stok;
}
void Kiyafet::StokArttir(int inc)
{
	if (inc > 0)
	{
		this->stok += inc;
	}
	else
	{
		cout << "stok arttirmak icin yanlis deger girdiniz. isteginiz uygulanmamistir.";
	}
}
void Kiyafet::StokAzalt(int dec)
{
	if (dec > 0)
	{
		this->stok -= dec;
	}
	else
	{
		cout << "stok azaltmak icin yanlis deger girdiniz. isteginiz uygulanmamistir.";
	}
}
void Kiyafet::StokDefaultAzaltma()
{
	this->stok -= 1;
}

/*
Kiyafet::~Kiyafet()
{
	delete nextObject;
}
*/