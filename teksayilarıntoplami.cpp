#include <iostream>
using namespace std;
// tek sayilarin toplami
int main(){
int n, x, toplam;
x=1; toplam=0;
cout << "n degerini giriniz: ";
cin >> n;
a:
if (x<=n){
toplam=toplam+x;
x=x+2;
goto a;}
cout << n << " sayisina kadar olan tek sayilarin toplami= "<< toplam << endl;


return 0;}
