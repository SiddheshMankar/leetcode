class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        strr=[]
        i=0
        n1=len(word1)
        n2=len(word2)
        while(i<n1 or i<n2):
            if i<len(word1):
                  strr.append(word1[i])

            if i<len(word2):
                    strr.append(word2[i])
            
            i+=1
        return ''.join(strr)
        

