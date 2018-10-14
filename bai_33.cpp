#include<iostream>
#include<math.h>
using namespace std;

float S(int n){
	if(n==1) return sqrt(2);
	else return sqrt(2+S(n-1));
}

int main(){
	int n;
	cout << "n = ";cin >> n;
	cout << S(n);
}
