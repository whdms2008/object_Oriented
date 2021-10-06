#include <iostream>
#include <vector>
using namespace std;


class point {
private:
	int x;
	int y;
public:
	void setx(int in_x) {
		x = in_x;
	}
	void sety(int in_y) {
		y = in_y;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
};

int main() {
	point pt;
	pt.setx(10);
	pt.sety(5);
	cout << pt.getx() << pt.gety();
	
}