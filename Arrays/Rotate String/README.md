# Problem

Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.





abcde 




# Solution

The trick to this was addding the string 'abcde' to itself 'abcdeabcde' now this new string contains all possible left shifts of the s.

s = abcde
g = cdeab

s+s = 'abcdeabcde'

1- bcdea
2- cdeab -> this is our desired substring.
