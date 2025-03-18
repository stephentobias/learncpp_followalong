#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std::string user_fname{ };
	std::getline(std::cin >> std::ws, user_fname);
	
	std::cout << "Enter your age: ";
	int user_age{ };
	std::cin >> user_age;
	
	std::cout << "Your age + length of name is: " << user_age + std::ssize(user_fname) << '\n';
	
	return 0;
}
