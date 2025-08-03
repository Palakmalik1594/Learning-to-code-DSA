#User function Template for python3


class Solution:
    def factorial (self, n):
        fac=1
        for i in range(2,n+1):
            fac*=i
        return fac