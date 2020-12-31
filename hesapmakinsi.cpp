#include <iostream>

using namespace std;


int main(){
	int sayi1,sayi2,islem,sonuc;
	label:
	cout<<"1.sayiyi giriniz:";
	cin>>sayi1;
	cout<<"2.sayiyi giriniz:";
	cin>>sayi2;
	cout<<"yapilacak islemi seciniz.."<<endl; 
	cout<<" 1=toplama"<<endl;
	cout<<" 2=cikarma"<<endl;
	cout<<" 3=carpma "<<endl;
	cout<<" 4=bolme "<<endl;
	cout<<"sectigin sayiyi gir:";
	cin>>islem;
	switch(islem){
		case 1:
			sonuc=sayi1+sayi2;
			break;
				case 2:
			sonuc=sayi1-sayi2;
			break;
		
			case 3:
			sonuc=sayi1*sayi2;
			break;
		
			case 4:
			sonuc=sayi1/sayi2;
			break;
		default:
			cout<<"islem yaptirmak icin 1-4 arasý deger giriniz:";
		break;

	}
	cout<<"sonuc="<<sonuc<<endl;

			   goto label;
			   return 0;
}
