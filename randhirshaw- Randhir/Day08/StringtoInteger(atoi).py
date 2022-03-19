class Solution(object):
    def myAtoi(self, s):
        s = s.lstrip()
        if len(s) == 0:
            return 0
        start = 0  
        sign_multiplier = 1
        if s[0] == '-': 
            sign_multiplier = -1
            start = 1
        elif s[0] == '+': 
            start = 1
        result = 0
        index = start
        while index < len(s):
            if not('0' <= s[index] <= '9'):
                return result * sign_multiplier
            result = result * 10 + ord(s[index]) - ord('0')
            min_int_32 = 2 ** 31
            if result * sign_multiplier <= -min_int_32:
                return -min_int_32
            elif result * sign_multiplier >= min_int_32-1:
                return min_int_32-1
            index+=1
        return result * sign_multiplier
