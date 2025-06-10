#include <iostream>
using namespace std;
int main(){
	int x,i; bool found;
	int TabInt[10];
	cin>> x;
	i = 0; found = false;
	while ((i<10)&&(!found)){
		if (TabInt[i]==x){
			found = true;
		} else {
			i++;
		}
	}
	if (found){
		cout<< x <<" ada di indeks "<< i;
		}else{
			cout<<x << " tidak ditemukan";
		}
	return 0;
}