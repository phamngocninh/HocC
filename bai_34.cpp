#include<iostream>
#include<math.h>
using namespace std;

float S(int n){
	if(n==1) return 1;
	else return sqrt(n+S(n-1));
}

int main(){
	int n;
	cout << "n = ";cin >> n;
	cout <<"S="<< S(n);
}
