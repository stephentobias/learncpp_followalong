#include <iostream>

std::string_view compare_age(int age1, int age2);

int main()
{
	
	// get person 1
	// *name
	std::cout << "Enter the name of person #1: " ;
	std::string person1{ };
	std::getline(std::cin >> std::ws, person1);
	// *age
	std::cout << "Enter the age of " << person1 << ": ";
	int age1{ };
	std::cin >> age1;
	
	// get person 2
	// *name
	std::cout << "Enter the name of person #2: ";
	std::string person2{ };
	std::getline(std::cin >> std::ws, person2);
	// *age
	std::cout << "Enter the age of " << person2 << ": ";
	int age2{ };
	std::cin >> age2;
	
	// compare age
	std::string_view is1older{ compare_age(age1,age2) };
	if (is1older == "older")
		std::cout << person1 << " (age " << age1 << ") is older than " << person2 << " (age " << age2 << ").\n";
	else if (is1older == "younger")
		std::cout << person2 << " (age " << age2 << ") is older than " << person1 << " (age " << age1 << ").\n";
	else
		std::cout << "Both persons are the same age.\n";
	
	return 0;
}

std::string_view compare_age(int age1, int age2)
{
	if (age1 > age2) 
		return "older";
	else if (age1 < age2)
		return "younger";
	return "same";
}
