#include <iostream>

std::string get_name(int num);
int get_age(std::string_view person);
std::string_view compare_age(int age1, int age2);
void printOlder(std::string_view person_1, int age_1, std::string_view person_2, int age_2);

int main()
{
	
	// get person 1
	std::string person1{ get_name(1) };
	int age1{ get_age(person1) };
	
	// get person 2
	std::string person2{ get_name(2) };
	int age2{ get_age(person2) };
	
	// compare age
	printOlder(person1, age1, person2, age2);
	
	return 0;
}

std::string get_name(int num)
{
	std::cout << "Enter the name of person #" << num << ": " ;
	std::string person{ };
	std::getline(std::cin >> std::ws, person);
	return person;
}

int get_age(std::string_view person)
{
	// *age
	std::cout << "Enter the age of " << person << ": ";
	int age{ };
	std::cin >> age;
	return age;
}

// checks who is older
std::string_view compare_age(int age1, int age2)
{
	if (age1 > age2) 
		return "older";
	else if (age1 < age2)
		return "younger";
	return "same";
}

void printOlder(std::string_view person_1, int age_1, std::string_view person_2, int age_2)
{
	std::string_view is1older{ compare_age(age_1,age_2) };
	if (is1older == "older")
		std::cout << person_1 << " (age " << age_1 << ") is older than " << person_2 << " (age " << age_2 << ").\n";
	else if (is1older == "younger")
		std::cout << person_2 << " (age " << age_2 << ") is older than " << person_1 << " (age " << age_1 << ").\n";
	else
		std::cout << "Both persons are the same age.\n";
}
