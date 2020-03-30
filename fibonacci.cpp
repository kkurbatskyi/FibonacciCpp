long fibonacci(int n)
{
	if(n <= 2) return 1;	//terminal condition
	return fibonacci(n - 1) + fibonacci(n - 2);
}
