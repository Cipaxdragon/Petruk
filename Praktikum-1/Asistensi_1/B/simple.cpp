#include <iostream>
using namespace std;
string username = "1";
string email    = "2";
string password = "3";
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
            cout << "Login Berhasil" << endl;
            break;
        }
        else if(a == username and b == email and c != password){
            cout << "Password Salah" << endl;
        }
        else if(a == username and b != email and c != password){
            cout << "Password dan email salah" << endl;
        }
        else if(a != username and b == email and c != password){
            cout << "Password dan username salah" << endl;
        }
        else if(a == username and b != email and c == password){
            cout << "Email salah" << endl;
        }
        else if(a == username and b != email and c != password){
            cout << "Email dan password salah" << endl;
        }
        else if(a != username and b != email and c == password){
            cout << "Email dan username salah" << endl;
        }
        else if(a == username and b == email and c == password){
            cout << "Username salah" << endl;
        }
        else if(a == username and b == email and c == password){
            cout << "Username dan password salah" << endl;
        }
        else if(a != username and b != email and c == password){
            cout << "Username dan email salah" << endl;
        }   
        else{
            cout << "Username, Email dan Password salah" << endl;
        }
    }
}
void gantipw(){
    string gantipw,a;
    cout << "Ganti PW" << endl;
    cout << "[Input Password Baru]==> " ; cin >> password;
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

// login berhasil
// password 
// password dan email 
// password dan username
// email 
// email dan password 
// email dan username 
// username 
// username  dan password
// username dan email
// username , email dan password salah 
