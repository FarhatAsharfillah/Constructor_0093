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

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[1]<<endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[1];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //constractur dipanggil
	angka* ptrBelajarcpp = new angka(5); //constractuur dipanggil
	delete ptrBelajarcpp; //destructor dipanggil

	return 0;
} //destructor dipanggil