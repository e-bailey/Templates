#include <iostream>
#include <cmath>

using namespace std;

//Templated function for double and float types.
template <class T>
T half(T num)
{
	return (num / 2);
}
//Specialized template for int type.
template <>
int half(int num)
{
	double temp;

	//Used to convert int num into floating-point type to be rounded.
	temp = static_cast<double>(num) / 2;
	return round(temp);
};
//Main function; for testing data.
int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << '\n';
	cout << half(b) << '\n';
	cout << half(c) << '\n';

}

