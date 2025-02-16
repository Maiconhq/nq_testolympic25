#include<bits/stdc++.h>
using namespace std;

void init()
{
	freopen("bai4.inp", "r", stdin); freopen("bai4.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
const int maxn = 1000;
string x,s="";

void nhap()
{
	getline(cin, x);
}
void giai()
{
    for(int i=0; i<x.size() ; i++)
    {
        if(x[i]==' ') continue;
        
        if(count(s.begin(),s.end(),x[i])==0)
        {
            cout<<x[i]<<" lap "<<count(x.begin(),x.end(),x[i])<<" lan "<<endl;
            s+=x[i];
        }
    }
}
int main()
{
    init();
    nhap();
    giai();
    
    
    
    return 0;
}
