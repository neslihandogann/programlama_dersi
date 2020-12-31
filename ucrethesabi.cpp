#include <iostream>
using namespace std;
// 5000 TLden Sonra 1000 TL Prim
char adi[22];
char s_adi[22];
float saat;
float top_satis, prim, ucret;
int main(){
cout << "**** Ucret Hesabi **** \n\n";
cout << "Satis elemaninin adini giriniz: ";
cin >> adi;
cout << "Satis elemaninin soyadini giriniz: ";
cin >> s_adi;
cout << "Calistigi toplam saati giriniz: ";
cin >> saat;
ucret=50*(float)saat;
cout << "Sattigi urunler toplamini giriniz: ";
cin >> top_satis;
if(top_satis > 5000)
prim = 1000;
else
prim=0;
cout << "\n**** Odenecek Ucret **** \n";
cout << "\nSatis Elemani: " << adi << " " <<
s_adi << "\n";
cout << "\nMaas Bordrosu:\n";
cout << "--------------\n";
cout << "Ucret= " <<ucret<< " ve Alacagi Prim=" << prim << "\n";

cout << "Toplam= " << ucret+prim << " TL odenecektir." << endl;

return 0;}
