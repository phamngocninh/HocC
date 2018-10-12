#include<iostream>
#include <time.h> 
#include<math.h>
using namespace std;


int main(){
	long long n,s;
	cin >> n;
	time_t timer,start;
    time(&start);
	for(int i=1;i<=n;i++){
		s=s+i;
	}
	cout<<s<<endl;
	time(&timer);  /* get current time; same as: timer = time(NULL)  */

  	double seconds = difftime(timer,start);
  	cout << seconds;
}
