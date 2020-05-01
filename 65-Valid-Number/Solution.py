#
# Created on Fri May 01 2020
#
# Title: Leetcode - Valid Number
#
# Author: Vatsal Mistry
# Web: mistryvatsal.github.io
#

class Solution:
    # Approach 1
    def isNumber(self, s):
        
        # strip whitespaces
        s = s.strip()

        # string is empty case
        if len(s) == 0:
            return False

        # flags to check and maintain relative order
        period_flag = False
        e_flag = False
        number_flag = False
        
        for i in range(len(s)):

            # check if the char is a digit [0, 9], and set number_flag
            if s[i] in [str(x) for x in range(10)]:
                number_flag = True
            
            # if char is + or - it can be only when it is first 
            # character or the predecessor is not e
            elif s[i] in ["+", "-"]:
                if i!=0 and s[i-1] != "e":
                    return False
            
            # if char is e
            elif s[i] == "e":

                # if e exits and no digit exists, this invalids e in start and end position
                if e_flag or not number_flag:
                    return False
                e_flag = True
                number_flag = False

            # if char is period
            elif s[i] == ".":
                # false if already period occurred or e occured
                if e_flag or period_flag:
                    return False
                period_flag = True

            # if other chars are encounterd return false
            else:
                return False

        # return number flag
        return number_flag