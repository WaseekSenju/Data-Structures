// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
    
//     //for finding the the smallest string in the vector
//     int min = strs[0].length();
//     int count = 0;
//     string smallest_string = strs[0]; 
//     for(int i=1 ; i<strs.size();i++){
//         if(strs[i].length()<min){
//             min = strs[i].length();
//             smallest_string = strs[i];
//         }
//     }
//      for(int i =0 ; i <min;i++){
//      for(int j = 0 ;j< strs.size();j++){
//          if(strs[j][i] != smallest_string[i]){
//               return smallest_string.substr(0,count);
//          }
//      }
//      count++;
//      }
     
//      return smallest_string.substr(0,count);
//     }
// };