#include "Kiselev-8-class.h"
#include <ostream>

bool &Byte::operator[](int pos)
{
    return memory[pos];
}

bool &Byte::at(int pos)
{
    return memory[pos];
}

Byte::Byte()
{
    for (int i = 0; i < 8; i++)
    {
        memory[i] = 0;
    }
}

Byte::Byte(bool *in)
{
    try
    {
        for (int i = 0; i < 8; i++)
        {
            memory[i] = in[i];
        }
    }
    catch (...)
    {
        std::cerr << "Class Byte - Memory access problem!";
    }
}

Byte Byte::bool_and(const Byte &a, const Byte &b)
{
    Byte temp;

    for (int i = 0; i < 8; i++)
    {
        temp.memory[i] = a.memory[i] && b.memory[i];
    }

    return temp;
}

Byte Byte::bool_or(const Byte &a, const Byte &b)
{
    Byte temp;

    for (int i = 0; i < 8; i++)
    {
        temp.memory[i] = a.memory[i] | b.memory[i];
    }

    return temp;
}

Byte Byte::bool_not(const Byte &a)
{
    Byte temp;

    for (int i = 0; i < 8; i++)
    {
        temp.memory[i] = !a.memory[i];
    }

    return temp;
}

int Byte::to_int() const
{
    int temp = 0;

    for (int i = 0; i < 8; i++)
    {
        temp += memory[i];
        if (i != 7)
            temp <<= 1;
    }

    return temp;
}

Byte Byte::operator+(const Byte &second)
{
    try
    {
        Byte temp;
        int temp_num = to_int() + second.to_int();

        if (temp_num > 255 || temp_num < 0) {
            throw 1;
        }

        for (int i = 7; i > 0; i--){
            temp.memory[i] = temp_num % 2;
            temp_num /= 2;
        }

        return temp;
    }
    catch (...)
    {
        std::cerr << "Class Byte - Result is too big!";
        return NULL;
    }
    
}

Byte Byte::operator-(const Byte &second)
{
    try
    {
        Byte temp;
        int temp_num = to_int() - second.to_int();

        if (temp_num > 255 || temp_num < 0) {
            throw 1;
        }

        for (int i = 7; i > 0; i--){
            temp.memory[i] = temp_num % 2;
            temp_num /= 2;
        }

        return temp;
    }
    catch (...)
    {
        std::cerr << "Class Byte - Result is too big!";
        return NULL;
    }
    
}