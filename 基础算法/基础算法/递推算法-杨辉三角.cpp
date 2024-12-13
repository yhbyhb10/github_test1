//#include<iostream>
//using namespace std;
//
//long long f[101][101];
////递推算法：
////1.边界 f[i][1]=f[i][i]=1
////2.递推关系式 f[i][j]=f[i-1][j] + f[i-1][j-1]
//
//int main() {
//	int n;
//	cin >> n;
//	f[1][1] = 1;
//	for (int i = 2; i <= n; i++) {
//		f[i][1] = f[i][i] = 1;
//		for (int j = 2; j < i; j++) {
//			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++)
//			cout << f[i][j] << " ";
//		cout << endl;
//	}
//}