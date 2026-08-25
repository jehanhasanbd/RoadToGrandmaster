#include<iostream>
#include<vector>
using namespace std;

vector<bool> print_all_prime(int lower, int upper)
{
    if (lower<=2)
    {
        lower = 2;
    }
    vector<bool> is_prime(upper, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i*i <= upper; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i*i; j <= upper; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;

}


int main()
{
    int n,m;
    cin>>n>>m;
    vector<bool> ans = print_all_prime(n,m);
    for (int i = n; i <= m; ++i)
    {
        cout<<i<<"-->"<<ans[i]<<endl;
    }
}