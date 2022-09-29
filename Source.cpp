#include <random>
#include <iostream>
using namespace std;

int main()
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(3000, 300000);

	for (int x = 0; x < 1000; x++)
	{
		std::cout << dist6(rng) << std::endl;
	}

	return 0;
}
