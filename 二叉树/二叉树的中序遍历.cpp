//代码实现：
class Solution 
{
public:
void traversal(TreeNode* cur, vector<int>& vec) 
    {
        if (cur == NULL) return;
        traversal(cur->left, vec);  // 左
        vec.push_back(cur->val);    // 根
        traversal(cur->right, vec); // 右
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> result;
        traversal(root,result);
        return result;
    }
};
