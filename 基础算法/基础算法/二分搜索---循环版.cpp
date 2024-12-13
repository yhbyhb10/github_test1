//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int binarySearch(vector<int> vec, int target) {
//	int l = 0, r = vec.size() - 1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (target == vec[mid]) {
//			return mid;
//		}
//		else if (target > vec[mid]) {
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	return -1;
//}
//
////µÝ¹é°æ
//int binarySearch_recursion(vector<int> vec,int l,int r,int target) {
//	//int l = 0, r = vec.size() - 1;
//	int mid = (l + r) / 2;
//
//	if (l <= r) {
//		if (vec[mid] == target) {
//			return mid;
//		}
//		else if (vec[mid] > target) {
//			return binarySearch_recursion(vec, l, mid - 1, target);
//		}
//		else if (vec[mid] < target) {
//			return binarySearch_recursion(vec, mid + 1, r, target);
//		}
//	}
//	return -1;
//
//	
//}
////vec:2,4,6,8,10,12
////tar=4Ê±£¬
////binarySearch_recursion(v,0,5,tar)		binarySearch_recursion(v,0,1,tar)
////binarySearch_recursion(v,0,1,tar)		binarySearch_recursion(v,1,1,tar)
//
//int main() {
//
//	vector<int> vec{ 2,4,6,8,10,12,14 };
//	int tar;
//	while (cin >> tar) {
//		cout << binarySearch_recursion(vec,0,vec.size()-1,tar) << endl;
//	}
//	
//	return 0;
//}