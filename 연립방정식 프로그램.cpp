#include <iostream>
using namespace std;
void main() {
    float a, b, c, d, e, f, x, y;  // 4+4 = 8bytes

    cout << " a " << endl;
    cin >> a;  // console in
    cout << " b " << endl;
    cin >> b;  // console in
    cout << " c d e f" << endl;
    cin >> c >> d >> e >> f;  // console in
    cout << a << " " << b << " " << c << " " << d << endl;
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    cout << " x = " << x << " y = " << y << endl;
}