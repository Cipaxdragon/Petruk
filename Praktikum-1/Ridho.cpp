#include <iostream>
#include <string>
using namespace std;
	
int main (){
	int tambahsaldo,pilih;
	string username,email,password,ulang;

	cout << "PROGRAM AUTENTIKASI" << endl;
	string namapengguna = "ridho";
	string alamatemail 	= "ridho@gmail.com";
	string katasandi    = "ridho123";
	int saldo	    	= 56;
	while(true){
		cout << "masukkan username  : ";
		cin >> username;
		cout << "masukkan email  : ";
		cin >> email; 
		cout << "masukkan password  : ";
		cin >> password;
		if (username == namapengguna && email == alamatemail && password == katasandi){
		do{
			cout << endl;
			cout << "AUTENTIKASI BERHASIL" << endl;
			cout << "1. Ganti Password" << endl;
			cout << "2. Tambah Saldo" << endl;
			cout << "3. Lihat Saldo" << endl; 
			cout << "4. Log Out " << endl;
				cout << "PILIH[1-4] : "; cin >> pilih;
				if(pilih == 1){
					cout << "MASUKKAN PASSWORD BARU : "; cin >> katasandi;
					cout << "BERHASIL DIGANTI " << endl;
				}else if(pilih == 2) {
					cout << "TAMBAH SALDO : "; cin >> tambahsaldo; 
					saldo = saldo + tambahsaldo;
				}else if(pilih == 3){
					cout << "SALDO ANDA :" << saldo << endl; 	
				}else if(pilih == 4){
					cout << "MASUKKAN PASSWORD : " ; 
					cin >> password;
					if (password == katasandi) {
						cout << "ANDA BERHASIL KELUAR" << endl;
						system("pause");
						return 0;
					}else{
						cout << "PASSWORD SALAH " << endl;
					}
				}
				cout << "KEMBALI ? [Y/N]: "; cin >> ulang; 
				if(ulang == "n"){
					return 0;
				}
		}while(ulang == "y");
		}else if (username != namapengguna && email == alamatemail && password == katasandi){
			cout << "USERNAME SALAH" << endl;
		} else if (username == namapengguna && email != alamatemail && password == katasandi){
			cout << "EMAIL SALAH" << endl;
		} else if (username == namapengguna && email == alamatemail && password == katasandi){
			cout << "PASSWORD SALAH" << endl;
		} else if (username != namapengguna && email != alamatemail && password == katasandi){
			cout << "USERNAME DAN EMAIL SALAH " << endl;
		} else if (username != namapengguna && email == alamatemail && password != katasandi){
			cout << "USERNAME DAN PASSWORD SALAH" << endl;
		} else if (username == namapengguna && email != alamatemail && password != katasandi){
			cout << "EMAIL DAN PASSWORD SALAH" << endl; 
		} else if (username != namapengguna && email != alamatemail && password != katasandi){
			cout << "USERNAME, EMAIL DAN PASSWORD SALAH" << endl; 
		}
	}
}
