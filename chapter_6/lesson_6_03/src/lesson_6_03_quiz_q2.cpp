#include <iostream>


constexpr bool isEven(int number);

int main()
{
	std::cout << "Enter an integer: ";
	int user_int{ };
	std::cin >> user_int;
	
	if (isEven(user_int))
		std::cout << user_int << " is even\n";
	else
		std::cout << user_int << " is odd\n";
	
	return 0;
}

constexpr bool isEven(int number)
{
	return (number % 2 == 0);
}
