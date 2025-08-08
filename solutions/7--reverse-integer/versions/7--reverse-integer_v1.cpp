// LeetCode Problem: 7. Reverse Integer
// Difficulty: Medium
// Pushed on: 2025-08-08

class Solution {
public:
    int reverse(int x) {
        
    long long result = 0;  
      
     while( x != 0)
        {
            int d = x % 10 ;
            result = result * 10 + d;