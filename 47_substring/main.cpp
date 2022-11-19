#include <iostream>
#include <string>
using namespace std;

int main()
{

	string kalimat_1("Dayat suka olahraga supaya sehat");
	string kalimat_2("Bibu suka makan permen di pagi hari");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2  << endl;

	// substring mengambil string di tengah-tengah
	// substr(index, panjang)

	cout << kalimat_1.substr(11,8) << endl;
	cout << kalimat_2.substr(16,7) << endl;

	// mencari posisi dari substring
	cout << "posisi olahraga: ";
	cout << kalimat_1.find("olahraga") << endl;
	cout << "posisi permen: ";
	cout << kalimat_2.find("permen") << endl;

	int a = kalimat_1.find("ya");
	cout << a << endl;
	cout << kalimat_1.find("ya", a+1) << endl;

	//mencari posisi dari belakang

	cout << kalimat_2.rfind("en") << endl;


	cin.get();
	return 0;
}
