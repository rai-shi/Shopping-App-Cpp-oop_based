#pragma once
#ifndef KIYAFETLINKEDLIST_H
#define KIYAFETLINKEDLIST_H

#include "Kiyafet.h"

// bir nevi linked list olacak her seferinde son item nullptr olacak 
// forlar da nullptr gelene kadar �al��t�r�l�r
class KiyafetList
{
private:
	int itemCount;
	Kiyafet* first;
	Kiyafet* current;
	Kiyafet* last;

public:
	KiyafetList();

	void AddItem(Kiyafet& kiyafet);

	void RemoveItem(Kiyafet& kiyafet);

	Kiyafet* getItem(int id); // kiyafet ad�na g�re ar�yacak

	void printList();
};

#endif