# Week 2 - Day 3
I solved 2 problems given for Week 2 day 3 dsa homework
## Problems Solved
### 1.Find the index of the first occurence in string
initializing while loop with checking both the ending loop condition and an occurence checking condition-if true then the pointer is shifted to check next char.As soon as second pointer reach length of needle string it means the ans is found and should return index which is the first pointer under a for loop.
### 2.Is subsequence
uses two pointers-one for subsequence and for original string.check for subseq char in original and shift if found otherwise shift to next original char. anyway.if the first pointer iterates whole subseq string -return answer.true if pointer reached equal to length of subseq string,false if pointer is still lesser than length of subseq string and the original string is completely iterated.