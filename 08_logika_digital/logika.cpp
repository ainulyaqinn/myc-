#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil;

	// operator logika : not, and, or

	// not
	cout << "untuk not" << endl;
	hasil = !(a == 3);
	cout << hasil << endl;

	
// and : kedua nilai hasur enar untuk menghasilkan true

	cout << "untuk and\n";
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 5) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 4); // true and false
	cout << hasil << endl;
	hasil = (a == 5) && (b == 6); // false and false
	cout << hasil << endl;

	// or :  salah satu nilai true maka hasil true

	cout << "untuk or\n";
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 5) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 4); // true and false
	cout << hasil << endl;
	hasil = (a == 5) || (b == 6); // false and false
	cout << hasil << endl;

	cin.get();
	return 0;	
}
