#include <iostream>
#include <cmath>
int �6()
{
	int x;
	std::cin >> x;
	std::cout << x - (pow(x, 3) / 3) + (pow(x, 5) / 5);
	return 0;
}