class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        li=s.split()
     
        reverse_li=li[::-1]
        return ' '.join(reverse_li)