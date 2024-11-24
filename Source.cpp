#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	bool A = (x <= R && x >= -R && y <= R && y >= -R && (((x + R) * (x + R)) + ((y - R) * (y - R)) >= R * R) && (((x - R) * (x - R)) + ((y + R) * (y + R)) >= R * R));

	if (A) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	system("pause");
	return 0;
}