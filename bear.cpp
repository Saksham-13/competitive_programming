#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cin >>a>>b ;
 int c = 0;
 while(a<=b)
 {
    a = a*3;
    b = b*2;
    c += 1;
 }
 cout<<c;
return 0;
}