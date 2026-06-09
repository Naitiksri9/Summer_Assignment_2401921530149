#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
  int freq[128]={0};
  int left=0;
  int lengthOfLongestSubstring=0;
  for(int right=0;right<s.length();right++){
    freq[s[right]]++;
   while(freq[s[right]]>1){
       freq[s[left]]--;
       left++;
   }

   lengthOfLongestSubstring=max(lengthOfLongestSubstring,right-left+1);}
   return lengthOfLongestSubstring;}
};
