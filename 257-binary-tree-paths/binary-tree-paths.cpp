/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    typedef TreeNode tn;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string> ans;
        for(auto &x: binaryTreePaths(root->left)){
            string vall = to_string(root->val);
            // cout<< vall << " ";
            vall += "->";
            vall += x;
            ans.push_back(vall);
        }
        for(auto &x: binaryTreePaths(root->right)){
            string vall = to_string(root->val);
            // cout<< vall << " ";
            vall += "->";
            vall += x;
            ans.push_back(vall);
        }
        if(!ans.size()) ans.push_back(to_string(root->val));
        return ans;
    }
};