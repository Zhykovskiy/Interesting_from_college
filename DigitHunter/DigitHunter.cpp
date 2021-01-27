#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    setlocale(0, "ukr");

    char* str = new char[100];

    cout << "Введiть рядок: ";
    cin.getline(str, 100);

    char* word = strtok_s(str, " ,.-", &str);

    while (word != NULL)
    {

        for (int j = 0; j < strlen(word); j++)
        {
            if (isdigit(word[j]))
            {
                break;
            }
            if (j == strlen(word) - 1)
            {
                cout << word << " ";
            }

        }
        word = strtok_s(str, " ,.-", &str);
    }

    return 0;
}