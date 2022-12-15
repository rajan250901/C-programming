#include<bits/stdc++.h>
using namespace std;
string lastLetters(string word)
{
    int i;
    for(i=0;word[i]!='\0';i++);
    char c=word[i-1];
    char t=word[i-2];
    string ch;
    ch+=c;
    ch+=" ";
    ch+=t;
    return ch;
}
int main()
{
    string word;
    int v=0;
    getline(cin,word);
    string str=lastLetters(word);
    cout<<str;
    return 0;
}