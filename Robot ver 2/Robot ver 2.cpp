// Robot ver 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int function(int64_t& x, int64_t& y, const int64_t n, const int64_t m) {
    if ((n <= m) && (m % 2) == 0) {
        x = x + n;
        return 0;
    }
    if ((n <= m) && (m % 2) != 0) {
        x = x - n;
        return 0;
    }
    if ((n > m) && (m % 2) == 0) {
        x = x + m;
        y = y + (n - m);
        return 0;
    }
    if ((n > m) && (m % 2) != 0) {
        x = x - m;
        y = y - (n - m);
        return 0;
    }
}

int main()
{
    int64_t move = 0;
    cin >> move;
    int64_t base = sqrt(move);
    int64_t base_move = pow(base, 2);
    int final_move = move - base_move;
    int64_t x = 0, y = 0;
    if ((base % 2) == 0) {
        x = y = -(base / 2);
    }
    else {
        x = (base / 2);
        y = base / 2 + 1;
    }
	if (final_move != 0) {
		function(x, y, final_move, base);
	}
    cout << x << " " << y;
}

