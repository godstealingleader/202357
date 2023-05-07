//list 6.1

// if.cpp -- using the if statement
#include <iostream>
int main()
{
    using std::cin; // using declarations
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') // quit at end of sentence
    {
        if (ch == ' ') // check if ch is a space
            ++spaces;
        ++total; // done every time
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;//空格数
    cout << " characters total in sentence\n";//字符总数，包括enter输出的换行符
    return 0;
}