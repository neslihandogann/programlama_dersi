#include <iostream>//giriþ çýkýs kütüphanesi
#include<locale.h>//türkçe karakter kütüphanesi
using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
     int n, sayi, kalan, ters = 0;

     cout << "pozitif deðerde sayý giriniz: ";
     cin >>sayi;

     n =sayi;

     do
     {
         kalan = sayi % 10;//404%10= kalan 4
         ters = (ters * 10) + kalan;// 40 kaldý 40 ý 10 ile * ve 400+ kalaný ekle yani 4
         sayi = sayi / 10;// sayýyý 404 / 10 a böl 40
     } while (sayi != 0);//sayý 0 a þit olmasýn

     cout << " sayýnýn tersi " << ters << endl;

     if (n == ters)//ters sayýya eþit ise yani tersine
         cout << "girilen sayý palindromdur.";
     else
         cout << " girilen sayý palindrom deðil.";

    return 0;
}
