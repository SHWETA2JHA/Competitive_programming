class Solution {
public:

    void p(vector<vector<int>>&res,vector<int>& nums, int l, int h ){
        if(l==h){
            res.push_back(nums);
            return;
        }

        for(int i=l;i<=h;i++){
            int temp=nums[i];
            nums[i]=nums[l];
            nums[l]=temp;
            p(res,nums,l+1,h);
            temp=nums[i];
            nums[i]=nums[l];
            nums[l]=temp;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        p(res,nums,0,n-1);
        return res;
    }
};
