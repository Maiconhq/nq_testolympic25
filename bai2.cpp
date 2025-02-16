
#include <bits/stdc++.h>
using namespace std;

void init()
{
	freopen("bai2.inp", "r", stdin); freopen("bai2.out", "w", stdout);
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int maxn=1e6+5;
int n;
int a[maxn];
int y=0;

int main()
{
    cin>>n;
    for(int i=0;i <n;i++)
    {
        cin>>a[i];
        if(a[i] % 2 == 0)
        {
           y+=a[i];
           
        } 
       
    }
    cout<<y;
   
    return 0;
}
