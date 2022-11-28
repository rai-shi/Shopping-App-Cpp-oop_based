#pragma once

#ifndef KIYAFET_H
#define KIYAFET_H

#include "UtilityFunc.h"

class Kiyafet
{
private:
	char* kategori;
	int kiyafet_adi;
	double fiyat;
	char* boyut;
	char* renk;
	int stok;

public:
	Kiyafet(char*, int, double, char*, char*, int);
	Kiyafet* nextObject;
	Utility utility;

	void setKategori(char*);
	char* getKategori();
	
	void setKiyafetAdi(int);
	int getKiyafetAdi();

	void setFiyat(double);
	double getFiyat();

	void setBoyut(char *);
	char* getBoyut();

	void setRenk(char *);
	char* getRenk();

	void setStok(int);
	int getStok();
	void StokArttir(int);
	void StokAzalt(int); // buna �ok gerek yok gibi, neden durduk yere azaltmak istesin ki
	void StokDefaultAzaltma(); // kiyafet sat�ld�k�a azaltma yapacak

	// ~Kiyafet();
};

#endif
/*
k�yafetleri dosyadan al�p her bir sat�r� vekt�re koyaca��z pointer listtede tutabiliriz, daha sonra silinme i�lemi de yap�labilir
her bir sat�r ayr��t�r�l�p dizi haline getirelecek 
her bir diziyi bir k�yafet objesine atayaca��z ve bir obje listesinde tutaca��z.
bunun i�in ayr� kifayetList ad�nda bir class ve fonksiyonlar�na ihtiya� var.
*/

