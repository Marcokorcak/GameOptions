#include <iostream>
#include <iomanip>

using namespace std;

void shiftNums(int&, int&, int&, int&); // function prototype

int main()
{
	int x;
	int y;
	int z;
	int w;
	cin >> x >> y >> z >> w;
	shiftNums(x, y, z, w);

	return 0;
}

void shiftNums(int &a, int &b, int &c, int &d)
{
	int temp;
	temp = a;
	a = d;
	d = c;
	c = b;
	b = temp;
	cout << a  << " " << b  << " " << c  << " " << d;
}


/*
My Output:
---------------------------------------------------------------------


6 7 9 11
11 6 7 9

*/