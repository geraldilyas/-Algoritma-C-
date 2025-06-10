#include <iostream>
using namespace std;

int main(){
	int jumlah_tepung = 20000;
	int jumlah_gula = 10000;
	int modal = 320000;
	int harga_donat = 6000;
	int JumlahTepungDalamDonat, JumlahGulaDalamDonat, JumlahDonat, keuntungan;
	
	JumlahTepungDalamDonat = jumlah_tepung / 500 * 10;
	JumlahGulaDalamDonat = jumlah_gula / 100 * 10;
	
	if(JumlahTepungDalamDonat <= JumlahGulaDalamDonat) {
	JumlahDonat = JumlahTepungDalamDonat;
}   
    else {JumlahDonat = JumlahGulaDalamDonat;};
    keuntungan = JumlahDonat * 6000 - modal;
    cout<<"keuntungan penjualan donat adalah "<< keuntungan<< endl;
    cout<< "jumlah donat adalah "<< JumlahDonat<< endl;
    
    return 0;
}
 


