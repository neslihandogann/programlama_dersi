#include <iostream>
using namespace std;
 
void yaz( int [][4] );
 
int main()
 
{
        int diz[3][4]={{1,1,2,2},{5,6,5,6},{4,8,9,3}}; 
          yaz(diz);
return 0;
 
}
void yaz ( int d[][4])  // matris elemanlarýný ekrana yazdýran fonkisyon
{
           for (int i=0;i<3;i++)
                    {
                         for (int j=0;j<4;j++)
                                 cout<<d[i][j];
                        cout<<endl;
                     }
}


return 0;         
}
