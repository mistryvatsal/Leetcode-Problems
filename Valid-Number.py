
def solution_1():
    import re
    class Solution:
        def isNumber(self, s: str) -> bool:
            try:
                return bool(re.match("((?=\s*[-+]?[0-9]+\.?)(\s*[+-]?[0-9]+\.?[0-9]*)(e[-+]?[0-9]+)?\s*|\s?[+-]?\.[0-9]+" \
                                     "(e[-+]?[0-9]+)?\s*)",s).group()==s)
            except: return False

