class Solution {
  bool isIsomorphic(String s, String t) {
    if (s.length != t.length) {
      return false;
    }

    Map<String, String> map1 = {};
    Map<String, String> map2 = {};

    for (int i = 0; i < s.length; i++) {
      if (!map1.containsKey(s[i]) && !map2.containsKey(t[i])) {
        map1[s[i]] = t[i];
        map2[t[i]] = s[i];
      } else {
        if (map1[s[i]] != t[i]) {
          return false;
        }
      }
    }
    return true;
  }
}
