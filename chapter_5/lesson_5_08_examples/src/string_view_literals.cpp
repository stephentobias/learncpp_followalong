#include <iostream>
#include <string>      // for std::string
#include <string_view> // for std::string_view

int main()
{
    using std::string_literals::operator""s;      // access the s suffix
    using std::string_view_literals::operator""sv; // access the sv suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
    std::cout << "moo\n"sv; // sv suffix is a std::string_view literal

    return 0;
}
