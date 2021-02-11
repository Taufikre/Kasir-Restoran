#include <iostream>
using namespace std;

// Konversi waktu ke detik

int main(){
	struct jam {
		int hh; //Jam
		int mm; //Menit
		int ss; //Detik
	};
	
	jam j;
	int totalDetik;
	
	cout << "\n Masukan Jam : ";
		cin >> j.hh;
	cout << " Masukan Menit : ";
		cin >> j.mm;
	cout << " Masukan Detik : ";
		cin >> j.ss;	

	totalDetik = (j.hh*3600) + (j.mm*60) + j.ss;
	cout << "\n Total Detik : " << totalDetik << "s" << endl;
	
	return 0;
}
