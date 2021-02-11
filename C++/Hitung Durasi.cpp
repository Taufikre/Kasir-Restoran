#include <iostream>
using namespace std;

//Hitung Durasi

int main (){
	
	struct jam {
		int hh,
			mm,
			ss;
	};
	
	jam durasi1, durasi2;
	
	cout << "\n";
	cout << " Program Menghitung Durasi " << endl;
	cout << " --------------------------" << endl;
	cout << "\n";
	cout << " Masukan Durasi Pertama : " << endl;
		cout << " Jam   : "; cin >> durasi1.hh;
		cout << " Menit : "; cin >> durasi1.mm;
		cout << " Detik : "; cin >> durasi1.ss;
	
	cout << "\n";
	
	cout << " Masukan Durasi Kedua : " << endl;
		cout << " Jam   : "; cin >> durasi2.hh;
		cout << " Menit : "; cin >> durasi2.mm;
		cout << " Detik : "; cin >> durasi2.ss;
	
	// Konvers ke Detik
	int kDetik1, kDetik2;
	
	kDetik1 = (durasi1.hh * 3600) + (durasi1.mm * 60) + durasi1.ss;
	kDetik2 = (durasi2.hh * 3600) + (durasi2.mm * 60) + durasi2.ss;
	
	// Hitung Durasi ke dalam Detik
	int hDetik;
	
	hDetik = kDetik2 - kDetik1;
	
	//Konvers ke JamMenitDetik
	int sisaDetik, hhDetik, mmDetik, ssDetik;
	
	hhDetik    = hDetik / 3600;
	sisaDetik  = hDetik % 3600;
	mmDetik    = sisaDetik / 60;
	ssDetik    = sisaDetik % 60;
	
	cout << "\n Hasil Hitung : " << hhDetik << " Jam, " << mmDetik << " Menit, " << ssDetik << " Detik" << endl;
	
	return 0;
}
