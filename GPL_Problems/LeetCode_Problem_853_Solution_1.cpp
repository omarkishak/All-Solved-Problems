class Solution(object):
    def carFleet(self, target, position, speed):
        stack=[]
        for pos,spe in sorted(zip(position,speed),reverse=True):
            time = (target - pos) / float(spe)
            if  not stack or  time>stack[-1]:
                stack.append(time)
        return len(stack)
        