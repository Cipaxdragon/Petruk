#include <iostream>
using namespace std;
string positif_negatif(int &number){
	if(number >= 0){
		return "Positif";
	}else{
		return "Negatif";
	}
}
string ganjil_genap(int &number){
	if(number % 2 == 0){
		return "genap";
	}else{
		return "ganjil";
	}
}

void kelipatan(int number){
	if(number % 3 == 0){
		cout << "Ini Kelipatan 3" << endl;
	}
	else if(number % 4 == 0){
		cout << "Ini Kelipatan 4" << endl;
	}
	else if(number % 5 == 0){
		cout << "Ini Kelipatan 5" << endl;
	}
	else if(number % 7 == 0){
		cout << "Ini Kelipatan 7" << endl;
	}
	else if(number % 9 == 0){
		cout << "Ini Kelipatan 9" << endl;
	}else{
		cout << "Ini Bukan Kelipatan 3,4,5,7 atau 9" << endl;
	}
}

int main(){
    char yn;
    int number;
    ulang : 
        cout << "==== Program  =====" << endl;

        cout << "[input]==> ";
        cin >> number;

        cout << "Bilangan ini adalah bilangan " << positif_negatif(number) << endl;

        cout << "Bilangan ini adalah bilangan " << ganjil_genap(number) << endl;
        kelipatan(number);

        while (true){        
            cout << endl;
            cout << "Restart the program? [y/n]==> ";
            cin >> yn;
            if(yn == 'y'){
                break;
            }else if(yn == 'n'){
                cout << endl << "exiting........" << endl;
                system("pause");
                return 0;
            }else{
                cout << "Inputan Cuma [y/n] (Huruf Kecil)" << endl;
            }
        }
    goto ulang;
}