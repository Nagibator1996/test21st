#include <iostream>
#include <string>

bool Print(std::string text)
{
    std::cout << text;
    return 0;
}

int main()
{
    Print("Hello");
    Print("Hello my Friends!");
}

