#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) //0부터 문자열의 길이까지
	{
		if (str[i] == 'a') cnt++; //a가 나올때마다 개수 세기
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}