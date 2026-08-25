#include<iostream>
#include<math.h>

using namespace std;

void root_of_qudratic_eq(int a, int b, int c, float &root1, float &root2)
{
    float discriminant = b*b - 4*a*c;
    if (discriminant == 0)
    {
        root1 = (-1*(float)b)/(2.0*a);
        root2 = (-1*(float)b)/(2.0*a);
    }
    else if (discriminant > 0)
    {
        root1 = (-1*(float)b + sqrt(discriminant))/(2.0*a);
        root2 = (-1*(float)b - sqrt(discriminant))/(2.0*a);
    }
    else
    {
        root1 = -1;
        root2 = -1;
    }
}

int main()
{
    int a,b,c;
    float root1=0, root2=0;
    cin>>a>>b>>c;
    root_of_qudratic_eq(a,b,c, root1, root2);
}