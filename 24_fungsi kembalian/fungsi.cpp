#include <iostream>
using namespace std;


int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}
int tambah(int a, int b){
	int c;
	c = a + b;
	return c;
}
int kali(int p, int q){
	int r;
	r = p * q;
	return r;
}

int main(int argc, char const *argv[])
{
	int input, hasil, a, b, p, q, hasil2, hasil3;
	cout << "Nilai kuadrat dari :";
	cin >> input;
	hasil = kuadrat(input);
	cout << hasil << endl;

	cout << "masukkan a : ";
	cin >> a;
	cout << "masukkan b : ";
	cin >> b;
	cout << "\n";
	cout << "Hasil a + b = ";

	hasil2 = tambah(a,b);
	cout << hasil2 << endl;

	cout << "masukkan p : ";
	cin >> p;
	cout << "masukkan q : ";
	cin >> q;
	cout << "\n";
	cout << "Hasil p x q = ";

	hasil3 = kali(p,q);
	cout << hasil3 << endl;


	cin.get();
	return 0;
}
