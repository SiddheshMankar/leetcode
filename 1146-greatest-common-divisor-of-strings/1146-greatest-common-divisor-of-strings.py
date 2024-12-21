
class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        ans=[]
        def compute_gcd(a, b):
            while b:
                temp_a = b
                temp_b = a % b
                a = temp_a
                b = temp_b

            return a
        n1=len(str1)
        n2=len(str2)
        if str1+str2!=str2+str1:
            return ""
        if len(str1)==len(str2):
            return str1
        
        max_length=compute_gcd(len(str1),len(str2))
        return str1[:max_length]