// Approach I was using resulted in pairs of every string with other string 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> grouped;

        for(int i = 0 ; i< strs.size();i++){ // pick one string 
            vector<string> singleGroup; 
 
            for(int j = 0 ; j<strs.size();j++){// compare with every other string 
                
                if(strs[j].size() != strs[i].size()) break;
                int answer[26] = {};
                for(int k = 0 ; k<strs[j].size();k++){ 
                // compare characters of both iTH and jTh string  
                answer[strs[i][k]-'a']++;
                answer[strs[j][k]-'a']--;
                }

                bool isAnagram = true;
                for(int n = 0 ; n< 26;n++){
                    if(answer[n] != 0){
                        isAnagram = false;
                        break;
                    }
                }
                if(isAnagram)singleGroup.push_back(strs[j]);
                grouped.push_back(singleGroup);
            }
            
        }
        return grouped;
    }
};

//----------------------------Using Sorting 
// I learnt for each loop, sorting strings, and getting only the values of a map.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map;

        for(auto singleString : strs){
            string newString = singleString;
            sort(newString.begin(),newString.end());
            map[newString].push_back(singleString); 
        }
        for(auto x:map){
           ans.push_back(x.second);
        }
        return ans;

    }
};
//Example with visual representation of the map
strs = ["eat","tea","tan","ate","nat","bat"]
{
    aet : [eat , tea,ate],
    ant : [tan,nat],
    abt : [bat],
}