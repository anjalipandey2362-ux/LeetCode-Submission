class Solution {
public:

    void solve(TreeNode* root, queue<int>& q) {

        if(root == NULL)
            return;

        q.push(root->val);

        solve(root->left, q);

        solve(root->right, q);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        queue<int> q;
        vector<int> ans;

        solve(root, q);

        while(!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }

        return ans;
    }
};