#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

int main(){
	
	string nama;
	char jKelamin, iStatus, iAnak;
	double tSutri, tAnak, jAnak, gPokok, pembulatan;
	long int gBersih;

	
	cout << " \n";
	cout << " Gaji pokok & Tunjangan " << endl;
	cout << " ---------------------- " << endl;
	cout << " \n\n";
	
	cout << " Masukan Nama         : ";
		cin >> nama;	
	cout << " Masukan Gaji Pokok   : Rp.";
		cin >> gPokok;
		
	double pB = 1000;
		
		
		if (gPokok == false){
			cout << " \n\n";
			cout << " Masukan Angka!";
			goto skip;
		} else {
			
	cout << " Jenis Kelamin (L/P)  : ";
		cin >> jKelamin; cout << "\n\n";
		}
		
		if (jKelamin == 'l' || jKelamin == 'L'){
			cout << " Apakah anda mempunyai Istri? (Y/T)";
				cin >> iStatus;
	
					switch (iStatus){
						case 'y' : ;//Sama
						case 'Y' : 	//Tunjangan Suami & Istri
									double tunjanganS;
									tunjanganS = 10;
									tSutri = (tunjanganS / 100) * gPokok;
									
									cout << " Apakah anda mempunyai Anak? (Y/T)";
										cin >> iAnak;
										
											//Input Jumlah Anak
											switch (iAnak){
												case 'y' : ;//Sama
												case 'Y' : 	cout << " Berapa orang anak anda? ";
															cin >> jAnak;
												
															//Tunjangan Anak
															int tunjanganA;
															tunjanganA = 2;
															tAnak = (tunjanganA / 100 * jAnak) * gPokok;
															
												case 't' : ;//Sama
												case 'T' : break;
												
												default : 	cout << " \n\n";
															cout << " Input Salah!";
												
												// Lompat ke akhir
												goto skip;
											}
									
						case 't' : ;//Sama
						case 'T' :
									//Gaji Bersih			
									gBersih = tSutri + tAnak + gPokok;
									
									cout << "\n\n";
									cout << " ---------------------------------------" << endl;							
									cout << " " << nama << "," << " Gaji Bersih kamu adalah : Rp." << gBersih << endl;
									
									//Pembulatan (Floor)
									pembulatan = (gPokok + tSutri + tAnak) / pB;
									
									cout << " " << nama << "," << " Dibulatkan ke bawah : Rp." << floor(pembulatan) << endl;		
									break;
						
						default  : 	cout << " \n\n";
									cout << " Input Salah!";
					}
					
		} else if (jKelamin == 'p' || jKelamin == 'P'){
				cout << " Apakah anda mempunyai Suami? (Y/T)";
				cin >> iStatus;
				
					//Input Anak
					if (iStatus == 'y' || iStatus =='Y'){
						
						//Tunjangan Suami / Istri 10%
						double tunjanganS;
						tunjanganS = 10;
						tSutri = tunjanganS / 100 * gPokok;
						
						cout << " Apakah anda mempunyai Anak? (Y/T)";
							cin >> iAnak;
								
								//Input Jumlah Anak
								if (iAnak == 'y' || iAnak =='Y'){
									cout << " Berapa orang anak anda? ";
										cin >> jAnak;
										
										//Tunjangan Anak 2%
										double tunjanganA;
										tunjanganA = 2;
										tAnak = (tunjanganA / 100 * jAnak) * gPokok;
										
								} else if (iAnak == 't' || iAnak =='T'){
									//Lompat ke sintaks selanjutnya	
								} else {
									cout << " \n Input Salah!";
									
									//Lompat ke akhir						
									goto skip;
								}
	
					} else if (iStatus == 't' || iStatus =='T'){
						//Lompat ke sintaks selanjutnya
					} else {
						cout << " \n Input Salah!";
						
						//Lompat ke akhir						
						goto skip;
					}
								
									//Gaji Bersih			
									gBersih = tSutri + tAnak + gPokok;
									
									cout << "\n\n";
									cout << " ---------------------------------------" << endl;							
									cout << " " << nama << "," << " Gaji Bersih kamu adalah : Rp." << gBersih << endl;
									
									//Pembulatan (Floor)
									pembulatan = (gPokok + tSutri + tAnak) / pB;gBersih = tSutri + tAnak + gPokok;								
									cout << " " << nama << "," << " Gaji Bersih kamu adalah : Rp." << gBersih << endl;
					
		} else {
			cout << " \n\n";
			cout << " Input Salah!";
		}
		
			//Akhir
			skip :
				std::cout << "";
		
	return 0;
}
