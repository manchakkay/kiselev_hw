#include <iostream>
#include <string.h>
#include <cctype>

int char_analyze(char op)
{
    switch (op)
    {
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'V':
    case 'W':
    case 'X':
    case 'Z':
        return 2;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        return 1;
    default:
        return 0;
    }
}

int main()
{
    int vow = 0, con = 0, res;
    std::string in;

    std::cin >> in;
    for (int i = 0; i < in.length(); i++)
    {
        res = char_analyze(std::toupper(in[i]));
        std::cout << in[i];

        if (res == 1)
        {
            vow++;
        }
        else if (res == 2)
        {
            con++;
        }
    }

    std::cout << "Vowels = " << vow << " Conso = " << con;

    return 0;
}