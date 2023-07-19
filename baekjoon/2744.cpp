#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	getline(cin, a);
	
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			a[i] += 32; //a가 65에서 90이면 대문자이므로 32 더해서 소문자로
		}
		else {
			a[i] -= 32; //반대로 소문자(97이상122이하)에서 대문자는 32 뺌
		}
	}
	cout << a;
}