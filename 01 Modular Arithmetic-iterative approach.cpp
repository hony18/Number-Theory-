#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	long long ans = 1;

	while(b != 0){
		if(b%2 != 0){
			ans = ((ans%c) * (a%c))%c;
		}

		a = a*a;
		b = b >> 1;
	} 

	cout << ans;

	return 0;
}

