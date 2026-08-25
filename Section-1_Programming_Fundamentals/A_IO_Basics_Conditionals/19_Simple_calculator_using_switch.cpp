#include<iostream>
using namespace std;

int simple_calculator(int a,char op, int b)
{
    int result = 0;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b==0)
        {
            return -1;
        }
        float r = a / b;
        return float;
        break;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add_two_number(a,b);
}