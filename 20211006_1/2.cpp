#include <iostream>
using namespace std;


class point {
private:
	int x,y;
public:
	void inP(int in_x,int in_y) {
		x = in_x;
		y = in_y;
	}
	void outP(int& out_x, int& out_y) {
		out_x = x;
		out_y = y;
	}
};

int main() {
	point pt;
	int x, y;
	pt.inP(10, 5);
	pt.outP(x, y);
	cout << x << y;
	
}