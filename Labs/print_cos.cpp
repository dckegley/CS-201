#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <ios>
#include <iomanip>


using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::setw;
using std::left;
using std::right;

int l20main()
{
    cout << fixed << setprecision(8);
    for (int i = 0; i <= 180; i += 5)
    {
        cout << setw(5) << right << i << " " << setw(15) << right << cos(i * (M_PI / 180)) << endl;
    }
    return 0;
}