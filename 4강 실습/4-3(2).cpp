#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	int index = 0;
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');

	while (true) {
		index = str.find('a', index+1); //str의 인덱스 다음부터 검색
		if (index == -1) break;
		else cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}