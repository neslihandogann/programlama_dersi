#include<iostream>

using namespace std;

int main(){
	int n=10, e=4, s=8, l=6, i=26;
	int x=(2*n-3)%29;
	int x1=(2*e-3)%29;
	int x2=(2*s-3)%29;
	int x3=(2*l-3)%29;
	int x4=(2*i-3)%29;
	cout<<"sifrelenmemis metin:"<<n<<""<<e<<""<<s<<""<<l<<""<<i<<""<<endl;
	cout<<"sifrelenmis metin:"<<x<<""<<x1<<""<<x2<<""<<x3<<""<<x4<<""<<endl;
	int j=0;
	while(true){
		
		if((j*2)%29==1){
			break;
		}
		
		j++;
	}
	
	int y=j*(x+3)%29;
	int y1=j*(x1+3)%29;
	int y2=j*(x2+3)%29;
	int y3=j*(x3+3)%29;
	int y4=j*(x4+3)%29;
	cout<<"cozumlenmis metin:"<<n<<""<<e<<""<<s<<""<<l<<""<<i<<""<<endl;
	
	
}
