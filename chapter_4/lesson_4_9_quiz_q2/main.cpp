#include <iostream>

void isPrime(int x);
void printPrime();
void printNotPrime();

int main()
{
    std::cout << "Enter a number between 0 and 9: ";

    int user_input{ };
    std::cin >> user_input;

    isPrime(user_input);

    return 0;
}


void isPrime(int x)
{
    if (x == 2)
        printPrime();
    else if (x == 5)
        printPrime();
    else if (x == 7)
        printPrime();
    else
        printNotPrime();
}

void printPrime()
{
    std::cout << "This digit is prime";
}

void printNotPrime()
{
    std::cout << "This digit is not prime";
}
