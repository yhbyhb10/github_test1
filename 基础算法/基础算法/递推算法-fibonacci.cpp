//#include<iostream>
//using namespace std;
//int f[101];
//
////�����㷨��
////1.�߽磺f[1]=f[2]=1
////2.���ƹ�ϵʽ��f[i]=f[i-1]+f[i-2]
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
////�ݹ�ʵ�֣�쳲�����
//int fibonacci(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}