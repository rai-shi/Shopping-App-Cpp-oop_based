#pragma once

#ifndef YONETICI_H
#define YONETICI_H

#include "Kisi.h"

class Yonetici : public Kisi
{
private:
	char* sifre;

	// utility function
	bool IsSifreValid(string);
	string PasswordStrongness(char*);

public:
	Yonetici();

	void setS�fre(char*);
	char* getSifre();



};

#endif