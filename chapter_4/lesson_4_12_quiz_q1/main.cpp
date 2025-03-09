#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char user_input{ };
    std::cin >> user_input;
    int user_inp_int{ static_cast<int>(user_input) };

    std::cout << "You entered \'" << user_input << "\', which is ASCII code ";
    std::cout << user_inp_int << ".\n";


    return 0;
}
