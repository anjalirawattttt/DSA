vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> V;
        for(int i=0;i<nums.size();i++){
            V.push_back({nums[i],i});
        }
        sort(V.begin(),V.end());
        int left=0;
        int right=nums.size()-1;
        vector<int> resultVec;
        for(int i=0;i<nums.size();i++){
         int sum=V[left].first+V[right].first;
         if(sum==target){
            resultVec.push_back(V[left].second);
            resultVec.push_back(V[right].second);
            break;
         }
         else if(sum>target){
          right--;
         }
         else{
        left++;
         }


        }
     return resultVec;
    }
