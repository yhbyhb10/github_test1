//#include<iostream>
//using namespace std;
//
//long long f[101];
////�����㷨��
////1.�߽� f[1]=0  f[2]=1
////2.���ƹ�ϵʽ f[i]=(i-1)*(f[i-1]+f[i-2])
//
//int main() {
//	f[1] = 0;
//	f[2] = 1;
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i++)
//		f[i] = (i - 1)*(f[i - 1] + f[i - 2]);
//	for (int i = 1; i <= n; i++) {
//		cout << f[i] << " ";
//	}
//}