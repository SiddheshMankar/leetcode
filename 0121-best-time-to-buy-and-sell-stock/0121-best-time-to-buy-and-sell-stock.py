class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        temp=prices[0]
        profit=0
        for i in range(1,len(prices)):
            if prices[i]<temp:
                temp=prices[i]
            elif prices[i]-temp>profit:
                profit=prices[i]-temp
        return profit


        