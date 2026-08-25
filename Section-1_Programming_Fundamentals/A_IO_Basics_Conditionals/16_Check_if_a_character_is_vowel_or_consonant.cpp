#include<iostream>
using namespace std;

int vowel_consonant(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    cin>>ch;
    cout<<vowel_consonant(ch);
}