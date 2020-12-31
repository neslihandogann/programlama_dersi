#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int gizli;
int tahmin;
int yanit;
gizli = rand() % 100;
cout << "Tahmininizi giriniz: ";
cin >> tahmin;
if (tahmin==gizli) {
cout << "Tebrikler! Gizli sayiyi buldunuz. \n";
cout << "Gizli sayi= " << gizli << "\n";
return 0; }
else {
cout << "Uzgunum! Gizli sayiyi bulamadiniz. \n";
if (tahmin>gizli)
cout << "Tahmininiz daha buyuktur. \n";
else cout << "Tahmininiz daha kucuktur. \n"; }
cout << "Gizli sayiyi bilmek ister misiniz?" <<
"\n";
cout << "Evet icin 1 - Hayir icin 0 giriniz: ";
cin >> yanit;
if (yanit==1) cout << "Gizli Sayi = " << gizli <<
"\n";
if (yanit==0) cout << "Program kapaniyor... \n";
return 0; }
