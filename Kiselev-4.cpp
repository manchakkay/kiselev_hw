#include <iostream>
#include <ctime>

using namespace std;
double random_num;

int main()
{
    srand(time(0));
    double numbers[10][2];

    for (int i = 0; i < 10; i++)
    {
        random_num = ((double)rand() / RAND_MAX) + 0.0;
        random_num = (double)(random_num * 200) - 100;

        numbers[i][0] = random_num;
        numbers[i][1] = random_num - (int)random_num;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (numbers[j][1] > numbers[j + 1][1])
            {
                double b = numbers[j][0];
                double c = numbers[j][1];           
                numbers[j][0] = numbers[j + 1][0];
                numbers[j][1] = numbers[j + 1][1];
                numbers[j + 1][0] = b;  
                numbers[j + 1][1] = c;           
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i][0]  << endl;
    }

    return 0;
}