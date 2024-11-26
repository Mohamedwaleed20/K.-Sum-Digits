#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long n ;
   cin >> n ;
   string a ;
   cin >> a ;
   long long s = 0;
  for(char x : a)
  {
      s = s + x - '0' ;
  }
   cout << s ;
    return 0;
}
