#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < N - i; j++) //������ N-1��ŭ ���
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++) { //*�� i����ŭ ���
			cout << "*";
		}

		cout << endl;
	}

}