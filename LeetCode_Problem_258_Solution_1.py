class Solution:
    def addDigits(self, num: int) -> int:

        #keep looping as long as num >= 10
        while (num // 10) != 0 :
            temp = str(num)
            num = 0

            #after converting num to string, 
            #loop over every char, change it
            for c in temp :
                num = num + int(c)

        #finally return num
        return num