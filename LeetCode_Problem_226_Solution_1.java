class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int column_end = matrix[0].length - 1;
        int L = 0, R = matrix.length - 1;

        while (L <= R) {
            int mid_row = (L + R) / 2;

            //checking if the number is in the row mid_row is pointing at
            if ((target >= matrix[mid_row][0]) &&
                (target <= matrix[mid_row][column_end])) {
                for (int i = 0; i <= column_end; i++) {
                    if (target == matrix[mid_row][i])
                        return true;
                }

                return false;
            }

            //checking if target is bigger or smaller than mid_row
            if (target < matrix[mid_row][column_end]) {
                R = mid_row - 1;
            }

            else if (target > matrix[mid_row][column_end]) {
                L = mid_row + 1;
            }
        }

        return false;
    }
}