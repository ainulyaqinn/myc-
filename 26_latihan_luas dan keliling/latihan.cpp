#include <iostream>
using namespace std;

// menghitung luas persegi panjang

double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

// menghitung keliling persegi panjang 
double hitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}
void tampilkan_luas(double p, double l){
	cout << "menampilkan void\n";
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p,l) << endl;
}
void tampilkan_keliling(double p, double l){
	cout << "menampilkan void\n";
	cout << "Kelilingnya adalah : ";
	cout << hitung_keliling(p,l);
}
int main()
{
	double panjang, lebar;
	cout << "Panjang : ";
	cin >> panjang;
	cout << "Lebar : ";
	cin >> lebar;

	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);




	cin.get();
	return 0;
}
