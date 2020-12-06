#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
T half(T num)
{

	return (num / 2);
}
int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << '\n';
	cout << half(b) << '\n';

}
