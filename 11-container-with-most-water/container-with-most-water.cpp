class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int w=0 , v;
        while(l<r){
            v=(min(height[l],height[r]))*(r-l);
            w=max(v,w);
            if(height[l]<height[r]){
                l++;
            }
           else r--;
            
        }
        return w;
    }
};