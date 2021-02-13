#include<iostream>//giriþ çýkýþ kütüphanesi
#include<cmath>//matematik kütüphanesi
#include<locale.h>//türkçe karakter kütüphanesi
using namespace std;

float alan(int x,float alani){//fonksiyon girii yapýldý eþkenar üçgnin alanýnýhesaplatmak için

    float alan1,a;
    float kokuc;
	kokuc=1.7320508075688772 ;//kök üçün float tründe deðeri
    cout<<"eþ kenar ücgenin kenarýný giriniz:"<<endl;
    cin>>x;
    alan1=(pow(x,2)*kokuc)/4;//alan iþlemi yapýldý pow üs alma iþlemi görüyor.
    cout<<"eþkenar ucgenin alaný:"<<alan1;
    return alan1;

}

int main(){
	setlocale(LC_ALL,"turkish");//türkçe karakter yazmayý saðlayan kod

   float a,x;
   n(x,a);//fonksiyon atandý
     return 0;
}
