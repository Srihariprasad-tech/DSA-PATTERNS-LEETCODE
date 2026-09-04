class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        // step 1 is to count the freq;
        for(int n:nums)
        {
         freq[n]++;
        }
        // step 2 is to push the even elemen with the freq//
        vector<pair<int,int>>arr;
        for(auto x:freq)
        {
            if(x.first%2==0)
            {
                arr.push_back({x.first,x.second});
            }
        }
       // step 3 sort the array in descending order//
       sort(arr.begin(),arr.end(),[](auto &a ,auto &b)
       {
        if(a.second!=b.second)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
       });
       // step 4 is to return the elemnet//
       if(arr.empty())
       {
        return -1;
       }
       return arr[0].first;
    
    }
};
