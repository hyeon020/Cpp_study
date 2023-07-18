#include <iostream>
using namespace std;

int main() {
	int n, m;
	int arr[101] = { 0, };
	cin >> n >> m;
	int a, b;
	for (int i = 1; i <= n; i++) {
		arr[i] = i; //처음 배열 바구니 수와 번호 똑같이 초기화
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		swap(arr[a], arr[b]); //a,b바꿈
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}