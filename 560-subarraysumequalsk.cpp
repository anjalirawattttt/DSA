// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int prefix=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int remove =prefix-k;
            count+=m[remove];
            m[prefix]+=1;

        }  
        return count;
    }
