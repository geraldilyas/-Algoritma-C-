#include <iostream>
using namespace std;

struct node {
    int noAntrean; 
    string namaPel;
    string pesanan;
    node *next;
} *front, *newptr, *save, *ptr, *rear;

node *create_new_node(int, string, string);
void insert(node *);
void delete_node_queue();
void display(node *);

int main() {
    front = rear = NULL;
    int noAntrean;
    string namaPel;
    string pesanan;
    int count = 0;
    char ch = 'y';
    
    while (ch == 'y' || ch == 'Y') {
        cout << "Masukkan nomor antrean ";
        cin >> noAntrean;
        cout << "Masukkan nama pelanggan ";
        cin >> namaPel;
        cout << "Masukkan pesanan ";
        cin >> pesanan;
        newptr = create_new_node(noAntrean, namaPel, pesanan);
        
        if (newptr == NULL) {
            cout << "Tidak dapat membuat node..!! Keluar program.." << endl;
            exit(1);
        }
        
        insert(newptr);
        cout << "Nomor antrean " << noAntrean << " berhasil ditambahkan ke antrean." << endl;
        cout << "Antrian saat ini (Depan -> Belakang):" << endl;
        display(front);
        
        cout << "Apakah ada pelanggan lain yang ingin antre? (y/n) ";
        cin >> ch;
    }

 
    do {
        cout << "Antrian saat ini (Depan -> Belakang):" << endl;
        display(front);
        
        if (count == 0) {
            cout << "Apakah ingin melayani pelanggan pertama dalam antrean? (y/n) ";
            count++;
        } else {
            cout << "Apakah ingin melayani pelanggan berikutnya? (y/n) ";
        }
        
        cin >> ch;
        
        if (ch == 'y' || ch == 'Y') {
            delete_node_queue();
        }
        cout << endl;
        
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

node *create_new_node(int x, string y, string z) {
    ptr = new node;          
    ptr->noAntrean = x;      
    ptr->namaPel = y;        
    ptr->pesanan = z;        
    ptr->next = NULL;        
    return ptr;              
}


void insert(node *n) {
    if (front == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
}

void delete_node_queue() {
    if (front == NULL) {
        cout << "Antrean kosong..!! Tidak ada pelanggan untuk dilayani." << endl;
        exit (1);
    } else {
        ptr = front; 
        cout << "Melayani pelanggan dengan nomor: " << front->noAntrean << endl;
        cout << "Nama pelanggan: " << front->namaPel << endl;   
        cout << "Pesanan: " << front->pesanan << endl;         
        front = front->next;  
        delete ptr;          
    }
}

void display(node *n) {
    if (n == NULL) {
        cout << "Antrean kosong!" << endl;
    } else {
        while (n != NULL) {
            cout << n->noAntrean << " -> ";
            n = n->next;
        }
        cout << "!!" << endl;
    }
}