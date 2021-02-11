	#include <iostream>
	using namespace std;

	//Program Agent Traveling
	//Taufik Ridhani 2021

	//Struct
	struct rincian {
		string kTiket;
		string tujuan;
		int harga;
		int jumlah;
	};

	rincian tujuan1, tujuan2, tujuan3, tujuan4;
	
	//Algoritma
	int main (){
		
	string nama, daerah;

	cout << " \n\n Data Penjualan Tiket" << endl;
	cout << "_________________________" << endl;
	
	cout << " Nama Customer	   : ";
		getline(cin,nama);
	cout << " Asal Daerah	   : ";
		getline(cin,daerah);

	cout << "-------------------------" << endl;
	cout << "\n Rincian" << endl;
	cout << " ---------" << endl;
	
	//Tujuan 1
	tujuan1.kTiket = "sT01";
	tujuan1.tujuan = "KIRIGAKURE";
	tujuan1.harga  = 5000;
	tujuan1.jumlah = 5;

	//Tujuan 2
	tujuan2.kTiket = "sT02";
	tujuan2.tujuan = "WANO KUNI";
	tujuan2.harga  = 4000;
	tujuan2.jumlah = 8;

	//Tujuan 3
	tujuan3.kTiket = "sT03";
	tujuan3.tujuan = "ISEKAI";
	tujuan3.harga  = 3000;
	tujuan3.jumlah = 7;

	//Tujuan 4
	tujuan4.kTiket = "sT04";
	tujuan4.tujuan = "MARIEJOA";
	tujuan4.harga  = 6000;
	tujuan4.jumlah = 5;
	
	//Rincian
	//01
	cout << " Kode Tiket	: " << tujuan1.kTiket << endl;
	cout << " Tujuan		: " << tujuan1.tujuan << endl;
	cout << " Harga		: " << tujuan1.harga << endl;
	cout << " Jumlah		: " << tujuan1.jumlah << endl;
	cout << "\n";
	
	//02
	cout << " Kode Tiket	: " << tujuan2.kTiket << endl;
	cout << " Tujuan		: " << tujuan2.tujuan << endl;
	cout << " Harga		: " << tujuan2.harga << endl;
	cout << " Jumlah		: " << tujuan2.jumlah << endl;
	cout << "\n";
	
	//03
	cout << " Kode Tiket	: " << tujuan3.kTiket << endl;
	cout << " Tujuan		: " << tujuan3.tujuan << endl;
	cout << " Harga		: " << tujuan3.harga << endl;
	cout << " Jumlah		: " << tujuan3.jumlah << endl;
	cout << "\n";
	
	//04
	cout << " Kode Tiket	: " << tujuan4.kTiket << endl;
	cout << " Tujuan		: " << tujuan4.tujuan << endl;
	cout << " Harga		: " << tujuan4.harga << endl;
	cout << " Jumlah		: " << tujuan4.jumlah << endl;
	cout << "\n";

	cout << " \n\n DATA PENJUALAN TIKET " << endl;
	cout << " ---------------------" << endl;
	cout << " Nama Customer		: " << nama   << endl;
	cout << " Asal Daerah		: " << daerah << endl;
	cout << " ===========================================================================================================" << endl;
	cout << " Kode Tiket \t Tujuan \t Harga(Ribu) \t Jumlah \t Total \t	 Diskon/Jumlah \t Nett " << endl;
	cout << " ===========================================================================================================" << endl;

	//Total
	int total1, total2, total3, total4;
	
	//Diskon/Jumlah
	const float diskon1 =  5;  //5%
	const float diskon2 = 10; //10%
	const float diskon3 = 75; //75%
	const float diskon4 = 50; //50%
	
	int dJumlah1, dJumlah2, dJumlah3, dJumlah4;
	
	//Nett
	int nett1, nett2, nett3, nett4;
	
	//b01	
	cout << " " << tujuan1.kTiket << "\t\t ";
	cout << tujuan1.tujuan << "\t ";
	cout << tujuan1.harga << "\t\t ";
	cout << tujuan1.jumlah << "\t\t " ;
	
		//Total
		total1 = tujuan1.harga * tujuan1.jumlah;
			cout << total1 << "\t\t " ;
		
		//Diskon
		dJumlah1 = (diskon1 / 100) * total1;
	
		//Nett
		nett1 = total1 - dJumlah1;
	
	cout << "5%  --> " << dJumlah1 << "\t " ;
	cout << nett1 << endl;
	//Akhir b01
	
	//b02	
	cout << " " << tujuan2.kTiket << "\t\t ";
	cout << tujuan2.tujuan << "\t ";
	cout << tujuan2.harga << "\t\t ";
	cout << tujuan2.jumlah << "\t\t " ;
	
		//Total
		total2 = tujuan2.harga * tujuan2.jumlah;
			cout << total2 << "\t\t " ;
		
		//Diskon
		dJumlah2 = (diskon2 / 100) * total2;
	
		//Nett
		nett2 = total2 - dJumlah2;
	
	cout << "10% --> " << dJumlah2 << "\t " ;
	cout << nett2 << endl;
	//Akhir b02
	
	//b03	
	cout << " " << tujuan3.kTiket << "\t\t ";
	cout << tujuan3.tujuan << "\t\t ";
	cout << tujuan3.harga << "\t\t ";
	cout << tujuan3.jumlah << "\t\t " ;
	
		//Total
		total3 = tujuan3.harga * tujuan3.jumlah;
			cout << total3 << "\t\t " ;
		
		//Diskon
		dJumlah3 = (diskon3 / 100) * total3;
	
		//Nett
		nett3 = total3 - dJumlah3;
	
	cout << "75% --> " << dJumlah3 << "\t " ;
	cout << nett3 << endl;
	//Akhir b03
	
	//b04	
	cout << " " << tujuan4.kTiket << "\t\t ";
	cout << tujuan4.tujuan << "\t ";
	cout << tujuan4.harga << "\t\t ";
	cout << tujuan4.jumlah << "\t\t " ;
	
		//Total
		total4 = tujuan4.harga * tujuan4.jumlah;
			cout << total4 << "\t\t " ;
		
		//Diskon
		dJumlah4 = (diskon4 / 100) * total4;
	
		//Nett
		nett4 = total4 - dJumlah4;
	
	cout << "75% --> " << dJumlah4 << "\t " ;
	cout << nett4 << endl;
	//Akhir b04
	
	cout << " ===========================================================================================================" << endl;
		//Total Akhir
		int tJumlah, tDiskon, tNett;
		
		tJumlah = tujuan1.jumlah + tujuan2.jumlah + tujuan3.jumlah + tujuan4.jumlah;
		tDiskon = dJumlah1 + dJumlah2 + dJumlah3 + dJumlah4;
		tNett	= nett1 + nett2 + nett3 + nett4;
		
	cout << " TOTAL --> \t\t\t\t\t " << tJumlah << "\t\t\t\t\t " << tDiskon << "\t " << tNett << endl;
	cout << " ===========================================================================================================" << endl;
	
	return 0;
	
}
