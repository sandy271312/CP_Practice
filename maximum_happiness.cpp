 long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),std::greater<int>());
        long long ans = happiness[0];
        for(int i = 1;i<k;i++)
        {
            if(happiness[i]-i>0)
             ans = ans+happiness[i]-i;
            else
             break;
        }
        return ans;
    }