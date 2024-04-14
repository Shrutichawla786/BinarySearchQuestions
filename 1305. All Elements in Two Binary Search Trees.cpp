
1305. All Elements in Two Binary Search Trees.
link-->https://leetcode.com/problems/all-elements-in-two-binary-search-trees/description/
code-->void inorder(TreeNode * root , vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left , v);
        v.push_back(root->val);
        inorder(root->right ,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
         vector<int>v1 ;
       vector<int>v2;
       inorder(root1 , v1);
       inorder(root2 , v2);
       
       int i=0;
       int j=0;
       vector<int>ans;
       while(i<v1.size() && j<v2.size()){
           if(v1[i]==v2[j]){
               ans.push_back(v1[i]);
               ans.push_back(v2[j]);
               i++;
               j++;
           }
           else if(v1[i]<v2[j]){
               ans.push_back(v1[i]);
               i++;
           }
           else{
               ans.push_back(v2[j]);
               j++;
           }
       }
       
       
       while(i<v1.size()){
           ans.push_back(v1[i]);
           i++;
       }
       while(j<v2.size()){
           ans.push_back(v2[j]);
           j++;
       }
       return ans;
        
    }
