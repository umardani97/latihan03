#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"Masukkan Nilai x : ";cin>>x;
	cout<<"Masukkan Nilai y : ";cin>>y;
	if(x<y){
		z=y-x;
	}
	else{
		z=x-y;
	}
	cout<<"Hasil Nilai Z : "<<z;
}
