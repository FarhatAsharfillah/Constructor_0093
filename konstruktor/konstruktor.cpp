#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	nim = 0;
	nama = "";
}

mahasiswa::mahasiswa(int iNim) {
	nama = iNim;
}

mahasiswa::mahasiswa(int iNama) {
	nim = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
}
void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama = " << nama << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("Farhat");
	mahasiswa mhs4(30, "Dimas");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}
