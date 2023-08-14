        vector<int>res;
        // Code here.
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=nums[i-1]){
               res.push_back(nums[i]);
               if(nums[i+1]==nums[i]){
                   res.pop_back();
               }
           }
           
       }
       return res;