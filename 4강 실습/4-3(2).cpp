#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	int index = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, str, '\n');

	while (true) {
		index = str.find('a', index+1); //str�� �ε��� �������� �˻�
		if (index == -1) break;
		else cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}