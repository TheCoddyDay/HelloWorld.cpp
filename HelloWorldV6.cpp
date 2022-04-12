#include <bits/stdc++.h>
#include <windows.h>

int main()
{
    int counter = 1;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while (true)
    {
        for (char a : "Hello, World!")
        {
            if (counter == 16)
                counter = 0;
            SetConsoleTextAttribute(hConsole, counter);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            std::cout << a;
            counter++;
        }
        std::cout << std::endl;
    }
    return 0;
}
