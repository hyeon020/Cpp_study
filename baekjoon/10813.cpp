#include <iostream>
using namespace std;

int main() {
	int n, m;
	int arr[101] = { 0, };
	cin >> n >> m;
	int a, b;
	for (int i = 1; i <= n; i++) {
		arr[i] = i; //ó�� �迭 �ٱ��� ���� ��ȣ �Ȱ��� �ʱ�ȭ
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		swap(arr[a], arr[b]); //a,b�ٲ�
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}