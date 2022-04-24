#include <iostream>
using namespace std;

string username;
string password;

int saldo = 01;
void registrasi();
void login();
void menu();
void gantipw();
void tambahsaldo();
void lihatsaldo();
void logout();

bool logot;
int satux = 0;
int main(){
	logot = false;
	if(satux == 0){
		satux++;
		registrasi();
	} else {
		login();
	}
	system("pause");
	system("cls");
	while(logot == false) {
		menu();
		if(logot == true) break;
		system("pause");
		system("cls");
	}
	main();

}

void registrasi(){
	cout << "Registrasi" << endl;
	cout << "Username => " ; cin >> username;
	cout << "Password => " ; cin >> password;
	cout << "Registrasi Selesai" << endl;
}
void login(){
	string a,b;
	cout << "Login" << endl;
	cout << "Username => " ; cin >> a;
	cout << "Password => " ; cin >> b;

	while(true) {
		if(a == username and b == password){
			cout << "Berhasil Login" << endl;
			break;
		} else {
			cout << "Username dan Password salah" << endl;
		}
	}



}

void menu(){
	int menu;
	cout << "Menu" << endl;
	cout << "1. Ganti Password" << endl;
	cout << "2. Tambah Saldo" << endl;
	cout << "3. Lihat Saldo" << endl;
	cout << "4. Log Out" << endl;
	cout <<  endl;
	wrong:
		cout << "[Input 1-4]==> ";
		cin >> menu; 
		if(menu == 1){
			gantipw();

		}
		else if(menu == 2){
			tambahsaldo();

		}
		else if(menu == 3){
			lihatsaldo();
		}else if( menu == 4){
			logout();
		}else{
			cout << "Inputan cuma 1 - 4 " << endl;
			goto wrong;
		}

}

void gantipw(){
	string gantipw;
	string a;
	cout << "Ganti PW" << endl;
	while (true){
		cout << "[Input Password Saat ini]==> " ; cin >> a;
		if(a == password) break;
	}
	cout << "berhasil" << endl;
	cout << "[Input Password Baru]==> " ; cin >> gantipw;
	password = gantipw;
	cout << "Password Berhasil diperbaharui" << endl;
}
void tambahsaldo(){
	int nominal;
	cout << "Tambah Saldo" << endl;
	cout << "[Input Nominal]==> " ; cin >> nominal;
	saldo += nominal;
	cout << "Berhasil Menambah Saldo" << endl;
}	


void lihatsaldo(){
	cout << "Cek Saldo" << endl;
	cout << "[Saldo] == Rp" << saldo <<  endl;
}

void logout(){
	string a;
	cout << "Yakin Mau Log out ?" << endl;
	wrong:
		cout << "[Masukan Password]==> "; cin >> a;
		if(a == password){
			cout << "Logout Berhasil" << endl;
			system("pause");
			system("cls");
			logot = true;
		}else{
			cout << "Password Salah" << endl;
			goto wrong;
		}
}