#include<iostream>
using namespace std;

char grade_cal(int marks)
{
    if (marks <= 40)
    {
        return 'F';
    }
    if (marks <= 60)
    {
        return 'C';
    }
    if (marks <= 80)
    {
        return 'B';
    }
    return 'A';
}

int main()
{
    int a;
    cin>>a;
    cout<<grade_cal(a);
}