//#include<iostream>
//using namespace std;
//int f[101];
//
////递推算法：
////1.边界：f[1]=f[2]=1
////2.递推关系式：f[i]=f[i-1]+f[i-2]
//
//int main() {
//	int n;
//	cin >> n;
//	f[1] = f[2] = 1;
//
//	for (int i = 3; i <= n; i++) {
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	cout << f[n];
//	return 0;
//}
//
////递归实现，斐波那契
//int fibonacci(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}