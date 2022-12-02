#Question 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



# Solution
This can be solved easily in O(N^2) but the simple solution is to keep track of each number in the arry
and it's index 

i.e  {array[i] , i } and simply check each number and minus it with that target 
then we know exactly how much we want to make tha target 
i.e 
array = [2,7,11,15]
target = 9 
first index's value = 2             
current index's value = 7            {2,0} 

here we exactly know from the map that 9-7 = 2 and that value 2 does exist in our map so we return the arary with indices of current value and the one from the map

