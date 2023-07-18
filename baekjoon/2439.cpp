#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < N - i; j++) //공백은 N-1만큼 출력
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++) { //*는 i개만큼 출력
			cout << "*";
		}

		cout << endl;
	}

}