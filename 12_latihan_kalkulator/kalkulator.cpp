#include <iostream>

using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "Sekamat datang di program calculator \n\n";

	// masukkan input dari user
	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout <<"Pilih operator +,-,/,* : ";
	cin >> aritmatika;
	cout << "Masukkan nilai kedua : ";
	cin>> b;

	cout << "\nHasil perhitungan : ";
	cout << a << aritmatika << b << endl;

	switch(aritmatika){
		case '+':
		hasil = a+b;
		break;
		case '-':
		hasil = a-b;
		break;
		case '/':
		hasil = a/b;
		break;
		case '*':
		hasil = a*b;
		break;
		default:
		cout << "operator salah";
	}

	cout << "=" << hasil << endl;


	cin.get();
	return 0;
}
