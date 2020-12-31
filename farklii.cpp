#include <iostream>
#include <cmath>

using namespace std;
// formullerini yaz
const int pi = 3;

int kup(int a){
	printf("Kupun Hacmi : ");
	int hacim;
	hacim=pow(a,3);
	cout<<hacim<<endl;
}

int dikdortgenprizma(int b,int bb,int bbb){
	printf("Dikdortgenprizmanin Hacmi : ");
	int hacim;
	hacim=b*bb*bbb;
	cout<<hacim<<endl;
	
}

int kure(int c){
	printf("Kurenin Hacmi : ");
	int hacim;
	hacim=(4/3)*pi*pow(c,3);
	cout<<hacim<<endl;
}

int silindir(int d,int dd){
	printf("Silindirin Hacmi : ");
	int hacim;
	hacim=pi*d*d*dd;
	cout<<hacim<<endl;
}

int koni(int e,int ee){
	printf("Koninin Hacmi : ");
	int hacim;
	hacim=1/3*pi*pow(e,2)*ee;
	cout<<hacim<<endl;
}

float piramit(float f,float ff){
	printf("Piramitin Hacmi : ");
	float hacim;
	hacim=1/3*pow(f,2)*ff;
	cout<<hacim<<endl;
}

void islemsec(int a){
	int k;
	int uzun,dik,yatay;
	int r;
	int h;
	
	if(a==1){
		cout<<"KENAR UZUNLUGU GIRINIZ :  ";
		cin>>k;
		kup(k);
	}
	else if(a==2){
		printf("SIRASIYLA UZUN , DIK VE KENAR UZUNLUKLARINI GIRINIZ : ");
		cin>>uzun>>dik>>yatay;
		dikdortgenprizma(uzun,dik,yatay);
	}
	else if(a==3){
		printf("YARICAP R'yi GIRINIZ : ");
		cin>>r;
		kure(r);
	}
	else if(a==4){
		printf("SIRASIYLA YARICAP R'yi ve YUKSEKLIK H'i GIRINIZ : ");
		cin>>r>>h;
		silindir(r,h);
	}
	else if(a==5){
		printf("SIRASIYLA YARICAP R'yi ve YUKSEKLIK H'i GIRINIZ : ");
		cin>>r>>h;
		koni(r,h);
	}
	else if(a==6){
		printf("SIRASIYLA YATAY UZUNLUGU VE YUKSEKLIK H'i GIRINIZ : ");
		cin>>k>>h;
		piramit(k,h);
	}
	else {
		printf("HATALI ISLEM GIRDINIZ...");
	}
}
void tekrar(int a){
	//
	if(a>6){
		cout<<"Yanlis Islem Sectiniz..."<<endl;
		cout<<"LUTFEN ISLEMINIZI TEKRAR SECINIZ : ";
	}
	// ikisini ayný yere yazabýlýrdým...
	else if(a<0){
		cout<<"Yanlis Islem Sectiniz..."<<endl;
		cout<<"LUTFEN ISLEM NUMARANIZI TEKRAR SECINIZ : ";
	}
	//
	else {
		cout<<a<<". Islemi Sectiniz..."<<endl;
		islemsec(a);
		cout<<"LUTFEN ISLEM NUMARANIZI SECINIZ : ";
	}
	
}
 
int main(){
	
	int islem;
	cout<<"...KATILARIN HACIM HESAPLAMA SISTEMINE HOSGELDINIZ..."<<endl<<endl;
	cout<<"1. ISLEM KUP HACMI "<<endl;
	cout<<"2. ISLEM DIKDORTGENPRIZMA HACMI "<<endl;
	cout<<"3. ISLEM KURE HACMI "<<endl;
	cout<<"4. ISLEM SILINDIR HACMI "<<endl;
	cout<<"5. ISLEM KONI HACMI "<<endl;
	cout<<"6. ISLEM PIRAMIT HACMI "<<endl;
	
	cout<<endl;
	cout<<"LUTFEN ISLEM NUMARANIZI SECINIZ : ";
	basadon:
	cin>>islem;
	tekrar(islem);
	goto basadon;
}
