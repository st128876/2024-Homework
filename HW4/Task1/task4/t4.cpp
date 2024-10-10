#include <iostream>
#include <algorithm>


int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);

	int massiv[10000] = { 0 };

	int prom = 0;
	int maxx = 0;


	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &prom);
		massiv[i] = prom;
	}

	for (int i = 0; i < n - 2; i++)
	{
		maxx = std::max(massiv[i] + massiv[i + 1] + massiv[i + 2], maxx);
	}

	printf("%d", maxx);

	return EXIT_SUCCESS;
}