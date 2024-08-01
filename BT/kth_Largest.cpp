   
    vector<int>l(Node *root,vector<int>&v){
        if(root==NULL) return {};
        
        l(root->left,v);
        v.push_back(root->data);
        l(root->right,v);
        return v;
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int>v;
        v=l(root,v);
        sort(v.begin(),v.end(),greater<int>());
        return v[K-1];
        
    }