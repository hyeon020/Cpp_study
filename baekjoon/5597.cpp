#include <iostream>
using namespace std;

int main() {
	int arr[31] = { 0, }; //배열을 0으로 초기화
	int a;
	for (int i = 0; i < 28; i++)
	{
		cin >> a;
		arr[a] = 1; //입력된 숫자를 인덱스로 접근하여 1로 대입
	}
	for (int j = 1; j <= 30; j++) {
		if (arr[j] == 0)
			cout << j << endl;
	}
}