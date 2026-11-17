class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int ele=INT_MIN;
        for(int i=0;i<nums.size();i++){
            ele=max(ele,nums[i]);
        }
        for(int j=0;j<nums.size();j++){
            int x=nums[j];
            while(x!=ele){
                moves++;
                x++;
            }
        }
        return moves;
    }
};