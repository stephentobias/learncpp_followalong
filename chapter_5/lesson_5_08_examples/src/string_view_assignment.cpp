// per lesson 5.9 this version of the program should be used with caution.
// below we initialized variable std::string_view 'sv' with a C-style string but if it had been initialized with a std::string it would create undefined behavior since the std::string object would be temporary. the std::string would need to be passed into a std::string variable first before using it to initialize a std::string_view to ensure it is available during the lifetime of the std::string_view. 

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
