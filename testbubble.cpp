#include <iostream> 
using namespace std; 

void tukar(int *a, int *b); 

int main()  
{ 
    int n,i,j;
    int arr[1005]; 

    cout<< "Masukkan besar data Anda "<<endl;
    cin >> n; 
    for(i = 0; i < n; i++) 
        cin >> arr[i]; 

    cout << "Data awal Anda adalah: ";    
    for(i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;

    cout << "Langkah-langkah bubble sort: "<<endl;

    for(i = 0; i < n - 1 ; i++) {
        for(j = 0; j < n - i -1; j++) {
            if(arr[j] < arr[j + 1]) {
                tukar(&arr[j], &arr[j + 1]); 

                cout << "tukar " << arr[j] << " dengan " << arr[j + 1] << ": ";
                for(int k = 0; k < n; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
    
    cout << "Array setelah sorting:" <<endl;
    for(i = 0; i < n; i++) 
        cout << arr[i] << " "; 

    return 0; 
} 
 
void tukar(int *a, int *b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
