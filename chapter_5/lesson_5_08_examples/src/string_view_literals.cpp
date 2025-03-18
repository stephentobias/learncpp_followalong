#include <iostream>
#include <string>      // for std::string
#include <string_view> // for std::string_view

int main()
{
    // using namespace std::string_literals;      // access the s suffix
    // using namespace std::string_view_literals; // access the sv suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"std::literals::string_literals::s;  // s suffix is a std::string literal
    std::cout << "moo\n"std::literals::string_view_literals::sv; // sv suffix is a std::string_view literal

    return 0;
}
