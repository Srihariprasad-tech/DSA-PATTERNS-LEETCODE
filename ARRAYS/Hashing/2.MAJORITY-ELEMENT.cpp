class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
    int ans=n/2;
    unordered_map<int,int>freq;
    for(int n:nums)
    {
        freq[n]++;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[nums[i]]>ans)
        {
            return nums[i];
        }
    }
return -1;

    }
}
