#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkatIterasi(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

// fungsi rekursif 
int pangkatRekursif(int a, int b){
	if(b <=1){
		cout << "akhir dari rekursif\n";
		return a;
	}else{
		cout << "rekursif\n";
		return a * pangkatRekursif(a,(b-1));
	}
}

int main()
{
	int a;
	int b;
	cout << "masukkan a : ";
	cin >> a;
	cout << "masukkan b : ";
	cin >> b;
	cout << "hasil iterasi = " << pangkatIterasi(a,b) << endl;
	cout << "hasil rekursif = " << pangkatRekursif(a,b) << endl;

	cin.get();
	return 0;
}
