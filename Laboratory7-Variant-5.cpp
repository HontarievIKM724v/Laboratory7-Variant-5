#include <iostream>
#include < Windows.h >
#include <cmath>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "������ ������� ����������� ����� ������ ������� ����� \n ����� ������� �������: ";
	long long lowerLimit, upperLimit;
	cin >> lowerLimit;
	cout << "\n ������ ������� �������: ";
	cin >> upperLimit;
	cout << endl;
	unsigned long long n = lowerLimit;
	if (lowerLimit <= 0 || upperLimit <= 0) {
		cout << "������� ������������ �������";
		return 0;
	}
	if (lowerLimit > upperLimit) {
		lowerLimit = upperLimit;
		upperLimit = n;
	}
	if (lowerLimit == 1) {
		lowerLimit++;
		n = lowerLimit;
	}
	bool x;
	for (; n <= upperLimit; n++) {
		x = 0;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				x = 1;
				break;
			}
		}
		if (x == 0) cout << n << " ";
	}
}
