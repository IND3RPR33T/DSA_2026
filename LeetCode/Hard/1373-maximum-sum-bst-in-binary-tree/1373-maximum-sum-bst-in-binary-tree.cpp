class Solution {
public:
    struct NodeValue {
        int minNode, maxNode, maxSum;
        NodeValue(int mn, int mx, int sum)
            : minNode(mn), maxNode(mx), maxSum(sum) {}
    };

    int ans = 0;

    NodeValue solve(TreeNode* root) {
        if (!root)
            return NodeValue(INT_MAX, INT_MIN, 0);

        auto left = solve(root->left);
        auto right = solve(root->right);

        if (left.maxNode < root->val && root->val < right.minNode) {
            int currSum = left.maxSum + right.maxSum + root->val;
            ans = max(ans, currSum);

            return NodeValue(
                min(root->val, left.minNode),
                max(root->val, right.maxNode),
                currSum
            );
        }

        return NodeValue(INT_MIN, INT_MAX,
                         max(left.maxSum, right.maxSum));
    }

    int maxSumBST(TreeNode* root) {
        solve(root);
        return ans;
    }
};