#pragma once
#ifndef KULLANICI_H
#define KULLANICI_H

#include "Kisi.h"

class Kullanici  : public Kisi // kullanýcý id eklenebilir
{
private:
	// const tanýmlayýp member initialize içerisinde fonksiyon kullanabilme
	char* kullanici_adi;
	char* eposta;
	char* adres_ilce;
	char* sifre;
	char* indirim_kodu;
	char* dtarihi;

	// utility function
	bool IsEpostaValid(string);

	string PasswordStrongness(string);
	bool IsSifreValid(string);

	bool IsDtarihiValid(string);

public:

	Kullanici(char*, char*, char*, char*, char*, char*, char*);

	void setKullanici_adi(char*);
	char* getKullanici_adi();

	void setEposta(char*);
	char* getEposta();

	void setAdres_ilce(char*);
	char* getAdres_ilce();

	void setSifre(char*);
	char* getSifre();

	void setIndirim_kodu(char*);
	char* getIndirim_kodu();

	void setDtarihi(char*);
	char* getDtarihi();




};

#endif

