#include<iostream>//sorumuz ilk hýzýbelli fakat kütlesive son hýzý belliolmayan bir cismin itme momentumunu bulunuz..
#include<locale.h>//itme momentumu delta pyani momentum deðiþimine eþit olup formul olarak I=m.v formuluile hesaplanýr.
using namespace std;

float momentum(int m,int v){//momentum fonksiyonu girildi
	float itme,kutle,ilkhiz,sonhiz;
	ilkhiz=50;//ilk hýz deðeri
	cout<<"son hýz deðerini giriniz:"<<endl;//ekrana yazdýr
	cin>>sonhiz;//son hýz deðeri atandý dýþarýya
	cout<<"kütle deðerini giriniz:"<<endl;//ekrana yazdýr
	cin>>kutle;
	itme=(sonhiz-ilkhiz)*kutle;//itme-momentum formulü
	cout<<"itme-momentumu:"<<itme;//ekranda itme deðerini göster
	return itme;
	
	
}

int main(){
	setlocale(LC_ALL,"turkish");
	
	int a,b;
	momentum(a,b);//fonksiyon atandý.
	return 0;
	
	
	
}
