#pragma once

#ifndef ZAMAN_H
#define ZAMAN_H

class Zaman
{
private:
	int dakika;
	int saat;
public:

	Zaman(int, int);

	void setSaat(int);
	int getSaat();

	void setDakika(int);
	int getDakika();
};

#endif

