#include <iostream>

double calcCurrentHeight(double fall_seconds, double tower_height);
bool isNegative(double height);
void printResult(double fall_seconds, double tower_height);

int main()
{
	double tower_height{ };
	
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> tower_height;
	
	printResult(0.0, tower_height);
	printResult(1.0, tower_height);
	printResult(2.0, tower_height);
	printResult(3.0, tower_height);
	printResult(4.0, tower_height);
	printResult(5.0, tower_height);
	
	
	return 0;
}

double calcCurrentHeight(double fall_seconds, double tower_height)
{
	double gravity_constant { 9.8 };
	return tower_height - (gravity_constant * fall_seconds * fall_seconds / 2.0);
}

bool isNegative(double height)
{
	return height < 0;
}

void printResult(double fall_seconds, double tower_height)
{
	double height { calcCurrentHeight(fall_seconds, tower_height) };
	if (isNegative(height))
		std::cout << "At " << fall_seconds << " seconds, the ball is on the ground.\n";
	else
		std::cout << "At " << fall_seconds << " seconds, the ball is at height: " << height << " meters.\n";
}
