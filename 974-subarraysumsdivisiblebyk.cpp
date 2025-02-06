// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.


int subarraysDivByK(vector<int>& nums, int k) {
     unordered_map<int,int> m;
     m[0]=1;
     int prefixSum=0,count=0;
     for(int i=0;i<nums.size();i++){
        prefixSum=prefixSum+nums[i];
        int mod=prefixSum%k;
        if(mod<0)
        mod+=k;
        count+=m[mod];
        m[mod]+=1;
        
     } 
     return count;  
    }
