#include <iostream>
using namespace std;

class angka {
private :
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angkka(); //destructor
	void cetakData();
	void isiData();
};
//definisi member function
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[1];
	isiData();
}

angka::~angka(){ // destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array Sudah Dilepaskan" << endl;
}