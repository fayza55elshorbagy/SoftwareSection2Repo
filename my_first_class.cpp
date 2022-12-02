
#include <iostream>
using namespace std;
class triangle {
private:
	float base;
	float height;
public:
	triangle() {
		cout << "P constructor\n";
		base = 0;
		height = 0;
	}
	triangle (float a, float b) {
		 a = base;
		 b = height;
	}
	void setBase_Height(float b, float h) {
		base = b;
		height = h;

	}
	float area() {
		return 0.5 * base * height;
	}
	void print() {
		cout << "base=" << base << endl << "height=" << height << endl << "area=" << area() << endl;
	}
		
};
int main() {

	triangle ob;
	//ob.setBase_Height(5.5, 10.6);
	ob.print();
	
}