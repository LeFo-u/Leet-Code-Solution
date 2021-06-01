// Solution : 1 ->-> Updating array while traversing.. Time : O(n) Space : O(1)..

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++) nums[i]+=nums[i-1];
        return nums; }
};

// Solution : 2 ->-> Using extra array.. Time : O(n) Space : O(n)..

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int sum=0;
        for(int i=1;i<nums.size();i++) a.push_back(sum+=nums[i]);
        return a; }
};
