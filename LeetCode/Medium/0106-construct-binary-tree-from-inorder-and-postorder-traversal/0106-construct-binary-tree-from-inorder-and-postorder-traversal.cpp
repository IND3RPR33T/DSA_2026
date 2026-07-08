class Solution {
public:
    unordered_map<int, int> mp;
    int idx;

    TreeNode* build(vector<int>& postorder, int l, int r) {
        if (l > r) return nullptr;

        TreeNode* root = new TreeNode(postorder[idx--]);
        int mid = mp[root->val];

        root->right = build(postorder, mid + 1, r);
        root->left = build(postorder, l, mid - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        idx = postorder.size() - 1;
        return build(postorder, 0, inorder.size() - 1);
    }
};