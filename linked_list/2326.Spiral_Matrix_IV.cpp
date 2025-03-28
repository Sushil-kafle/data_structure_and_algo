/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {

        vector<vector<int>> matrix(m, vector<int>(n, -1));

        int top = 0;
        int left = 0;

        int right = n - 1;
        int bottom = m - 1;

        int value = -1;

        while (top <= bottom && left <= right)
        {

            // left to right
            for (int i = left; i <= right; i++)
            {
                if (!head)
                    return matrix;

                matrix[top][i] = head->val;
                head = head->next;
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
            {
                if (!head)
                    return matrix;

                matrix[i][right] = head->val;
                head = head->next;
            }
            right--;

            // right to left
            if (top <= bottom)
            {

                for (int i = right; i >= left; i--)
                {
                    if (!head)
                        return matrix;

                    matrix[bottom][i] = head->val;
                    head = head->next;
                }
                bottom--;
            }

            // bottom to top
            if (left <= right)
            {

                for (int i = bottom; i >= top; i--)
                {
                    if (!head)
                        return matrix;

                    matrix[i][left] = head->val;
                    head = head->next;
                }

                left++;
            }
        }

        return matrix;
    }
};