#include<iostream>
using namespace std;

string alpha_dig_special(char ch)
{
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        return "char";
    }
    if (ch>='0' && ch<='9')
    {
        return "num";
    }
    return "sp";
}

int main()
{
    char ch;
    cin>>ch;
    cout<<alpha_dig_special(ch);
}