#include<iostream>
#include<string>
using namespace std;

struct node
{
    int tipe1;       
    float tipe2;     
    char tipe3;       
    string tipe4;     
    bool tipe5;      
    node *next;  
} *start, *newptr, *save, *ptr;

node *create_new_node(int, float, char, string, bool);
void insert_at_beg(node *);
void display(node *);
void delete_first_node();

int main()
{
    start = NULL;
    int tipe1;
    float tipe2;
    char tipe3;
    string tipe4;
    bool tipe5;
    char ch = 'y';
    
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Masukkan nilai tipe int: ";
        cin >> tipe1;
        cout << "Masukkan nilai tipe float: ";
        cin >> tipe2;
        cout << "Masukkan nilai tipe char: ";
        cin >> tipe3;
        cout << "Masukkan nilai tipe string: ";
        cin >> tipe4;
        cout << "Masukkan nilai tipe bool (1 untuk true, 0 untuk false): ";
        cin >> tipe5;

        cout << "Membuat node baru..." << endl;
        newptr = create_new_node(tipe1, tipe2, tipe3, tipe4, tipe5);
        if (newptr != NULL)
        {
            cout << "Berhasil membuat node baru..." << endl;
        }
        else
        {
            cout << "Maaf, tidak dapat membuat node baru";
            return 0;
        }

        cout << "Memasukkan node pada bagian awal list..." << endl;
        insert_at_beg(newptr);
        cout << "Node berhasil dimasukkan di bagian awal list..." << endl;
        
        cout << "List: ";
        display(start);

        cout << "Mau membuat node baru? (y/n) ";
        cin >> ch;
    }

    cout << "Mau menghapus node pertama? (y/n) ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        delete_first_node();
        cout << "List setelah menghapus node pertama: ";
        display(start);
    }

    return 0;
}

node *create_new_node(int dataInteger, float dataFloat, char dataChar, string dataString, bool dataBool)
{
    ptr = new node;
    ptr->tipe1 = dataInteger;
    ptr->tipe2 = dataFloat;
    ptr->tipe3 = dataChar;
    ptr->tipe4 = dataString;
    ptr->tipe5 = dataBool;
    ptr->next = NULL;
    return ptr;
}

void insert_at_beg(node *np)
{
    if (start == NULL)
    {
        start = np;
    }
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}

void display(node *np)
{
    if (np == NULL)
    {
        cout << "List kosong.\n";
        return;
    }

    while (np != NULL)
    {
        cout << "[int: " << np->tipe1
             << ", float: " << np->tipe2
             << ", char: " << np->tipe3
             << ", string: " << np->tipe4
             << ", bool: " << (np->tipe5 ? "true" : "false")
             << "] -> ";
        np = np->next;
    }
    cout << "!!\n";
}

void delete_first_node()
{
    if (start == NULL)
    {
        cout << "List kosong, tidak ada node yang bisa dihapus.\n";
        return;
    }

    node *temp = start;
    start = start->next;
    delete temp;
    cout << "Node pertama berhasil dihapus.\n";
}
