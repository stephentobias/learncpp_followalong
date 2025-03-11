#include <iostream>

double calcCurrentHeight(double fall_seconds, double tower_height);
bool isNegative(double height);
void printResult(double fall_seconds, double tower_height);

int main()
{
	// Get height of tower from user	
	double tower_height{ };	
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> tower_height;
	
	// Print the height of the ball at the given seconds
	printResult(0.0, tower_height);
	printResult(1.0, tower_height);
	printResult(2.0, tower_height);
	printResult(3.0, tower_height);
	printResult(4.0, tower_height);
	printResult(5.0, tower_height);
	
	
	return 0;
}

// This function returns the current height of the ball as it falls by first: 
// 1) calculating distance fallen = gravity_constant * x_seconds^2 / 2
// 2) then subtractive the distance fallen from the tower height given by the user.
double calcCurrentHeight(double fall_seconds, double tower_height)
{
	double gravity_constant { 9.8 };
	return tower_height - (gravity_constant * fall_seconds * fall_seconds / 2.0);
}

// This function test if result is negative since a true would mean the 
// ball is underneath the ground
bool isNegative(double height)
{
	return height < 0;
}

// This is the function that performs all the work
// It first calculates the height of the ball at x seconds then checks if
// it is underneath the ground by checking if negative. Then prints the 
// correct message.
// **This may need to be broken up even further since the name is misleading
void printResult(double fall_seconds, double tower_height)
{
	double height { calcCurrentHeight(fall_seconds, tower_height) };
	if (isNegative(height))
		std::cout << "At " << fall_seconds << " seconds, the ball is on the ground.\n";
	else
		std::cout << "At " << fall_seconds << " seconds, the ball is at height: " << height << " meters.\n";
}
