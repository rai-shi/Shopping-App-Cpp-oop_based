#pragma once

#ifndef KURYE_H
#define KURYE_H


#include "Kisi.h"
#include "Zaman.h"
class Kurye : public Kisi
{
private:
	Zaman* dagýtým_bitisler;
	int* siparisNumaralarý;

public:
	Kurye();
};


#endif 
