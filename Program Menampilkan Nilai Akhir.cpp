

// code menampilkan nilai

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char nama_mahasiswa[50], matkul[50], grade;
	int tugas, uts, uas, ntugas, nuts, nuas, jumlah;
	
	cout << "|==============================================|" <<endl;
	cout << "|            Daftar Nilai Mahasiswa            |" <<endl;
	cout << "|==============================================|" <<endl;	
	cout<<endl;
	
	// proses input user
	cout << "Masukkan Nama Mahasiswa : ";
	gets (nama_mahasiswa);
	cout << "Masukkan Matkul         : ";
	gets (matkul);
	cout << "Masukkan Nilai Tugas    : ";
	cin >> tugas;
	cout << "Masukkan Nilai UTS      : ";
	cin >> uts;
	cout << "Masukkan Nilai Uas      : ";
	cin >> uas;
	
	// proses perhitungan
	ntugas = tugas*20/100;
	nuts = uts*30/100;
	nuas = uas*40/100;
	
	jumlah = ntugas + nuts + nuas;
	
	if (jumlah >= 80) {
		grade = 'A';
	}
	else if (jumlah >= 75) {
		grade = 'B';
	}
	else if (jumlah >= 65) {
		grade = 'C';
	}
	else if (jumlah >= 50) {
		grade = 'D';
	}
	else {
		grade = 'E';
	}
	cout <<endl;

    // proses output
    cout << "========================================" <<endl; 
    cout << "Nama Mahasiswa  :" <<" " <<nama_mahasiswa;
    cout <<endl;
    cout << "Mata Kuliah     :" <<" " <<matkul;
    cout <<endl;
    cout << "Jumlah Nilai    :" <<" " <<jumlah;
    cout <<endl;
    cout << "========================================" <<endl;
    cout << "Selamat Anda Mendapatkan Nilai Grade "<<grade <<endl;
    cout << "========================================" <<endl;
    cout <<endl;

return 0;
}