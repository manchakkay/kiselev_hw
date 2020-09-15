#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream words("words.txt");
    string word, longest;
    size_t m_length = 0;

    while (!words.eof()){
        words >> word;
        
        if (m_length < word.length()){
            m_length = word.length();
            longest = word;
        }
        
    }

    cout << longest;
    return 0;
}