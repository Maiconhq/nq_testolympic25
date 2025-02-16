#include <bits/stdc++.h>

using namespace std;
void init()
{
	freopen("bai1.inp", "r", stdin); freopen("bai2.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
long long n;
long long sum = 0;
int main()
{
    cin>>n;
    for(long long i = 1;i<=n;i++)
    {
        sum+=i*(i+1);
    }
    cout<<sum;
    
   
    return 0;
}
