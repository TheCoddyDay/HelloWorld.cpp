#include <bits/stdc++.h>

int main()
{
    char str[] = "Hello, World!";
    for(char i: str)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        std::cout << i;  
        return 0;
    }
}
