#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) //0���� ���ڿ��� ���̱���
	{
		if (str[i] == 'a') cnt++; //a�� ���ö����� ���� ����
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}