#include <bits/stdc++.h>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE)
    SetConsoleTextAttribute(hConsole, 5 /* put any number as second arg (note: 0 to 254 (if you try more then its on you))*/)
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
