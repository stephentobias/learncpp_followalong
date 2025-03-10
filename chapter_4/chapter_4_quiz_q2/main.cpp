#include <iostream>

void get_op_answer(double x, double y, char z);

int main()
{
    std::cout << "Enter a double value: ";
    double first_input{ };
    std::cin >> first_input;

    std::cout << "Enter a second double value: ";
    double second_input{ };
    std::cin >> second_input;

    std::cout << "Enter +, -, *, or /: ";
    char op_input{ };
    std::cin >> op_input;

    get_op_answer(first_input,second_input,op_input);

    return 0;
}

void get_op_answer(double x, double y, char z)
{
    if (z == '+')
        std::cout << x << " " << z << " " << y << " is " << x + y;
    else if (z == '-')
        std::cout << x << " " << z << " " << y << " is " << x - y;
    else if (z == '*')
        std::cout << x << " " << z << " " << y << " is " << x * y;
    else if (z == '/')
        std::cout << x << " " << z << " " << y << " is " << x / y;

}
