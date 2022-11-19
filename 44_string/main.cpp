#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kata("cat");

	cout << kata << endl;

	string data;
	cout << "masukkan kata: " << endl;
	cin >> data;
	cout << "kalimat yang dimasukkan adalah " << endl;
	cout << data;
	cin.get();
	return 0;
}
