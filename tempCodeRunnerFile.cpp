#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int v=0;
    cin>>str;
    for(int t=0;str[t]!='\0';t++)
    {
        v++;
    }
    char i=str[v-1];
    char j=str[v-2];
    cout<<i<<" "<<j;
    return 0;
}