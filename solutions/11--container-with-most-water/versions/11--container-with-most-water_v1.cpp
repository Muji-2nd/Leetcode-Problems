// LeetCode Problem: 11. Container With Most Water
// Difficulty: Medium
// Pushed on: 2025-08-11

class Solution {
public:
int maxArea(vector<int>& height) {
int l{}, r = height.size() - 1 , res{};
while(l < r){
int c = (r - l) * min(height[l] , height[r]);
if(height[l] < height[r]) l++;
else r--;
res = max(res,c);
}
return res;
};