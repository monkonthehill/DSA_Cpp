class Solution
{
  public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int rows  = matrix.size();
        int colms = matrix[0].size();
        int start = 0;
        int end   = (rows * colms - 1);
        int mid   = start + (end - start) / 2;
        while (start <= end)
        {
            int element = matrix[mid / colms][mid % colms];
            if (element == target)
            {
                return 1;
            }
            else if (element > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return 0;
    }
};
