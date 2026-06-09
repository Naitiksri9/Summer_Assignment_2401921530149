# Week 2 - Day 2
I solved 2 problems given for Week 2 day 2 dsa homework
## Problems Solved
### 1.Longest Substring with no duplicate characters
Uses a sliding window while increasing characters and simultaneously incrementing the respective frequencies and as soon as the frequency of a character is more than 1 .the window's left is moved until the repeated character is removed.The length is calculated and added to maximum length as answer after each iteration of loop.
Time Complexity: O(n)
Space Complexity: O(1)
### 2.Find All Anagrams in a string
This uses a complex sliding window-The first loop is for frequencies of the p string.The second loop starts with checking if character of s string is in p string if yes then the count which is equal to length of p string is decremented with the char's freq. until the count becomes 0(the answer is pushed in ans vector) after which the left char is removed from window,incremented and a count is restored for rechecking the rest of the string.
Time Complexity: O(m)+O(n)
Space Complexity: O(1)


Submitted by:
Naitik Srivastava
2401921530149