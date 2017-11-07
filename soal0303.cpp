#include <iostream>
using namespace std;

int main(){
	int jk, l, jl, jtot,gp=6000;
	long gtot,gber;
	cout<<"Program Hitung Gajih"<<endl;
	cout<<"Lama Jam Kerja  : ";cin>>jk;
	if(jk>40){
		cout<<"Gajih Perjam     :Rp 6.000"<<endl;
		l=jk-40;
		cout<<"Lembur          :"<<l<<"jam"<<endl;
		jl=l*1.5;
		jtot=40+jl;
		cout<<"Total Jam Kerja :"<<jtot<<"jam"<<endl;
		cout<<"\n";
		gtot=jtot*gp;
		cout<<"Gajih Total     :"<<gtot<<endl;
		gber=gtot-(0.15*gtot);
		cout<<"Potongan Pajak  : 15%"<<endl;
		cout<<"Gajih Bersih    :"<<gber<<endl;
	}
		else{
		cout<<"Gajih Perjam     :Rp 6.000"<<endl;
		cout<<"++Jam Kerja Standart++"<<endl;
		cout<<"Total Jam Kerja :"<<jk<<"jam"<<endl;
		gtot=jk*gp;
		cout<<"Gajih Total     :"<<gtot<<endl;
		gber=gtot-(0.15*gtot);
		cout<<"Potongan Pajak  :15%"<<endl;
		cout<<"Gajih Bersih    :"<<gber;
		
	}	
}
