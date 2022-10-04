/*Program Konversi Suhu*/


#include <iostream>

using namespace std;

int main()
{

    /*KAMUS
    k = c+273.15;
	f = (c*1.8)+32;
	r = c*0.8;
	Hasil Celcius ke Kelvin
	Hasil Celcius ke Fahrenheit
    Hasil Celcius ke Reamur
    */

    /*ALGORITMA*/
    cout<<"PROGRAM C++ KONVERSI SUHU DARI CELCIUS\n";
	float c, k, f, r;
	cout<<"Masukan Suhu : ";
	cin>>c;

	k = c+273.15;
	f = (c*1.8)+32;
	r = c*0.8;

	cout<<"\nHasil Celcius ke Kelvin     : "<<k;
	cout<<"\nHasil Celcius ke Fahrenheit : "<<f;
	cout<<"\nHasil Celcius ke Reamur    : "<<r;
    return 0;
}
