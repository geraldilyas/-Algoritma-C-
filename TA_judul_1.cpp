#include <iostream>
using namespace std;

int main(){
    int data[2][4];
    int jumlah_per_jenis[4] = {0};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << "masukkan jumlah buku jenis ke-" << j+1 << " pada ruangan ke-" << i+1 << endl;
            cin >> data[i][j];  
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            jumlah_per_jenis[j] += data[i][j]; 
    }
    }
    for (int j = 0; j < 4; j++){
        cout << "total jenis buku ke-" << j+1 <<" adalah " << jumlah_per_jenis[j] << " buku" << endl;
    }
    return 0;

}