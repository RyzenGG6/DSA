/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{

public:
    vector<TreeNode *> findPath(TreeNode *root, TreeNode *p, std::vector<TreeNode *> &path)
    {
        if (!root)
            return {};

        path.push_back(root);

        // If the current node is the target node, return the path
        if (root == p)
            return path;

        // Recursively search in the left and right subtrees
        std::vector<TreeNode *> leftPath = findPath(root->left, p, path);
        if (!leftPath.empty())
            return leftPath;

        std::vector<TreeNode *> rightPath = findPath(root->right, p, path);
        if (!rightPath.empty())
            return rightPath;

        // If not found in either subtree, remove the current node from the path
        path.pop_back();
        return {};
    }
    int getHeight(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left, right) + 1;
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        int h = getHeight(root);
        vector<TreeNode *> pv(h), qv(h);
        pv = findPath(root, p, pv);
        qv = findPath(root, q, qv);
        // for(TreeNode* i:pv){
        //     cout<<i->val<<endl;
        // }
        int j = 0;
        TreeNode *t;
        int minSize = min(pv.size(), qv.size());
        for (int i = 0; i < minSize; i++)
        {
            if (pv[i] == qv[j])
            {
                t = pv[i];
                j++;
            }
            else
            {
                break;
            }
        }
        return t;
    }
};