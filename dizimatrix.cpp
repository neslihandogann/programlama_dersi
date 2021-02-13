#include<iostream>
using namespace std;

int main (){

int s[5][2] = { {1,2},{3,4},{5,6},{7,8},{9,10} };// 5 satırlık 2 sütunluk değer girildi
	cout << "\n\n\t\t Matrixxx" << endl;//ekrana matrix değeri yazdırma
	cout << "\tnesliii**********nesliiii" << endl;//ekrana yazdır
	for (int i = 0; i < 5; i++)//forda 5 defa dönder
	{
		for (int j = 0; j < 2; j++)//2 kere değer döndür
		{
			cout << "\t[" << i << "][" << j << "] :";//ekranda i ve j değerlerini yazdır
			cout << s[i][j] << endl;//dizi karaktrlerini yazdır i ve j nin
			
		}
	}
return 0;
}
