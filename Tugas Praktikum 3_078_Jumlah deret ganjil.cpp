/*Jumlah Deret */
/*Nama : Jasmine Sarah Maqnolia*/
/*NIM : 20051397078*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n,jumlahderet,pager;
	cout<<"Menghitung Jumlah Deret"<<endl;
	    for(int i=3; i<=15; i+=4){
        jumlahderet += i;
        if(i<15){
            cout<<i<<", ";
        }
        if(i==15){
            cout<<i<<endl;
		}
	}
    cout<<"Jumlah Deret = "<<jumlahderet<<endl;
}



