#include <iostream>
using namespace std;

int output(int x, int y, int z, int g)
{
    int h = x;

    if (y > h) h = y;
    if (z > h) h = z;
    if (g > h) h = g;

    return h;
}

int main()
{
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << output(a, b, c, d);

    return 0;
}