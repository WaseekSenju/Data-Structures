
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int j = height.size()-1;
        int i = 0;
        while(i<j){
            int tempArea = 0; 
            if(height[i]>height[j]){
                tempArea = height[j] * (j-i);
                j--;
            }  
            else{
                tempArea = height[i] * (j-i);
                i++;
            }

            if( tempArea > maxArea){
                maxArea = tempArea;
            } 
        }

        return maxArea;

    }
};