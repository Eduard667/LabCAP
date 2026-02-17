//#include <iostream>
//using namespace std;
//
//int mymax(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main(int, char**) {
//
//	int a = 10;
//	int b = 20;
//
//	int max = mymax(a, b);
//
//	cout << "a = " << a << ", b = " << b << endl;
//	cout << "max = " << max << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int mymax(int a, int b) {
    return (a > b) ? a : b;
}

// New function with 3 different parameter types
void showValues(int x, double y, char z) {
    cout << "x (int)    = " << x << endl;
    cout << "y (double) = " << y << endl;
    cout << "z (char)   = " << z << endl;
}

int main() {
    int a = 10;
    int b = 20;

     int max = mymax(a, b);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "max = " << max << endl;

    // Call new function
    showValues(42, 3.14, 'A');

    return 0;
}


