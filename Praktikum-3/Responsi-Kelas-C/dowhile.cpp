#include <iostream>
using namespace std;

int main (){
	int p;
	
	cout << "Masukkan Panjang Segitiga : ";
	cin >> p;
	
	int i, j;
	
	i = 1;
	do {
		j = 1;
		do {
			cout << "*";
			j++;
		}while (j <= i);
		i++;
		cout << endl;
	}while (i <= p);
	
	i = p;
	
	do {
		j = i;
		do {
			cout << "*";
			j --;
		}while (j >= 1);
		i--;
		cout << endl;
	}while (i >= 1);
	
}
	
