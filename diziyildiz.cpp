#include <iostream>
#include <conio.h>
using namespace std;
main(){
char a[]={'*','*','*','*','*'};
for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
    cout<<a[i];
    }
    cout<<endl;
}
getch();
}
