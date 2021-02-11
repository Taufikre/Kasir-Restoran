#include <iostream>
using namespace std;

//Konvers Detik ke JamMenitDetik

int main(){
	
	struct jam {
		int hh, 
			mm, 
			ss;
	};
	
	jam j;
	int totalDetik, sisa;
	
	cout << "\n Masukan Total Detik : ";
		cin >> totalDetik;
	j.hh = totalDetik / 3600; //DIV
	sisa = totalDetik % 3600; //MOD
	j.mm = sisa / 60; //DIV
	j.ss = sisa % 60; //MOD
	
	cout << "\n Hasil Konvers : " << j.hh << " Jam, " << j.mm << " Menit, " << j.ss << " Detik " << endl;
	
	return 0;
}
