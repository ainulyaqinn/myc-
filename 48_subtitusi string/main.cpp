#include <iostream>
#include <string>
using namespace std;


int main()
{

	string kalimat_1("aku suka kamu, tapi kamu menghilang");
	string kalimat_2("lantas aku harus apaah?");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// swap string
	kalimat_1.swap(kalimat_2);
	cout << "swap string" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// replace, mengganti string
	kalimat_2.replace(25,10, "kabur");
	kalimat_1.replace(kalimat_1.find("ah"), 2,"aa");
	cout << "swap string" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// insert string
	kalimat_1.insert(7, "dalam hati yang terdalam ini ");
	cout << "insert string" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	cin.get();
	return 0;
}
