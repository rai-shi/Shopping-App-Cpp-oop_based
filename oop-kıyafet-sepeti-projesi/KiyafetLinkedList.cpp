#include "KiyafetLinkedList.h"


KiyafetList::KiyafetList()
{
	this->first = nullptr;
	this->last = nullptr;
	this->current = nullptr;
	this->itemCount = 0;
}

void KiyafetList::AddItem(Kiyafet& kiyafet)
{
	itemCount++;

	if (this->first == nullptr) // ilk item
	{
		first = &kiyafet;
		current = &kiyafet;
		current->nextObject = this->last;
	}
	else // first->new->last
	{
		this->current->nextObject = &kiyafet;
		current = &kiyafet;
		current->nextObject = this->last;
	}
}

void KiyafetList::RemoveItem(Kiyafet& kiyafet)
{
	if (itemCount != 0) // listede eleman var ise
	{
		Kiyafet* temp = &kiyafet;
		Kiyafet* item = this->first;

		for (int i = 0; i < this->itemCount; i++)
		{
			if (item->nextObject == temp)
			{
				item->nextObject = temp->nextObject; // obje silinmedi tabiki ama baðlantý koptu
				delete temp;
				// kiyafet.~Kiyafet(); sanýrým gereksiz? ya da gerekli koca bir next item yeri daha tutuyor sonuçta
				itemCount--;
			}
			else
			{
				item = item->nextObject;
			}
		}
	}
	else
	{
		cout << "depo bombos...";
	}
}

Kiyafet* KiyafetList::getItem(int id) // kiyafet adýna göre arýyacak
{
	Kiyafet* temp = nullptr;
	Kiyafet* item = this->first;

	for (int i = 0; i < this->itemCount; i++)
	{
		if (item->getKiyafetAdi() == id)
		{
			return item;
		}
		else
		{
			item = item->nextObject;
		}
	}

}

void KiyafetList::printList()
{
	Kiyafet* kiyafet = this->first;
	cout << this->first->getKiyafetAdi() << endl;
	while (kiyafet->nextObject != nullptr)
	{
		cout << kiyafet->nextObject->getKiyafetAdi() << endl;
		kiyafet = kiyafet->nextObject;
	}
}