#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int freq[26]={0};
        for(int i=0;i<p.length();i++)
            freq[p[i]-'a']++;
        int left=0;
        int count=p.length();
        for(int right=0;right<s.length();right++){
            if(freq[s[right]-'a']>0){
                count--;       
            }
            freq[s[right]-'a']--;
            if(count==0){
                ans.push_back(left);
            }
            if(right-left+1==p.length()){
                if(freq[s[left]-'a']>=0)
                    count++;

                freq[s[left]-'a']++;
                left++;
            }
        }
        return ans;
    }
};