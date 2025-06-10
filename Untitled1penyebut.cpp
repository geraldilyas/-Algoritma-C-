#include <iostream>
using namespace std;

int main(){
	int pembilang_1;
	int penyebut_1 ;
	int pembilang_2;
	int penyebut_2;
	int pembilang_3;
	int penyebut_3;
	
	cout<<"masukkan pembilang_1 = ";
	cin>> pembilang_1;
	cout<< "masukkan penyebut_1 = ";
	cin>>penyebut_1;
	cout<<"masukkan pembilang_2 = ";
	cin>>pembilang_2;
	cout<< "masukkkan penyebut_2 = ";
	cin>>penyebut_2;
	
	pembilang_3 = pembilang_1* penyebut_2 + pembilang_2 * penyebut_1;
	penyebut_3 = penyebut_1 * penyebut_2;
	cout<< pembilang_3 << "/";
	cout<< penyebut_3 <<endl;

	return 0;
	
	
}