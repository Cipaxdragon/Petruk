#include <iostream>
using namespace std;
string username = "ghazali";
string email    = "ghazali@gmail.com";
string password = "neneksalto";
int saldo = 64; // 2 digit nim terakhir
bool logot;
void autentikasi(){
    string a,b,c;
    cout << "Autentikasi Akun Atm!" << endl;
    while(true){
        cout << "Username => " ; cin >> a;
        cout << "Email    => " ; cin >> b;
        cout << "Password => " ; cin >> c;
        if(a == username and b == email and c == password){
            cout << "Autentikasi Berhasil" << endl;
            break;
        } 
        cout << "Username, Email atau Password tidak sesuai" << endl;
    }
}
void gantipw(){
    string gantipw,a;
    cout << "Ganti PW" << endl;
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
    cout << "[Saldo] == Rp " << saldo <<  endl;
}

void logout(){
    string a;
    cout << "Yakin Mau Log out ?" << endl;
    while(true){
        cout << "[Masukan Password]==> "; cin >> a;
        if(a == password){
            cout << "Logout Berhasil" << endl;
            logot = true;
            break;
        }else{
            cout << "Password Salah" << endl;
        }
    }
}
void menu(){
    int menu;
    cout << "Menu" << endl;
    cout << "1. Ganti Password\n2. Lihat Saldo\n3. Tambah Saldo\n4. Log Out" << endl << endl;
    cout << "[Input 1-4]==> ";
    cin >> menu; 
    switch(menu){
        case 1 :
            gantipw();
            break;
        case 2 :
            lihatsaldo();
            break;
        case 3 :
            tambahsaldo();
            break;
        case 4 :
            logout();
            break;            
    }
}
int main(){
    logot = false;
    autentikasi();
    cout << endl;
    while(logot == false){
        menu();
        cout << endl;
        if(logot == true) break;
    }
    system("pause");
}
