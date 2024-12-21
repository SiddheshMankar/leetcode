class Solution(object):
    def swap(self,a, b):
         return b, a

    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
         """
        li = list(s)  # Convert string to list
        n = len(li)
        i = 0
        j = n - 1

        while i < j:
            if li[i].lower() in ('a', 'e', 'i', 'o', 'u') and li[j].lower() in ('a', 'e', 'i', 'o', 'u'):
                li[i], li[j] = self.swap(li[i], li[j])  # Use the swap function
                i += 1
                j -= 1
            elif li[i].lower() not in ('a', 'e', 'i', 'o', 'u'):
                     i += 1
            elif li[j].lower() not in ('a', 'e', 'i', 'o', 'u'):
                     j -= 1

        return ''.join(li)

        