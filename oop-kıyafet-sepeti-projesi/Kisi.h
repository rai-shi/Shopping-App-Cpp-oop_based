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
	bool TelNoValidation(char*); // setTelno i�erisinde �a�r�lacak

public:
	Kisi(char*, char*);

	 Utility utility; 
	// komposizyon olaca�� kesin fakat static olmal� m� emin de�ilim 

	char* getAdSoyad() const;

	void setTelNo(char*);
	char* getTelNo() const;

};

#endif

