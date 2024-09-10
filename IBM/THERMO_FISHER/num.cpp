#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int num(string a){
    int c=0;

    for(char i:a){
 if(isdigit(i)){
c++;
    }
    }
   return c;
}
int main()
{
    cout<<num("h1ej22");
}