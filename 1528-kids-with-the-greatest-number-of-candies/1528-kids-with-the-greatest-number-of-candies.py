class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        li=[]
        temp=max(candies)
        for i in range(len(candies)):
           
            if candies[i]+extraCandies<temp:
                li.append(False)
            else:
                 li.append(True)
        
        return li


        