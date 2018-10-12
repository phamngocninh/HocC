#include<iostream>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin >> a[i];	
	}
	for(int i=0;i<5;i++) cout<<"Phan tu thu "<<i+1<<" la: "<<a[i]<<endl;
}
