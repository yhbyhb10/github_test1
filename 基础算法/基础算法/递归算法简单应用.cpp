//#include<iostream>
//using namespace std;
//
//int f[101][101];
//
//
//long long  factorials(int n) {
//	if (n == 1 || n == 0) {
//		return 1;
//	}
//	return n*factorials(n - 1);
//}
////1.factorials(5)		return 5*factorials(4)
////2.factorials(4)		return 4*factorials(3)
////3.factorials(3)		return 3*factorials(2)
////4.factorials(2)		return 2*factorials(1)
////5.factorials(1)		return 1;
//
////递归实现菲波那切数列 1 1 2 3 5 8 13 21 34 55....
//long long  fibonacci(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
////递归实现杨辉三角
//int yanghui_triangle(int n, int m) {
//
//	if (m == 1 || m == n) {
//		return 1;
//	}
//	return yanghui_triangle(n - 1, m) + yanghui_triangle(n - 1, m - 1);
//		//f[n][m] = f[n - 1][m] + f[n - 1][m - 1];
//}
//
//int main() {
//	//cout<<yanghui_triangle(4, 2)<<endl;
//	cout << "输入行数:" << endl;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << yanghui_triangle(i, j)<< " ";
//		}
//		cout << endl;
//	}
//	/*int result=factorials(16);
//	cout << result << endl;*/
//	return 0;
//}