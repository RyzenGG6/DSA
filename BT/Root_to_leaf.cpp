void path(Node* root,vector<vector<int>>&ans,vector<int>&v){
      if(root==NULL) return ;
    //   cout<<root->data<<endl;
        v.push_back(root->data);
    if(root->left==NULL && root->right==NULL){
           ans.push_back(v);
         
    } 
 
  
      path(root->left,ans,v);
          path(root->right,ans,v);
    v.pop_back();
  }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>v;
        path(root,ans,v);
              return ans;
  
    }