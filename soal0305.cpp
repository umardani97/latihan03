#include<iostream>
using namespace std;

int main(){
	int tb, bb, hasil1, hasil2;
	cout<<"Menghitung Badan Ideal"<<endl;
	cout<<"Masukkan Tinggi Badan = ";cin>>tb;
	cout<<"Masukkan Berat Badan  = ";cin>>bb;
	
	if(bb<tb/2.5){
		cout<<"Anda Termasuk UNDERWEIGHT";
	}
	else if(tb/2.3<bb){
		cout<<"Anda Termasuk Overweight";
	}
}
