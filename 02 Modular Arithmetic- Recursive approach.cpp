#include <iostream>
using namespace std;

long long recursive(long long a, long long b, long long c){
	if(b==0){
		return 1;
	}
	
	if(b%2 != 0){
		long long ans = recursive(a,b/2,c);
		return ((ans%c)*(ans%c)*(a%c))%c;
	}
	else{
		long long ans = recursive(a,b/2,c);
		return ((ans%c)*(ans%c))%c;
	}
}

int main() {
	// your code goes here
	long long a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
  
	long long ans1 = recursive(3,5,5);

	cout << ans1 << endl;

	return 0;
}
