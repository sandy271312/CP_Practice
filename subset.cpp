 vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        double sz = nums.size();

        ans.push_back({});

        for(int i=0;i<sz;i++)
        {
            vector<int>tmp;
            double l = ans.size();
            for(int j=0 ;j<l;j++)
            {
                tmp = ans[j];
                tmp.push_back(nums[i]);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
