#include "Kullanici.h"

Kullanici::Kullanici(char* name, char* kullanici_adi, char* eposta, char* sifre,
	char* telno, char* adres_ilce,  char* dtarihi)
	:Kisi(name,telno)
{
	setKullanici_adi(kullanici_adi);
	setEposta(eposta);
	setAdres_ilce(adres_ilce);
	setSifre(sifre);
	setDtarihi(dtarihi);

    char* default_kod = utility.stringToChar("0"); 
    // ileride kullanýrken de 0 olmadýðý sürece indirim kodunu uygula denir.
    setIndirim_kodu(default_kod);

    cout << getAdSoyad() << " " << getKullanici_adi()<< " "
        << getEposta() << " " << getTelNo() << " "
        << getSifre() << " " << getAdres_ilce() << " "
        << getDtarihi() << " " << getIndirim_kodu() << endl;
}

bool Kullanici::IsEpostaValid(string email)
{
    bool goodstarting = false;      // baþýnda sayý @ olmayacak
    bool hasAt = false;         // @ içerecek
    bool goodending = false;    // .com içerecek

    bool hasvalidservice = false;    // gmail, hotmail vb. kontrolü
    string validServices[2] = { "hotmail", "gmail" };


    // kontroller
    if (email[0] != ('@') && not(isdigit(email[0]))) { goodstarting = true; } // baþlangýcýnda @ yoksa ve baþý digit deðilse

    size_t foundAt = email.find('@'); // içinde @ bulunuyor
    if (foundAt != string::npos) { hasAt = true; }

    for (int i = 0; i < 2; i++)  // belirtilen email servislerinden biri mevcut 
    {
        size_t foundService = email.find(validServices[i]);
        if (foundService != string::npos) { hasvalidservice = true; break; }
    }

    if (email.substr(email.length() - 4) == ".com") { goodending = true; } // sonunda .com var

    if (goodstarting && goodending && hasAt && hasvalidservice)
        return true;
    else
        return false;
}

string Kullanici::PasswordStrongness(string password)
{

    int sifre_uzunlugu = password.length();
    bool buyuk_harf = false;
    bool kucuk_harf = false;
    bool rakam = false;

    string special_chars = "~! @#$%^&*()_-+={[}]|:;'<,>.?/";
    bool ozel_char = false;

    for (int i = 0; i < sifre_uzunlugu; i++)
    {
        if (isupper(password[i])) { buyuk_harf = true; }
        if (islower(password[i])) { kucuk_harf = true; }
        if (isdigit(password[i])) { rakam = true; }

        size_t found = password.rfind(special_chars);
        if (found != std::string::npos) { ozel_char = true; }
    }

    string return_value;

    if (buyuk_harf && kucuk_harf && rakam && ozel_char && (sifre_uzunlugu >= 8))
    {
        return_value = " cok guclu";
    }
    if (buyuk_harf && kucuk_harf && rakam && (sifre_uzunlugu >= 8))
    {
        return_value = "guclu";
    }
    else if ((buyuk_harf || kucuk_harf) && (sifre_uzunlugu >= 8))
    {
        return_value = "ortalama";
    }
    else
    {
        return_value = "zayif";
    }
    return return_value;
}
bool Kullanici::IsSifreValid(string strogness)
{
    if ((strogness == "guclu") || (strogness == "ortalama"))
    {
        return true;
    }
    else {
        return false;
    }
}

bool Kullanici::IsDtarihiValid(string)
{
    return true;
}


void Kullanici::setKullanici_adi(char* param)
{
    this->kullanici_adi = param;
}
char* Kullanici::getKullanici_adi()
{
    return this->kullanici_adi;
}

void Kullanici::setEposta(char* param)
{
    bool isValid = IsEpostaValid(param);
    while (true)
    {
        if (isValid)
        {
            this->eposta = param;
            break;
        }
        else
        {
            char* tempchar = nullptr;
            string tempstr;

            cout << "gecersiz eposta girimi lutfen bir daha giriniz: ";
            cin >> tempstr;
            tempchar = utility.stringToChar(tempstr);
            setEposta(tempchar);
            break;
        }
    }
}
char* Kullanici::getEposta()
{
    return this->eposta;
}

void Kullanici::setAdres_ilce(char* param)
{
    this->adres_ilce = param;
} 
// belirtilen adreslerden birine seçim yapýnýz gibi bir seçenek belirlenebilir.
char* Kullanici::getAdres_ilce()
{
    return this->adres_ilce;
}

void Kullanici::setSifre(char* param)
{
    string parameter = utility.charToString(param);
    string strongness = PasswordStrongness(parameter);
    bool isValid = IsSifreValid(strongness);
    while (true)
    {
        if (isValid)
        {
            this->sifre = param;
            break;
        }
        else
        {
            char* tempchar = nullptr;
            string tempstr;

            cout << "gecersiz sifre girimi lutfen bir daha giriniz: ";
            cin >> tempstr;
            tempchar = utility.stringToChar(tempstr);
            setSifre(tempchar);
            break;
        }
    }
}
char* Kullanici::getSifre()
{
    return this->sifre;
}

void Kullanici::setIndirim_kodu(char* param)
{
    this->indirim_kodu = param;
}
char* Kullanici::getIndirim_kodu()
{
    return this->indirim_kodu;
}

void Kullanici::setDtarihi(char* param)
{
    bool isValid = IsDtarihiValid(param);
    while (true)
    {
        if (isValid)
        {
            this->dtarihi = param;
            break;
        }
        else
        {
            char* tempchar = nullptr;
            string tempstr;

            cout << "gecersiz dogum tarihi girimi lutfen bir daha giriniz: ";
            cin >> tempstr;
            tempchar = utility.stringToChar(tempstr);
            setDtarihi(tempchar);
            break;
        }
    }
}
char* Kullanici::getDtarihi()
{
    return this->dtarihi;
}
