#include <iostream>
using namespace std;

int main(){
	int umur;
	int filmanakanak;
	float FindingNemo=35000;
	float j_FindingNemo=0;
	float h_FindingNemo=0;
	
	float Zootopia=35000;
	float j_Zootopia=0;
	float h_Zootopia=0;
	
	float Cars=35000;
	float j_Cars=0;
	float h_Cars=0;
	
	int filmremaja;
	float Avengers=40000;
	float j_Avengers=0;
	float h_Avengers=0;
	
	float Superman=40000;
	float j_Superman=0;
	float h_Superman=0;
	
	float Gundala=40000;
	float j_Gundala=0;
	float h_Gundala=0;
	
	int filmdewasa;
	float Interstelar=50000; 
	float j_Interstelar=0; 
	float h_Interstelar=0;
	
	float Barbie=50000; 
	float j_Barbie=0; 
	float h_Barbie=0;
	
	float Openheimer=50000; 
	float j_Openheimer=0; 
	float h_Openheimer=0; 

	char lagi;
	char cukup;
	int hargatotal , uang , kembalian;
	
	cout<<"Selamat datang di Bioskop XXII"<<endl;
hapis:
	cout<<"Berapa umur anda? "<< endl;
	cin>> umur;
	if (umur<= 12){
		goto filmanakanak;
	} else if (umur<=13 , umur<=16){
		goto filmremaja;
	} else if (umur >=17){
	    goto filmdewasa;}
filmanakanak:
	cout<<"Film apa yang Anda ingin tonton?"<< endl;
	cout<<"daftar film: "<< endl;
	cout<<"1. Finding Nemo  = 35000"<< endl;
	cout<<"2. Zootopia      = 35000"<<endl;
	cout<<"3. Cars          = 35000"<< endl;	
	cin>> filmanakanak;
	cout<<"__________________________________________"<< endl;
	goto alek;
	
	
filmremaja:
	cout<<"film apa yang Anda ingin tonton?"<< endl;
	cout<<"daftar film"<< endl;
	cout<<"1. Finding Nemo  = 35000"<< endl;
	cout<<"2. Zootopia      = 35000"<<endl;
	cout<<"3. Cars          = 35000"<< endl;	
	cout<<"4. Avengers      = 40000"<< endl;
	cout<<"5. Superman      = 40000"<< endl;
	cout<<"6. Gundala       = 40000"<< endl;
	cin>> filmremaja;
	cout<<"_______________________________________"<< endl;
	goto lian;
	
filmdewasa:
	cout<<"film apa yang Anda ingin tonton?"<< endl;
	cout<<"daftar film"<< endl;
	cout<<"1. Finding Nemo  = 35000"<< endl;
	cout<<"2. Zootopia      = 35000"<<endl;
	cout<<"3. Cars          = 35000"<< endl;	
	cout<<"4. Avengers      = 40000"<< endl;
	cout<<"5. Superman      = 40000"<< endl;
	cout<<"6. Gundala       = 40000"<< endl;
	cout<<"7. Interstelar   = 50000"<< endl;
	cout<<"8. Barbie        = 50000"<< endl;
	cout<<"9. Openheimer    = 50000"<< endl;
	cin>> filmdewasa;
	cout<<"_______________________________________"<< endl;
	goto gerald;
	
alek:
	switch (filmanakanak){
		case 1:
		cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
		cin>> j_FindingNemo;
		cout<<"_________________________________________"<< endl;
		h_FindingNemo = FindingNemo*j_FindingNemo;
		cout<<"Total "<< h_FindingNemo;
		break;
		
		case 2:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Zootopia;
	    cout<<"_________________________________________"<< endl;
	    h_Zootopia = Zootopia*j_Zootopia;
	    cout<<"Total "<< h_Zootopia;
	    break;
	    
	    case 3:
	     cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Cars;
	    cout<<"_________________________________________"<< endl;
	    h_Cars = Cars*j_Cars;
	    cout<<"Total "<< h_Cars;
	    break;
	}
lian:
	switch (filmremaja){
		case 1:
		cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
		cin>> j_FindingNemo;
		cout<<"_________________________________________"<< endl;
		h_FindingNemo = FindingNemo*j_FindingNemo;
		cout<<"Total "<< h_FindingNemo;
		break;
		
		case 2:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Zootopia;
	    cout<<"_________________________________________"<< endl;
	    h_Zootopia = Zootopia*j_Zootopia;
	    cout<<"Total "<< h_Zootopia;
	    break;
	    
	    case 3:
	     cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Cars;
	    cout<<"_________________________________________"<< endl;
	    h_Cars = Cars*j_Cars;
	    cout<<"Total "<< h_Cars;
	    break;
		case 4:
		cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Avengers;
	    cout<<"_________________________________________"<< endl;
	    h_Avengers = Avengers*j_Avengers;
	    cout<<"Total "<< h_Avengers;
	    break;
	    
	    case 5:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Superman;
	    cout<<"_________________________________________"<< endl;
	    h_Superman = Superman*j_Superman;
	    cout<<"Total "<< h_Superman;
	    break;
	    
	    case 6:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Gundala;
	    cout<<"_________________________________________"<< endl;
	    h_Gundala = Gundala*j_Gundala;
	    cout<<"Total "<< h_Gundala;
	    break;
	    
	    
	}
gerald:
	switch (filmdewasa){
		case 1:
		cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
		cin>> j_FindingNemo;
		cout<<"_________________________________________"<< endl;
		h_FindingNemo = FindingNemo*j_FindingNemo;
		cout<<"Total "<< h_FindingNemo<< endl;
		break;
		
		case 2:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Zootopia;
	    cout<<"_________________________________________"<< endl;
	    h_Zootopia = Zootopia*j_Zootopia;
	    cout<<"Total "<< h_Zootopia<< endl;
	    break;
	    
	    case 3:
	     cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Cars;
	    cout<<"_________________________________________"<< endl;
	    h_Cars = Cars*j_Cars;
	    cout<<"Total "<< h_Cars<< endl;
	    break;
		case 4:
		cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Avengers;
	    cout<<"_________________________________________"<< endl;
	    h_Avengers = Avengers*j_Avengers;
	    cout<<"Total "<< h_Avengers<< endl;
	    break;
	    
	    case 5:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Superman;
	    cout<<"_________________________________________"<< endl;
	    h_Superman = Superman*j_Superman;
	    cout<<"Total "<< h_Superman<< endl;
	    break;
	    
	    case 6:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Gundala;
	    cout<<"_________________________________________"<< endl;
	    h_Gundala = Gundala*j_Gundala;
	    cout<<"Total "<< h_Gundala<< endl;
	    break;
	    
		case 7:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Interstelar;
	    cout<<"_________________________________________"<< endl;
	    h_Interstelar = Interstelar*j_Interstelar;
	    cout<<"Total "<< h_Interstelar<< endl;
	    break;
	    
	    case 8:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Barbie;
	    cout<<"_________________________________________"<< endl;
	    h_Barbie = Barbie*j_Barbie;
	    cout<<"Total "<< h_Barbie<< endl;
	    break;
	    
	    case 9:
	    cout<<"Berapa banyak tiket yang anda ingin beli?"<< endl;
	    cin>> j_Openheimer;
	    cout<<"_________________________________________"<< endl;
	    h_Openheimer = Openheimer*j_Openheimer;
	    cout<<"Total "<< h_Openheimer<< endl;
	    break;
	    default:
	    	cout<<"Input salah"<<endl;
}
cout<<"Ada tambahan lagi? [Y/N]= "<< endl;
cin>> lagi;
if (lagi== 'Y')
{ goto hapis;}
else {goto pembayaran;}

pembayaran:
hargatotal = h_FindingNemo+h_Zootopia+h_Cars+h_Avengers+h_Superman+h_Gundala+h_Interstelar+h_Barbie+h_Openheimer;
cout<<"Total harga yang harus dibayar adalah Rp "<< hargatotal<<endl;
cout<<"masukkan jumlah uang yang digunakan untuk membayar Rp "<< endl;	
cin>>uang;
kembalian = uang-hargatotal;
cout<<"kembalian anda adalah Rp "<< kembalian<< endl;
cout<<"Terimakasih sudah membeli tiket di Bioskop XXII"<< endl;
return 0;
}

	
