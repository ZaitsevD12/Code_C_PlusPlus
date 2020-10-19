#include <iostream>
#include <cmath>
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << (a/c)*(b/d)-((a*b-c)/(c*d));
	return 0;
}