// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that 
// i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.




vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> v;
       //sort the given array first
       sort(nums.begin(),nums.end());
       //three pointers have been used i,j,k


       for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }  
            }
       }
       return v; 
    }
