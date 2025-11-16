#include<iostream>
using namespace std;


void modifyString(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

int main()
{
    char myString[] = "hello World";
    modifyString(myString);
    cout << myString;
    return 0;
}
