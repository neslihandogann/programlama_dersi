#include <iostream>
#include<locale.h>
using namespace std;

int main ( )
{
	setlocale(LC_ALL,"turkish");
    char metin[100], ch;//100 karakterde metin girilebilinir.
    int i, anahtar;//sayý türüne anahtar atandý.

    cout << "Sifrelenecek Metni Girin: ";
    cin.getline(metin, 100);//dýþarýdan metin komudu çaðrýldý.
    cout << "sayý türünden Anahtari  Girin: ";
    cin >> anahtar;//dýþarýdan anahtar istendi.

    for (i = 0; metin[i] != '\0'; ++i){//dizi türnde metin giriþi ve boþluklar dahil olmayacak þekilde þifreleme iþlemi gerçekleþtirelecek.
        ch = metin[i];

        if (ch >= 'a' && ch <= 'z'){//karakter a ve z deðerleri dahil , a dan büyük ve eþitse ve z den küçük ve eþitse karakter
            ch = ch + anahtar;//karakter üzerine anahtar deðri eklensin.

            if (ch > 'z'){// eðer karakter z den büyükse
                ch = ch - 'z' + 'a' - 1;//karakter z den çýkar a yý ekle ve tersini al
            }
            metin[i] = ch;//karakter deðerini metin i deðerinde döndür.
        }

        else if (ch >= 'A' && ch <= 'Z'){//karakter büyük a dan büyük eþit ise ve karakter büyük z den küçük eþit ise
            ch = ch + anahtar;//karakter zerine anahtar ekle

            if (ch > 'Z'){//karakter büyük z den küçük ise
                ch = ch - 'Z' + 'A' - 1;//karakterden büyük z yi çýkar büyük a deðeri ekle ve tersini al
            }
            metin[i] = ch;// karakter metin i deðerinde döndür
        }
    }

    cout << "Sifrelenmis Metin: " << metin;//þifrelenmiþ mmetni ekrana yazdýr.

    return 0;
}
