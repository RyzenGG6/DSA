#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="ABBASDABCBA";
    int ans=0;
    int l=0,r=a.size();
    while(l<a.size()-1){
         if(l==r) {
            l++;
            r=a.size()-1;
        }
        string tmp=a.substr(l,r);
        string s=tmp;
        reverse(tmp.begin(),tmp.end());
        
        if(s==tmp){
            l=r+1;
            r=a.size()-1;
            if(s.size()==4) ans+=4;
            else if(s.size()==5) ans+=5;
        }
        
        else {
            r--;
        }
        // cout<<a[l]<<" "<<a[r]<<endl;
    }
    cout<<ans;
}