#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
typedef long long ll;
ll Quick_pow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b & 1 == 1) {
			res *= a;
		}
		a = a * a;//±¶Ôö
		b >>= 1;
	}
	return res;
}
//5^13
//13---1101
//res=1*5;
//a=5*5
//b=110
//a=5^2*5^2
//b=11
//res=5*5^4
//a=5^4*5^4
//b=1
//res=5^5*5^8

int main() {

	//pow()
	cout << Quick_pow(2, 6) << endl;
	return 0;
}