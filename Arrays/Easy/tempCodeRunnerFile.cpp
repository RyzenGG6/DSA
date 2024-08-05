  #include<iostream>
  using namespace std;
  int main(){
    cout<<strStr("sadbutsad","sad");
  }
  int strStr(string haystack, string needle) {
        int ind = 0;
        int j = 0, ans = 0;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[j]) {
                ind = i;
                j++;
                // cout<<j-1<<haystack[i]<<endl;
                
                   
            } else {
                if (j== needle.size()){
                    // cout<<"ys"<<i;
                     break;
                }
                j = 0;
                ind = 0;
            }
        }
        if (j == needle.size())
            ans = haystack.size() - j;
        else
            ans = -1;
        return ans;
    }