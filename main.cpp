#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int n=s.size(),u=0,l=0,d=0,sp=0;
for(char c:s){
if(isupper(c))u++;
else if(islower(c))l++;
else if(isdigit(c))d++;
else sp++;
}
if(n>=8&&u>0&&l>0&&d>0&&sp>0)cout<<"Strong";
else if(n>=6&&((u>0&&l>0)||(d>0&&l>0)))cout<<"Medium";
else cout<<"Weak";
}
