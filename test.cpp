#include <iostream>
using namespace std;
    
    int main(){
        int a, b, total;
        cout <<"Masukkan jumlah bebek jantan"<< endl;
        cin >> a;
        if (a < 1 )
        cout << "jumlah bebek tidak valid" << endl;
        if (a > 100)
        cout << "jumlah bebek tidak valid" << endl;
        
        cout <<"Masukkan jumlah bebek betina"<< endl;
        cin >> b;
        if (b < 1 )
        cout << "jumlah bebek tidak valid" << endl;
        if (b > 100)
        cout << "jumlah bebek tidak valid" << endl;

        total = a + b;
        
        cout <<"Total bebek Anda adalah " << total << endl;
        return 0;
    }