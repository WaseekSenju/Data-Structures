// My wrong solution 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        if(nums.size() == 1 ){
            return 1;
        }

        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0 ; i < nums.size();i++){
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = 0;
            }
            int prev = nums[i] -1;
            int next = nums[i] + 1;

            if(map.find(prev) != map.end() && map.find(next) != map.end()){
                if(map[prev] != 1)map[prev]++;
                if(map[next] != 1)map[next]++;
                 map[nums[i]]++;
            }
            else if(map.find(next) != map.end()){
               if(map[next] != 1) map[next]++;
               if(map[i] != 1)  map[nums[i]]++;
            }
            else if (map.find(prev) != map.end()){
              if(map[prev] != 1)  map[prev]++;
              if(map[nums[i]] != 1)  map[nums[i]]++;
            }
        }
    int answer = 0 ;
        for(auto x : map){
            answer = answer + x.second;
        }
        return answer;
    }
};

// Neet Code solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int longest = 0;
        for(auto &n: s){
            //if this is the start of the sequence
            if(!s.count(n - 1)){
                int length = 1; 
                while(s.count(n + length))
                    ++length;
                longest = max(longest, length);
            } 

        }
        return longest;
    }
};