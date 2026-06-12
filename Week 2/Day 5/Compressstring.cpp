#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        while(i<chars.size()){
            char curr=chars[i];
            int count=0;
            while(i<chars.size() && chars[i]==curr){
                count++;
                i++;
            }
            chars[j++]=curr;
            if(count>1){
                string num="";
                while(count>0){
                    char digit=(count%10)+'0';
                    num=digit+num;
                    count/=10;
                }
                for(int k=0;k<num.length();k++){
                    chars[j++]=num[k];
                }
            }
        }
        return j;
    }
};