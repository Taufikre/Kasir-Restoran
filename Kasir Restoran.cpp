#include <iostream>
using namespace std;

//Program Kasir Restoran Sederhana
//Create by Taufik Ridhani 2021

int main(){
    
    float hMakanan, iMakanan, tHarga, pMakanan;
    
    //Nilai Pajak
    const float pajak = 10;
    
    cout << " \n";
    cout << "      RESTORAN MAIL       " << endl;
    cout << " ________________________ " << endl;
    cout << " \n\n";
    cout << " Pilihan Menu " << endl;
    cout << " ------------------------ " << endl;
    cout << " \n";
    
    //Harga Awal Makanan
    hMakanan = 3500;
    
    cout << " 1. Ayam Goreng : Rp.3500 " << endl;
    cout << " \n\n\n\n";
    cout << " ------------------------ " << endl;
    
    //Input Jumlah Pesanan
    cout << " Masukan Jumlah Pesanan : ";
      cin >> iMakanan;
      
        if (iMakanan == 1){
          
          cout << " Pajak Sebesar 10% " << endl;
          
          pMakanan = pajak / 100 * hMakanan;
          tHarga   = pMakanan + hMakanan;      
          
          cout << " \n ***********    " << endl;
          cout << " Total Harga : Rp."   << tHarga << endl;
          cout << " \n\n";
          cout << " SELAMAT MENIKMATI! ^_^ " << endl;
          
  } 
   else if (iMakanan > 1){
        
          cout << " Pajak Sebesar 10% " << endl;
          
          pMakanan = pajak / 100 * hMakanan;
          tHarga   = pMakanan + iMakanan * hMakanan;
          
          cout << " \n ************    " << endl;
          cout << " Total Harga : Rp."   << tHarga << endl;
          cout << " \n\n";
          cout << " SELAMAT MENIKMATI! ^_^ " << endl;
      } 
        else {
          cout << " Mohon Masukan Angka! " << endl;
        }

  return 0;
}
