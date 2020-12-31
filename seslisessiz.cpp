#include <iostream>
 
using namespace std;
 
int main()
{
char n;
cout<<"bir harf girin:";
cin>>n;
	if (n == 'a' || n == 'A' || n == 'e' || n== 'E' || n == 'ý' || n == 'I' || n == 'i' || n == 'Ý' || n =='o' || n=='O' || n =='ö' || n=='Ö'|| n == 'u' || n == 'U'|| n == 'ü' || n == 'Ü')
    {
	
	cout<<"sesli harftir..."<<n;
}
else {
	cout<<"sessiz harftir..."<<n;
}
return 0;	
}
