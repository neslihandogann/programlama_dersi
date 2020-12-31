#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi,sonucu=0;
	cout<<"bir sayý giriniz:";
	cin>>sayi;
	while(sayi !=0){

	sonucu *=10;
	sonucu +=sayi %10;
	sayi /=10;

	}	
	
	cout<<"sayinin tersten yazimi:"<<sonucu<<endl;
}
