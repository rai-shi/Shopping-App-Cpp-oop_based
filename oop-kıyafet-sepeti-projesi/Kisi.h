#pragma once
#ifndef KISI_H
#define KISI_H

#include <iostream>
#include "UtilityFunc.h"

using namespace std;

class Kisi
{
private :
	// data member
	char* const ad_soyad;
	char* telno; 


	// utility function
	bool TelNoValidation(char*); // setTelno içerisinde çaðrýlacak

public:
	Kisi(char*, char*);

	 Utility utility; 
	// komposizyon olacaðý kesin fakat static olmalý mý emin deðilim 

	char* getAdSoyad() const;

	void setTelNo(char*);
	char* getTelNo() const;

};

#endif

