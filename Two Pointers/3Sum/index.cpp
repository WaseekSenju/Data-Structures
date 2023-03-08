//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
//such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets.

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {\
        //nums =  [-1,0,1,2,-1,-4]
        int size = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());//nlogn

        // nums = [-4,-1,-1,0,1,2]
        
        for(int i = 0 ; i < size;i++){ //O(n)
            
            if(nums[0]>0) break; 
            // if array only has postive numbers
            if(i > 0 && nums[i-1] == nums[i]) continue;  
            // if it's not first index and current value is same as previous
            // this expression will evaluate to false for first index loop will run
            
            // [-4,-1,-1,0,1,2]
            int left = i+1; 
            int right = size-1;

            while(left<right){
                int threeSum = nums[i] + nums[left] + nums[right];
                if(threeSum>0){
                    right--;
                }
                else if( threeSum<0){
                    left++;
                }
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);

                    temp.push_back({nums[i],nums[left],nums[right]});

                    temp
                    ans.push_back(temp);
                left++;
                while(nums[left] == nums[left-1] && left < right){
                    left++;
                }
                }

            }



        }
        return ans;
    }
};