#include "main.h"

int _sqrt_recursion(int n)
{
	return _sqrt_helper(n, 0);
}	


int _sqrt_helper(int n, int i)
{
	if(i * i == n)
	{
		return i;
	}

	if(i * i > n)
	{
		return -1;
	}
	return _sqrt_helper(n, i + 1);
}
