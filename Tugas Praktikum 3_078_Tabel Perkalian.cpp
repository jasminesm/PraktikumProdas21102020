/*Table Perkalian*/
/*Nama : Jasmine Sarah Maqnolia*/
/*NIM : 20051397078*/

#include<iostream>
#include<iomanip>
using namespace std;
main(){
	int i,j;
	cout<<"=====Tabel Perkalian====="<<endl;
	for (i=1;i<=10;i++)
	{
		cout<<setw(5)<<i;
	for (j=1;j<=10;j++)
	cout<<setw(5)<<i*j;
	cout<<endl;
	}	
}
