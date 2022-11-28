#pragma once
#ifndef SIPARIS_H
#define SIPARIS_H

#include "Kiyafet.h"
#include "Zaman.h"

class Siparis : public Kiyafet
{
private:
	int siparis_no;
	double siparis_fiyat;
	Zaman siparis_baslangic;
	Zaman siparis_ulasým;

public:
	Siparis(int, double); // siparis_no ve siparis_fiyat diðerleri ?


};

#endif

