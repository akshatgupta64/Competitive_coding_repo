class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int l = 1;
        int r = maxi;
        int ans = 1;
        while(l <= r){
            int mid = (l+r)/2;
            int sum = 0;
            for(int i = 0; i<n; i++){
                int div = nums[i] / mid;
                if(nums[i] % mid != 0) div++;
                sum += div;
            }
            if(sum > threshold){
                l = mid + 1;
            }else{
                ans = mid;
                r = mid - 1;
            }
        }
        return ans;
    }
};