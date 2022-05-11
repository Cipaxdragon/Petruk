#include <iostream>

using namespace std;

int main(){
    cout << "==== Login Akses   =====" << endl;
    cout << "Isi Data mu" << endl;
    string username;
    string password;
    cout << "Username ==> "; cin >> username;
    cout << "Password ==> "; cin >> password;
    cout << endl;
    int umur;
    int negara;
    cout << "Umur => "; cin >> umur;
    cout << "--- Negara ---" << endl;
    cout << "1. Indonesia" << endl;
    cout << "2. Amerika" << endl;
    cout << "3. China" << endl;
    cout << "Negara => "; cin >> negara;
    cout << "-- Ras --" << endl;
    cout << "1. Melanosoid" << endl;
    cout << "2. rosoid" << endl;
    cout << "3. Kaukasoid" << endl;
    int ras;
    cout << "Ras => ";
    cin >> ras;

    //login || umur || negara
    if((username == "a" and password == "a") and (umur >  18 and umur < 30) and (negara == 1 and ras == 3)){
        cout << " Berhasi Login" << endl;
        cout << "Kamu dapat mengakses www.gatic.com " << endl;
        cout << "Dengan Kode 34afr6" << endl;
    }
    else if((username == "a" and password != "a") and (umur >=  18 and umur < 30) and (negara == 1 and ras == 3)){
        cout << "Login Gagal" << endl;
    }
    else if((username == "a" and password != "a") and (umur < 18 ) and (negara == 1 and ras == 3)){
        cout << "Umurmu tidak Mencukupi untuk login" << endl;
    }
    else if((username == "a" and password != "a") and (umur < 18 ) and (negara != 1 and ras == 3)){
        cout << "Negara mu tidak dapat mengakses web tersebut" << endl;
    }
    else if((username == "a" and password != "a") and (umur < 18 ) and (negara == 1 and ras != 3)){
        cout << "Kota tidak dapat mengaksesnya" << endl;
    }else{
        cout << "Login Gagal" << endl;
    }
    system("pause");
}