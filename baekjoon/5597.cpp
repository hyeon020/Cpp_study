#include <iostream>
using namespace std;

int main() {
	int arr[31] = { 0, }; //�迭�� 0���� �ʱ�ȭ
	int a;
	for (int i = 0; i < 28; i++)
	{
		cin >> a;
		arr[a] = 1; //�Էµ� ���ڸ� �ε����� �����Ͽ� 1�� ����
	}
	for (int j = 1; j <= 30; j++) {
		if (arr[j] == 0)
			cout << j << endl;
	}
}