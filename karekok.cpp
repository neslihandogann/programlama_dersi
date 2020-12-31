#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
 
int main()
{ 
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	double sayi;
	cout<<"Sayýyý Gir : ";
	cin>>sayi;
	cout<<"Girilen sayýnýn karekökü : "<<sqrt(sayi);
}
