#include <iostream>

using namespace std;

int main () {
	

    
    int buku;
    float bukunovel=70000;
    float j_novel = 0;
    float h_novel=0;

    int bukukomik=40000;
    int j_komik =0;
    int h_komik=0;

    int bukupengetahuanumum=100000;
    int j_pengetahuanumum;
    int h_pengetahuanumum=0;

    int bukuresep=25000;
    int j_resep=0;
    int h_resep=0;

    int bukukamus=50000;
    int j_kamus=0;
    int h_kamus=0;
    char lagi;
    char cukup;
    int hargaakhir = 0;
    int totalharga;
    int uang;
    int kembalian;
    float lol= 0;

choose:
cout<<"___________"<<endl;
   cout<<"Selamat datang di MariBaca Book Store"<<endl;
   cout<<"Pilih buku yang diminati"<<endl;
   cout<<"1.Novel"<<endl;
   cout<<"2.Komik"<<endl;
   cout<<"3.Pengetahuan Umum"<<endl;
   cout<<"4.Resep"<<endl;
   cout<<"5.Kamus"<<endl;
   cout<<"Buku nomor berapa yang anda ingin beli?"<<endl;
   cin >> buku;


   switch (buku)
   {
    case 1:
    cout<<"Berapa yang buku yang ingin di beli"<<endl;
    cin>>j_novel;
    cout<<"___________"<<endl;
    h_novel=bukunovel*j_novel;
    cout<<"Total "<<h_novel;
    break;

    case 2:
    cout<<"Jumlah buku yang ingin di beli"<<endl;
    cin>>j_komik;
    cout<<"___________"<<endl;
    h_komik=bukukomik*j_komik;
    cout<<"Total"<<h_komik;
    break;
    
    case 3:
    cout<<"Jumlah buku yang ingin di beli"<<endl;
    cin>>j_pengetahuanumum;
    cout<<"___________"<<endl;
    h_pengetahuanumum=bukupengetahuanumum*j_pengetahuanumum;
    cout<<"Total"<<h_pengetahuanumum;
    break;


    case 4:
    cout<<"Jumlah buku yang ingin di beli"<<endl;
    cin>>j_resep;
    cout<<"___________"<<endl;
    h_resep=bukuresep*j_resep;
    cout<<"Total "<<h_resep;
    break;

     case 5:
    cout<<"Jumlah buku yang ingin di beli"<<endl;
    cin>>j_kamus;
    cout<<"___________"<<endl;
    h_kamus=bukukamus*j_kamus;
    cout<<"Total "<<h_kamus;
    break;

    default:
    cout<<"Tidak Tersedia";
}

    cout<<"Ada tambahan lagi? [Y/N] = ";
    cin >> lagi;
    if (lagi == 'Y')
    {
        goto choose;
    } else{
        goto pembayaran;
    }
pembayaran: 
    totalharga = h_novel + h_komik + h_pengetahuanumum + h_resep + h_kamus;
    cout<<totalharga<<endl;
    
	
    if (totalharga > 100000){
        hargaakhir=totalharga*0.93;
    }else if (totalharga>=150000 && totalharga<=250000){
        hargaakhir=totalharga*0.90;
    }else if (totalharga>250000){
        hargaakhir=totalharga*0.88;
    }else if(totalharga <= 100000){
    	lol = totalharga;
	}

    


 cout<<"Jumlah yang harus dibayar "<<totalharga<<endl;
 //totalharga = totalharga-hargaakhir
 cout<<"Harga setelah diskon "<<hargaakhir<<endl;

 cout<<"masukan jumlah uang yang digunakann untuk membayar";
 cin>>uang;
 kembalian=uang-hargaakhir-lol;
 cout<<"uang kembalian nya adalah:"<<kembalian;
    
    return 0;
}

	

	
