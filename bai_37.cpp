#include<iostream>
#include<math.h>
using namespace std;

float S(int n){
	if(n==2) return sqrt(2);
	else return pow((n+S(n-1)),1.0/n);
}

int main(){
	int n;
	cout << "n = ";cin >> n;
	cout <<"S= "<< S(n);
}
