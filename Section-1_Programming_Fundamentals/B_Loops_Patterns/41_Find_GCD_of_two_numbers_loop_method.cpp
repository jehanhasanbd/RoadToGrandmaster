    #include <cmath>
    #include<iostream>
    using namespace std;

    int GCD(int a,int b)
    {
        for (int i = min(a,b); i>=2 ; --i)
        {
            if (a%i==0 && b%i==0)
            {
                return i;
            }
        }
        return 1;
    }
    int GCD_euclid_opt(int a,int b)
    {
        while (b!=0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }


    int main()
    {
        int a,b;
        cin>>a>>b;
        cout<<GCD(a,b)<<endl;
        cout<<GCD_euclid_opt(a,b)<<endl;
    }