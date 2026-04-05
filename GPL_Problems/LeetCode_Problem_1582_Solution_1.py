class Solution:
    def numSpecial(self, mat):
        result = 0

        r = len(mat)
        c = len(mat[0])

        rows = [0] * r
        columns = [0] * c

        # first, count how many 1s in each row and column O(m * n)
        for i in range(r):
            for j in range(c):

                if mat[i][j] == 1:
                    rows[i] += 1
                    columns[j] += 1

        # loop over them again to judge if it's special position or not 
        # O(m *n), results in complexity O(m * n)
        for i in range(r):
            for j in range(c):

                if mat[i][j] == 1 and rows[i] == 1 and columns[j] == 1:
                    result += 1
                    
                    #save few operations if we find a special position.
                    break

        return result