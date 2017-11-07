#include<iostream>
using namespace std;

int main(){
	int x, y, z, p;
	char r;
	
	cout<<"Menghitung Luas Persegi Panjang dan Segitiga"<<endl;
	cout<<"Klik 1 Untuk Menghitung Persegi panjang:  "<<endl;
	cout<<"Klik 2 Untuk Menghitung Segitiga       :  "<<endl;
	cout<<"pilih>>>>   ";cin>>p;
	
	if (p==1){
		cout<<"Masukan panjang persegi panjang:";cin>>x;
		cout<<"Masukan lebar persegi panjang  :";cin>>y;
		z=y*x;
		cout<<"Luas Persegi Panjang           :"<<z<<"cm2"<<endl;
	}
	else if(p==2){
		cout<<"Masukkan tinggi segitiga       :";cin>>x;
		cout<<"Masukkan nilai alas segitiga   :";cin>>y;
		z=(x*y)/2;
		cout<<"Luas Segitiga                  :"<<z;
	}
}
