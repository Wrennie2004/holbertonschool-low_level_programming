void reverse_array(int *a, int n)
{
	int temp;
	int count;

	while (count < (n / 2))
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
		count = count + 1;
	}
}
