class Solution:
    def searchMatrix(self, matrix, target):
        column_end = len(matrix[0]) - 1
        L = 0
        R = len(matrix) - 1

        while L <= R:
            mid_row = (L + R) // 2

            #checking if the number is in the row mid_row is pointing at
            if ((target >= matrix[mid_row][0]) and
                (target <= matrix[mid_row][column_end])):
                for i in range(column_end + 1):
                    if target == matrix[mid_row][i]:
                        return True

                return False

            #checking if target is bigger or smaller than mid_row
            if target < matrix[mid_row][column_end]:
                R = mid_row - 1

            elif target > matrix[mid_row][column_end]:
                L = mid_row + 1

        return False