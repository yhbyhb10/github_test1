//#include<iostream>
//using namespace std;
//
//long long f[101][101];
//bool vis[101][101];
//
////B点(n,m),马的C点坐标为(cx,cy)
//int  n, m, cx, cy;
////方向数组   p2 p7 p1 p8 p3  p6  p4  p5
//int dx[] = { 1, 1, 2, 2, -1, -1, -2, -2 };
//int dy[] = { 2,-2, 1, -1, 2, -2, 1, -1 };
//
//int main() {
//	cin >> n >> m >> cx >> cy;
//	vis[cx][cy] = 1;
//	for (int i = 0; i < 8; i++) {
//		int bx = cx + dx[i],by = cy + dy[i];
//		//马的控制点是否在有效范围内
//		if (bx >= 0 && bx <= m && by >= 0 && by <= n)
//			vis[bx][by] = 1;//1---代表马的控制点是有效的。
//	}
//	f[0][0] = 1;
//	if (vis[0][0] == 1) f[0][0] = 0;
//	for (int j = 1; j <= m; j++) {
//		f[0][j] = f[0][j - 1];
//		if (vis[0][j] == 1) {
//			f[0][j] = 0;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		f[i][0] = f[i - 1][0];
//		if (vis[i][0] == 1) f[i][0] = 0;
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			f[i][j] = f[i - 1][j] + f[i][j - 1];
//			if (vis[i][j] == 1) f[i][j] = 0;
//		}
//	}
//	cout << f[n][m];
//	return 0;
//}