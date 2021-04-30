#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void sumVector()
{
	vector<float> v = { 2.2,2.3,2.4,2.5,2.6 };

	cout << accumulate(v.begin(), v.end(), 0.0);
}
int main() {
	sumVector();
}