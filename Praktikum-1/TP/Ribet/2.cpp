#include <iostream>

using namespace std;

int main(){

    float hasil,praktikum,final,teori;

    cout << "===== Program Menghitung Nilai Rata-Rata ======" << endl;
    cout << "Masukan Nilai  Praktikum ==> ";
    cin >> praktikum;

    cout << "Masukan Nilai  Teori ==> ";
    cin >> teori;

    cout << "Masukan Nilai  Tugas ==> ";
    cin >> final;

    praktikum *= 0.4;
    teori *= 0.4;
    final *= 0.2;

    cout << praktikum << endl;
    cout << teori << endl;
    cout << final << endl;

    hasil = praktikum + teori + final;

    cout << "Nilai Rata Rata Kamu : "<< hasil << endl;
    system("pause");

}
