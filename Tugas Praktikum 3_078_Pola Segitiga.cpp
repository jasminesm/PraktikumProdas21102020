/*Pola Segitiga*/
/*Nama : Jasmine Sarah Maqnolia*/
/*NIM : 20051397078*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,j,n,l,angka;
	cout<<"Masukkan Angka :";cin>>angka;
	for (int i=1; i<=angka;i++){
        for(int l=1; l<=i; l++){
            cout<<l;
        }
        cout<<endl;
    }
    for (int i=angka-1; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
	
}
