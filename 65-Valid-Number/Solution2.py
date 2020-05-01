#
# Created on Thu Apr 30 2020
#
# Title: Leetcode - Valid Number
#
# Author: Harsh Patel
# Web: harshpatel44.github.io
#

def solution():
    import re
    class Solution:
        def isNumber(self, s: str) -> bool:
            try:
                return bool(re.match("((?=\s*[-+]?[0-9]+\.?)(\s*[+-]?[0-9]+\.?[0-9]*)(e[-+]?[0-9]+)?\s*|\s?[+-]?\.[0-9]+" \
                                     "(e[-+]?[0-9]+)?\s*)",s).group()==s)
            except: return False

