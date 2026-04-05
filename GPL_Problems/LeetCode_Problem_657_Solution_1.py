class Solution:
    def judgeCircle(self, moves: str) -> bool:
        l = 0
        r = 0
        u = 0
        d = 0

        for c in moves:
            if c == 'L':
                l += 1
            elif c == 'R':
                r += 1
            elif c == 'U':
                u += 1
            else:
                d += 1

        if l == r and u == d:
            return True
        else:
            return False