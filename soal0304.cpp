#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Positif, Negativ dan NOL"<<"\n";
	cout<<"Masukkan Angka  :";cin>>x;
	if(x>0){
		cout<<"Angka Yang Anda Masukkan Positif";
	}
	else if(x<0){
		cout<<"Angka Yang Anda Masukkan Negatif";
	}
	else{
		cout<<"Angka Yang Anda Masukkan NOL";
	}
}
