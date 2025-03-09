#include <iostream>

bool isPrime(int x);

int main()
{
    std::cout << "Enter a number between 0 and 9: ";

    int user_input{ };
    std::cin >> user_input;

    if ( isPrime(user_input) )
        std::cout << "This digit is prime\n";
    else
        std::cout << "This digit is not prime\n";

    return 0;
}


bool isPrime(int x)
{
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x == 5)
        return true;
    else if (x == 7)
        return true;

    return false;
}

