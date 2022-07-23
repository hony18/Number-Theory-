#include <iostream>
using namespace std;

class ExtEuclidTriplet{
public:
	long long gcd;
	long long x;
	long long y;
};

ExtEuclidTriplet recursive(long long a, long long b){
	if(b==0){
		ExtEuclidTriplet base;
		base.gcd = a;
		base.y = 0;
		base.x = 1;
		
		return base;
	}

	ExtEuclidTriplet temp = recursive(b, a%b);
	ExtEuclidTriplet myAns;
	myAns.gcd = temp.gcd;
	myAns.x = temp.y;
	myAns.y = (temp.x - (a/b)*temp.y);
}

int main() {
	// your code goes here
	long long a, b, g;
	cin >> a;
	cin >> b;
  
  ExtEuclidTriplet ans = recursive(a,b);

	cout << ans.x << " " << ans.y << " " << ans.gcd;
	//log(ans.x,ans.y,ans.gcd);
	
	

	return 0;
}


	
