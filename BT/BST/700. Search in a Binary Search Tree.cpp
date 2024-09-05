
    TreeNode* searchBST(TreeNode* root, int vaal) {
       if(root==NULL) return NULL;
       TreeNode* node=root;
       while(node!=NULL && node->val!=vaal){
        if(vaal>node->val){
            node=node->right;
        }
        else{
            node=node->left;
        }
       }
       return node;
    }