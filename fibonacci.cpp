//n - number of a fibonacci sequence
long fibonacci(int n)
{
	if(n <= 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
