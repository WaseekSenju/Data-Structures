// int max(int a , int b ){
//     if ( a > b ){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i = 0;
//         int j = 0;
//         int answer = 0;
//         unordered_map<char,int> map;
//         while(j<s.length()){
//             if(map.find(s[j]) == map.end()){
//                 map[s[j]] = j+1;
//                 j++;
//                 answer =max (answer,map.size());
//             }
//             else{
//                 map.erase(s[i]);
//                 i++; // I didn't think of it.
//             }
//         }
//         return answer;
//     }
// };

