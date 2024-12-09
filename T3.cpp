#include "header.h"
using namespace std;

class Triangle
{
public:
	Triangle(int newa, int newb, int newc);
	~Triangle();
	void getAria();

private:
	int a, b, c;
	double q, s;
};

Triangle::Triangle(int newa, int newb, int newc)
{
	a = newa;
	b = newb;
	c = newc;
	q = (a + b + c) * 0.5;
	s = sqrt(q * (q - a) * (q - b) * (q - c));
}

Triangle::~Triangle()
{
	cout << "Destructor called." << endl;
}
void Triangle::getAria() {
	cout << "The aria of the triangle is: " << s << endl;
}

void T3() {
	int a, b, c;
t3:
	cout << "Input the length of the 3 edges of a triangle:\n>";
	cin >> a >> b >> c;
	if (a + b <= c) {
		cout << "Not a triangle\n";
		goto t3;
	}
	Triangle triangle1(a, b, c);
	triangle1.getAria();
}