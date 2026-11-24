class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
             long long prod=1;
                long long l=nums[i];
                long long g=nums[i];
            for(int j=i;j<nums.size();j++){
                prod*=nums[j];
                l=lcm(l,(long long)nums[j]);
                g=gcd(g,(long long)nums[j]);
                if(prod==l*g){
                    maxlen=max(maxlen,j-i+1);
                }
                if (prod > 1e15) {
                    break;
                }
            }
        }
        return maxlen;
    }
};