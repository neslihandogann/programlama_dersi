#include<iostream>// bu örnekde karakter dizilerde karþýlaþtýrma iþlemi yaptýracaðýz
#include<conio.h>//karakter dizi kütüphanesi
#include<string.h>//string kütüphanesi
#include<locale.h>//türkçe karakter kütüphanesii
using namespace std;
int main(){
	setlocale(LC_ALL,"turkish");
	char sifre[10];
	int sonuc,hak=3;
	while(hak-->0){//þifre ye 3 hak taný
		cout<<"þifre girin:";//þifre al.
		gets(sifre);
		sonuc=strcmp(sifre,"neslii123");//strcmp komudu karakterleri karþýlaþtýrmayý saðlar.
		if(sonuc==0){
			puts("þifre doðru");//þifre doðrukarþýlaþtýrýldý.//puts komudu cout gibiiþlem yapar tek fark kontrol iþlemi için kullanýlýr.
			break;
		}
		else{
			puts("þifre yanlýþ");//þifre yanlýþ karþýlaþtýrýldý.
		}
		
	}
	
	getch();//karakterleri teker teker okuyum bir seferde derlemeyi saðlar.
	
	return 0;
	
	
}
