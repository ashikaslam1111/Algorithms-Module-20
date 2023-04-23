#include<bits/stdc++.h>
using namespace std;
int n;
long long ar[100];
long long fibb(int a);
int main()
{
    cin>>n;
    cout<<fibb(n);
    return 0;
}
long long fibb(int a)
{
    if(a<=2)return 1;
    if(ar[a]!=0) return ar[a];
    ar[a]= fibb(a - 1) +  fibb(a - 2);
    return ar[a];
}
