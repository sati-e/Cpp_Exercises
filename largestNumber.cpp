//check the largest number

#include <iostream>

using namespace std;

int main() {
	
	int x;
	int y;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type a number: ";
	cin >> y;
	
	if (x > y) {
		cout << x << " is largest";
	}
	else {
		cout << y << " is largest";
	}
	
	return 0;
}
