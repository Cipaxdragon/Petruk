#include <iostream>
#include <string>
using namespace std;

string username, email, password;
int pilih, tambahsaldo;
double hasil;
string ulang;
	
int main (){
	cout << "PROGRAM AUTENTIKASI" << endl;
	cout << "Nama : Alyah Ananda Masri" << endl;
	cout << "NIM  : 60900121066" << endl;
	
	string namapengguna = "alyah";
	string emailanda 	= "anandalyah26@gmail.com";
	string katasandi = "bismillah123";
	int saldo		= 66;
	while(true){
		cout << "masukkan username anda : ";
		cin >> username;
		cout << "masukkan email anda :";
		cin >> email; 
		cout << "masukkan password anda :";
		cin >> password;
		
		if (username == namapengguna && email == emailanda && password == katasandi){
			cout << "AUTENTIKASI BERHASIL" << endl;
			cout << "1. Ganti Passwoard" << endl;
			cout << "2. Tambah Saldo" << endl;
			cout << "3. Lihat Saldo" << endl; 
			cout << "4. log out " << endl;
			do{
				cout << "PILIH[1-4] : "; cin >> pilih;
				if(pilih == 1){
					cout << "MASUKKAN PASSWOARD BARU : "; cin >> katasandi;
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
			}while(ulang == "y");
		}else{
			cout << "Username/Email/password salah" << endl;
		}
	}
}
