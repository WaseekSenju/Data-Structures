//Given an integer array nums and an integer k, 
//return the k most frequent elements. You may return the answer in any order.


//  Input: nums = [1,1,1,2,2,3], k = 2
//  Output: [1,2]


//Numan's Solution (Sorting the frequencies in the unodered map)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> umap; 
        //pushing in unordered_map and count occurences...
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        //logic for finding kth largest and removing it from the hashmap..
        {
            5:2,
            8:8,
            9:1,
        }
        
        for(int i=0;i<k;i++){
        int maxi = INT_MIN;
        int key=0;
        for(auto x:umap){
            if(x.second>maxi){
                key=x.first;
                maxi=x.second;
            }
        }
        //remove maximum and decrease count....
        ans.push_back(key);//push the key not count in array...
        umap[key]=0;//setting key value to 0 after pushing it in array...
        }
        return ans;
    }
};
//--------------Using Bucket Sort