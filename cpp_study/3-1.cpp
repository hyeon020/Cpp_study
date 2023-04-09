#include <iostream>
using namespace std;

class Tower { //Tower 클래스 생성
	int height;
public:
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int h) {
	height = h;
}

int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "³ôÀÌ´Â " << myTower.getHeight() << "¹ÌÅÍ" << endl;
	cout << "³ôÀÌ´Â " << seoulTower.getHeight() << "¹ÌÅÍ" << endl;
}
