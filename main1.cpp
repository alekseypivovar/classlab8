// REKURSIYA. Proverka schastlivogo chisla

#include <stdio.h>
#include <stdlib.h>
#define MAX_DEPTH 1000
typedef unsigned long long ull;


int iter(ull number, int count)
{
	if (count >= MAX_DEPTH)
		return 0;
	ull newNumber = 0;
	ull mod = 0;
	
	do
	{
		mod = number % 10;
		number /= 10;
		newNumber += mod*mod;
	} while (number > 0);

	if (newNumber == 1)
		return count;
	else
		return iter(newNumber, count + 1);
}



int happyNumber(ull number)
{
	return iter(number,1);
}


int main()
{
	int count;
	for (ull number = 1; number < 1000; ++number)
	{
		
		if (count=happyNumber(number))
			printf("%llu - %d\n", number, count);
	}


	// puts(happyNumber(19) ? "happy" : "sad");


	return 0;
}
