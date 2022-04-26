#include <iostream>
using namespace std;
int saldo = 300000;
string username = "1";
string email = "2";
string password = "3";
string pin;

bool terbuat = false;
void login();
void buatpin();
void cekpin();
void menu();
void tambahsaldo();
void gantipass();
void logout();
void cekterbuat();

int main(){
    login();
    menu();
    system("pause");
    return 0;
}

void login(){
    string a,b,c;
    while (true){
        cout << "Username ==> "; cin >> a;
        cout << "Email    ==> "; cin >> b;
        cout << "Password ==> "; cin >> c;
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

void buatpin(){
    terbuat = true;
    cout << "== Buat Pin ==" << endl;
    cout << "Masukan Pin Baru ==> "; cin >> pin;
    cout << "Pin Berhasil Diperbaharui" << endl;
}

void cekpin(){
    while(true){
        string a;
        cout << "Masukan PIN :" ; cin >> a;
        if(a == pin)break;
        cout << "Pin Salah" << endl;
    }
}

void tambahsaldo(){
    int a;
    cout << "Tambah Saldo Sebesar : " ; cin >> a;
    saldo += a; 
}

void tariksaldo(){
    int a;
    cout << "Ingin Menarik Sebesar : " ; cin >> a;
    saldo -= a;
    cout << "Tarik Tunai Sebesar " << a << " berhasil " << endl;
}

void gantipass(){
    cout << "Input Password Baru => " ; cin >> password;
    cout << "Password berhasil di perbaharui" << endl;
}


void logout(){
    string a;
    while (true){
        cout << "Masukan Passwrod => "; cin >> a;
        if(a == password){
            cout << "Berhasil Log out" << endl;
            break;
        }
        cout << "Password Salah" << endl;
    }
}

void menu(){
    int pilihan;
    while (true){
        cout << "== Menu ==" << endl;
        cout << "1. Buat Pin" << endl;
        cout << "2. Tambah Saldo" << endl;
        cout << "3. Tarik Saldo" << endl;
        cout << "4. Ganti Pass" << endl;
        cout << "5. Log out" << endl;
        cout << "[Input 1-4] ==> "; cin >> pilihan;
        if(pilihan == 1){
            buatpin();
        }
        else if (pilihan == 2){
            cekterbuat();
            cekpin();
            tambahsaldo();
        }
        else if (pilihan == 3){
            cekterbuat();
            cekpin();
            tariksaldo();
        }
        else if (pilihan == 4){
            cekterbuat();
            cekpin();
            gantipass();
        }
        else if (pilihan == 5){
            logout();
        }    
        else{
            cout << "Pilihan Cuma 1 - 4" << endl;
        }
        cout << endl;
    }
    logout();
}

void cekterbuat(){
    if(terbuat == false){
        cout << "Pin Belum dibuat" << endl;
        menu();
    }
}
