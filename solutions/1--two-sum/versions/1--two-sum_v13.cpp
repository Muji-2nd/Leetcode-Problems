// LeetCode Problem: 1. Two Sum
// Difficulty: Easy
// Pushed on: 2025-08-08

Submit










Mujtaba RehmanAccess all features with our Premium subscription!My ListsNotebookSubmissionsProgressPointsTry New FeaturesOrdersMy PlaygroundsSettingsAppearanceAppearanceSystem DefaultLightDarkSign Out
System DefaultLightDark
Premium





















. Two Sum


Easy
Topics

Companies
Hint



Array
Hash Table






Choose a type
Comment
Sort by:Best

Vinay Kumar pat



AlgoEngine



winstonchi



CafogarN4



AlexTheGreat



Xu ZHANG



Ming Yue



shaguv



Mikhail Lachikhin



wlxwolves



.4K



.5K







C++

Auto










class Solution {public:    vector<int> twoSum(vector<int>& nums, int target) {        vector<int>sum;        for(int i=0;i<nums.size();++i)        {             for(int j=0;j<nums.size();++j)        {            if(i!=j&&nums[i]+nums[j]==target)            {                 sum.push_back(i);                    sum.push_back(j);                return sum;            }        }        }        return sum;

class Solution {public:    vector<int> twoSum(vector<int>& nums, int target) {        vector<int>sum;        for(int i=0;i<nums.size();++i)        {             for(int j=0;j<nums.size();++j)        {            if(i!=j&&nums[i]+nums[j]==target)            {                 sum.push_back(i);                    sum.push_back(j);                return sum;            }        }        }        return sum;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sum;
        for(int i=0;i<nums.size();++i)
        {
             for(int j=0;j<nums.size();++j)
        {
            if(i!=j&&nums[i]+nums[j]==target)
            {
                 sum.push_back(i);
                    sum.push_back(j);
                return sum;
            }
        }
        }
        return sum;

Case 1
Case 2
Case 3

[2,7,11,15]
[2,7,11,15]
[3,2,4]
[3,3]
Editorial

Solution

































. 4Sum
. Two Sum III - Data structure design
. Subarray Sum Equals K