#Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

#Solution
Just find the minimum length string from the list in O(N) then compare that string with each string in the list and whenever any number doesn't match of those string just return that string from o to that count number(count starts from 0);