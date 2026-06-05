#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                st+=s[i];
            }
            else if (s[i]>='A' && s[i]<='Z'){
                st+=(s[i]+32);
            }
            else if(s[i]>='0' && s[i]<='9'){
                st+=s[i];
            }
        }
        int left=0;
        int right=st.length()-1;
        while(left<right){
            if( st[left]!=st[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};