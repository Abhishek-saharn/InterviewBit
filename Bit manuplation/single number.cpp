int Solution::singleNumber(const vector<int> &nums) {
      int x=nums[0];
        if(nums.size()==0)return 0;
        for(int i=1;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
}
