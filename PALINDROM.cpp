#include<bits/stdc++.h>
using namespace std;
bool is_palindrom(string s){
  int i=0;
   int n=s.length()-1;
  while(i<n)
  {
    if(s[i]!=s[n])
    {
      return false;
    }
    i++;
    n--;
  }
  return true;
  
}
int main()
{
  string str;
  cin>>str;
  cout<<is_palindrom(str)<<endl;
}
