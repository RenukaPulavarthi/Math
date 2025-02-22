# https://leetcode.com/problems/complex-number-multiplication/?envType=problem-list-v2&envId=math

class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        lst1=num1.split('+')
        lst2=num2.split('+')
        lst1[-1]=lst1[-1][:-1]
        lst2[-1]=lst2[-1][:-1]
        lst1=[int(i) for i in lst1]
        lst2=[int(i) for i in lst2]
        # print(lst1,lst2)
        real=lst1[0]*lst2[0]-lst1[1]*lst2[1]
        img=lst1[0]*lst2[1]+lst1[1]*lst2[0]
        return str(real)+"+"+str(img)+"i"
