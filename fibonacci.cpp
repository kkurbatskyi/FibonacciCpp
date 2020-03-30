#include <iostream>

//n - number of a fibonacci sequence
long fibonacci(int n)
{
	if(n <= 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num; //argument to pass in a fibonacci function
	std::cin >> num;	
	std::cout << fibonacci(num) << std::endl;
	system("pause");
}
