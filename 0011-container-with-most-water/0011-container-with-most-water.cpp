class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0, rp= height.size() - 1, maxWater=0;
        while(lp<rp){
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            int currWater = w*h;
            maxWater = max(maxWater, currWater);

            height[lp]<height[rp] ? lp++ : rp--;
        } 
        return maxWater;
    }
};