#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view sv { "Alex" };
    std::cout << sv << '\n'; // prints Alex

    sv = "John"; // sv is now viewing "John" (does not change name)
    std::cout << sv << '\n'; // prints John

    return 0;
}
