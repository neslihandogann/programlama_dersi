#include <iostream>

using namespace std;

int main(){

  int faktoriyel = 1, sayi = 0;


  cout << "Sayi giriniz: ";
  cin >> sayi;

  while (sayi >= 2){
    faktoriyel *= sayi;
    sayi--;
  }

  cout <<"sayinin faktoriyeli:"<< faktoriyel;

  return 0;
}
