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
	void StokAzalt(int); // buna çok gerek yok gibi, neden durduk yere azaltmak istesin ki
	void StokDefaultAzaltma(); // kiyafet satýldýkça azaltma yapacak

	// ~Kiyafet();
};

#endif
/*
kýyafetleri dosyadan alýp her bir satýrý vektöre koyacaðýz pointer listtede tutabiliriz, daha sonra silinme iþlemi de yapýlabilir
her bir satýr ayrýþtýrýlýp dizi haline getirelecek 
her bir diziyi bir kýyafet objesine atayacaðýz ve bir obje listesinde tutacaðýz.
bunun için ayrý kifayetList adýnda bir class ve fonksiyonlarýna ihtiyaç var.
*/

