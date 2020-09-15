#include <iostream>

class Byte
{
private:
    bool memory[8];
    int to_int() const;

public:
    //+ at, []
    // <<
    //+ and, or, not
    // +, -
    //+ exception

    Byte(bool *in);
    Byte();

    bool &operator[](int pos);
    bool &at(int pos);

    std::ostream &operator<<(std::ostream &out);

    static Byte bool_and(const Byte &a, const Byte &b);
    static Byte bool_or(const Byte &a, const Byte &b);
    static Byte bool_not(const Byte &a);

    Byte operator+(const Byte &second);
    Byte operator-(const Byte &second);
};