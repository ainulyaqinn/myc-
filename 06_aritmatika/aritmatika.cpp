#include <iostream>

using namespace std;

int main()
{
	int a = 6;
	int b = 4;

	int hasil;
	// operator +, -, *, /, %

	// penjumlahan
	hasil = a + b;
	cout << a << "+" << b << "=" << hasil << endl;

	// pengurangan
	hasil = a - b;
	cout << a << "-" << b << "=" << hasil << endl;

	// perkalian
	cout << a << "*" << b << "=" << hasil << endl;

	// pembagian
	hasil = a / b;
	cout << a << "/" << b << "=" << hasil << endl;

	// modulus
	hasil = a % b;
	cout << a << " % " << b << "=" << hasil << endl;

	// urutan eksekusi

	hasil = (a + b) * a;
	cout << hasil << endl;


	cin.get();
	return 0;
}
