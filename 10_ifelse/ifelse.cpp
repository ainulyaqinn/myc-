#include <iostream>

using namespace std;

int main(){
	int a;

	cout << "Masukkan angka= " ;
	cin >> a;

	if (a == 5){
		cout << "nilai ini adalah 5" << endl;
	} else if (a == 3) {
		cout << "nilai ini adalah 3" << endl;
	} else if (a == 2){
		cout << "nilai ini adalah 2" << endl;
	} else {
		cout << "nilai ini bukan 5, 3, atau 2" << endl;
	}

	cout << "selesai" << endl;
	cin.get();
	return 0;
}
