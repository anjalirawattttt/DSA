 //     Given an array nums of n integers, return an array of  all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

    // 0 <= a, b, c, d < n
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        //sorting the given array
        sort(nums.begin(),nums.end());
        //maintaining four pointers i,j,k,l
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;

            int k=j+1;
            int l=nums.size()-1;
            while(k<l){
                long long sum=nums[i];
                sum+=+nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    v.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }

            }
            }
        }
        return v;

    }
