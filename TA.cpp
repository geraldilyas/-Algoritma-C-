#include<iostream>
#include <cstring>
using namespace std;

struct node
{
    int info;
    node *next;
} *top1, *top2, *newptr, *save, *ptr;

node *create_new_node(int);
void push(node *n, int nom_stack);
void pop(int nom_stack);
void display(node *n);

int main()
{
    int inf, nom_stack;
    char ch='y';
    top1 = NULL;
    top2 = NULL;
    while(ch == 'y' || ch == 'Y')
    {
        cout << "Pilih stack (1 atau 2): ";
        cin >> nom_stack;

        cout << "Masukkan elemen: ";
        cin >> inf;
        newptr = create_new_node(inf);
        if(newptr == NULL)
        {
            cout << "Maaf, tidak bisa membuat node..Keluar program..!!";
            return 0;
        }
        cout << "Elemen dimasukkan..." << endl;
        push(newptr, nom_stack);
        cout << "Elemen berhasil dimasukkan..." << endl;
        cout << "Stack 1: ";
        display(top1);
        
        cout << "Stack 2: ";
        display(top2);

        cout << "Mau menambahkan elemen ? (y/n) ";
        cin >> ch;
    }

    do
    {
        cout << "Pilih stack untuk mengeluarkan elemen (1 atau 2): ";
        cin >> nom_stack;

        cout << "Stack " << nom_stack << ": \n";
        if (nom_stack == 1) 
            display(top1);
        else display(top2);

        cout << "Mau mengeluarkan elemen? (y/n) ";
        cin >> ch;
        if(ch == 'y' || ch == 'Y')
        {
            if ((nom_stack == 1 && top1 != NULL) || (nom_stack == 2 && top2 != NULL)) {
                cout << "Elemen yang dikeluarkan: " << (nom_stack == 1 ? top1->info : top2->info) << endl;
                pop(nom_stack);
            } else {
                cout << "Stack kosong. \n";
            }
        }
        cout << endl;
    } while(ch == 'y' || ch == 'Y');

    return 0;
}

node *create_new_node(int x)
{
    ptr = new node;
    ptr->info = x;
    ptr->next = NULL;
    return ptr;
}

void push(node *n, int nom_stack)
{
    if (nom_stack == 1) {
        if (top1 == NULL) {
            top1 = n;
        } else {
            save = top1;
            top1 = n;
            n->next = save;
        }
    } else if (nom_stack == 2) {
        if (top2 == NULL) {
            top2 = n;
        } else {
            save = top2;
            top2 = n;
            n->next = save;
        }
    }
}

void pop(int nom_stack)
{
    if (nom_stack == 1) {
        if (top1 == NULL) {
            cout << "Underflow..!! Stack 1 kosong.\n";
            return;
        } else {
            ptr = top1;
            top1 = top1->next;
            delete ptr;
        }
    } else if (nom_stack == 2) {
        if (top2 == NULL) {
            cout << "Underflow..!! Stack 2 kosong.\n";
            return;
        } else {
            ptr = top2;
            top2 = top2->next;
            delete ptr;
        }
    }
}

void display(node *n)
{
    while(n != NULL)
    {
        cout << n->info << " -> ";
        n = n->next;
    }
    cout << "!!\n";
}
