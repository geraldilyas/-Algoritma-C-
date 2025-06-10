#include <iostream>
using namespace std;

int main()
{
    int buku[2][4];
    int total[4] = {0, 0, 0, 0}; // Array untuk menyimpan total buku per jenis

    // Memasukkan data jumlah buku untuk setiap ruangan dan jenis buku
    cout << "Masukkan data jumlah buku untuk setiap ruangan dan jenis buku:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Ruangan " << i + 1 << ", Jenis buku " << j + 1 << ": ";
            cin >> buku[i][j];
            // Hitung total per jenis buku
            total[j] += buku[i][j];
        }
    }

    // Menampilkan hasil jumlah total buku per jenis
    cout << "\nJumlah total buku untuk setiap jenis buku:\n";
    for (int j = 0; j < 4; j++)
    {
        cout << "Jenis buku " << j + 1 << ": " << total[j] << " buku\n";
    };

    return 0;
}