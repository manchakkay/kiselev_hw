#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

typedef struct WORD
{
    char content;
    int freq = 1;
} w;

int main()
{
    ifstream words("lorem.txt");
    char temp;

    vector<w> dictionary;

    while (!words.eof())
    {
        bool found = false;

        words >> temp;
        for (int i = 0; i < (int)dictionary.size(); i++)
        {
            if (temp == dictionary[i].content)
            {
                dictionary[i].freq++;
                found = true;
            }
        }

        if (!found)
        {
            w temp_o;
            temp_o.content = temp;
            temp_o.freq = 1;

            dictionary.push_back(temp_o);
        }
    }

    int max_freq = 0;
    char max_content = '0';
    for (int i = 0; i < (int)dictionary.size(); i++)
    {
        if (dictionary[i].freq > max_freq)
        {
            max_content = dictionary[i].content;
            max_freq = dictionary[i].freq;
        }
    }

    // for (int i = 0; i < (int)dictionary.size(); i++)
    // {
    //     cout << dictionary[i].content << " " << dictionary[i].freq << endl;
    // }

    cout << max_content << " - " << max_freq;

    return 0;
}