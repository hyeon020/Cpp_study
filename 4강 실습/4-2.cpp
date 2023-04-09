#include <iostream>
using namespace std;

int main() {
	int *p = new int[5]; //동적할당
	double sum = 0.0;
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << "평균 " << sum / 5;
	delete[] p; //배열 메모리 반환
}