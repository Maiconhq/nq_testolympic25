#include <bits/stdc++.h>
using namespace std;

void init() 
{
	freopen("bai3.inp", "r", stdin); freopen("bai3.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

bool checkprime(long long x) 
{
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    long long y = sqrt(x);
    for (int i = 5; i <= y; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}
const int MAXN = 1005;  
long long a[MAXN][MAXN];
long long n, m;
void nhap()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) cin >> a[i][j];
        
    }
}

long long sum = 0;
void giai() 
{
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (checkprime(a[i][j]))    sum += a[i][j];
    
        }
    }
    cout<<sum<<'\n';
}

int main()
{
    init();
    nhap();
    giai();
    return 0;
}
