/*Menghitung S6*/
/*Nama : Jasmine Sarah Maqnolia*/
/*NIM : 20051397078*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,jumlahsuku,i,n;
	cout<<"Masukkan Nilai Suku Pertama (a):";cin>>a;
	cout<<"Masukkan Nilai Beda Tiap Suku (b):";cin>>b;
	cout<<"Masukkan Banyaknya Suku (n):";cin>>n;
	
	for(i=1;i<=10;i++){
		if(i<10){
			cout<<i<<"^3";
		}
		if(i<7){
			jumlahsuku+=pow(3,i);
		}
		if(i==10){
			cout<<i<<"^3"<<endl;
			cout<<endl<<"Jumlah 6 Suku Pertama adalah "<<jumlahsuku<<endl;
		}
	}
	
		


	
}


