#include <iostream>
using namespace std;

int main(){
	int makanan;
	float soto=18000;
	float j_soto=0;
	float h_soto=0;
	
	float sate=22500;
	float j_sate=0;
	float h_sate=0;
	
	float ayambakar=20000;
	float j_ayambakar=0;
	float h_ayambakar=0;
	
	int minuman;
	float jusmangga=10000;
	float j_jusmangga=0;
	float h_jusmangga=0;
	
	float esteh=5000;
	float j_esteh=0;
	float h_esteh=0;
	
	float kopi=7000;
	float j_kopi=0;
	float h_kopi=0;
	
	char lagi;
	char cukup;
	int hargaakhir , totalharga , uang , kembalian , jarak;
	float lol= 0;
	bool selesai=false;

choose:	
	cout<<"_________________________________"<< endl;
	cout<<"Selamat datang di Toko MariMakan"<< endl;
	cout<<"Apa yang ingin Anda pesan?"<< endl;
	cout<<"Daftar menu"<< endl;
	cout<<"Makanan :"<< endl;
	cout<<"1. Soto       = Rp 18000"<< endl;
	cout<<"2. Sate       = Rp 22500"<< endl;
	cout<<"3. Ayam bakar = Rp 20000"<< endl;
	cin>> makanan;
	cout<<"Minuman :"<< endl;
	cout<<"4. Jus mangga = Rp 10000"<< endl;
	cout<<"5. Es Teh     = Rp 5000"<< endl;
	cout<<"6. Kopi       = Rp 7000"<< endl;
	cin>> minuman;
	cout<<"_________________________________"<< endl;
	
	switch (makanan){
		case 1:
			cout<<"Berapa banyak soto yang anda ingin beli?"<< endl;
			cin>> j_soto;
			cout<<"________"<< endl;
			h_soto = soto*j_soto;
			cout<<"Total "<< h_soto;
			break;
			
	    case 2:
	    	cout<<"Berapa banyak sate yang anda ingin beli?"<< endl;
	    	cin>> j_sate;
	    	cout<<"________"<< endl;
	    	h_sate = sate*j_sate;
	    	cout<<"Total "<< h_sate;
	    	break;
	    	
	    case 3:
	    	cout<<"Berapa banyak ayam bakar yang anda ingin beli?"<< endl;
	    	cin>> j_ayambakar;
	    	cout<<"________"<< endl;
	    	h_ayambakar = ayambakar*j_ayambakar;
	    	cout<<"Total "<< h_ayambakar;
	    	break;}

	switch (minuman){    
	    case 4:
	    	cout<<"Berapa banyak jus mangga yang anda ingin beli?"<< endl;
	    	cin>> j_jusmangga;
	    	cout<<"________"<< endl;
	    	h_jusmangga = jusmangga*j_jusmangga;
	    	cout<<"Total "<< h_jusmangga; 
	    	break;
	    	
	    case 5:
	    	cout<<"Berapa banyak es teh yang anda ingin beli?"<< endl;
	    	cin>> j_esteh;
	    	cout<<"________"<< endl;
	    	h_esteh = esteh*j_esteh;
	    	cout<<"Total "<< h_esteh; 
	    	break;
	    	
	    case 6:
	    	cout<<"Berapa banyak kopi yang ingin anda beli?"<< endl;
	    	cin>> j_kopi;
	    	cout<<"________"<< endl;
	    	h_kopi = kopi*j_kopi;
	    	cout<<"Total "<< h_kopi; 
	    	break;
	    	
	default:
		cout<<" ";
	}
	cout<<"Ada tambahan lagi? [Y/N] =" ;
	cin>> lagi;
	if (lagi == 'Y')
	{ goto choose;
		} else{
			goto pembayaran;
		}
pembayaran:
	totalharga= h_soto+h_sate+h_ayambakar+h_esteh+h_jusmangga+h_kopi;
	cout<<"Total harga "<< totalharga;
	
	
		
}