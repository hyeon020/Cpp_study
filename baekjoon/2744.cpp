#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	getline(cin, a);
	
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			a[i] += 32; //a�� 65���� 90�̸� �빮���̹Ƿ� 32 ���ؼ� �ҹ��ڷ�
		}
		else {
			a[i] -= 32; //�ݴ�� �ҹ���(97�̻�122����)���� �빮�ڴ� 32 ��
		}
	}
	cout << a;
}