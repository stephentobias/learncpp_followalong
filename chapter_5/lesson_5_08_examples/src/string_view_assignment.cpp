/*
 * per lesson 5.9 this version of the program should be used with caution.
 * below we initialized variable std::string_view 'sv' with a C-style string but if it had been initialized with a std::string literal it would create undefined behavior since the std::string literal would be temporary. the std::string would need to be passed into a std::string variable first before using it to initialize a std::string_view to ensure it is available during the lifetime of the std::string_view. 
 * 
 * The lesson provided the following warning to summarize the proper/improper use: 
 * "Warning:
 * Do not initialize a std::string_view with a std::string literal, as this will leave the std::string_view dangling.
 * It is okay to initialize a std::string_view with a C-style string literal or a std::string_view literal. It’s also okay to initialize a std::string_view with a C-style string object, a std::string object, or a std::string_view object, as long as that string object outlives the view."
 */

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
