// vector<vector<int>> levelorder(node* root)
// {   
//     vector<vector<int>> ans;
//     if(root==NULL) return ans;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         int size=q.size();
//         vector<int> level;
//         for(int i=0;i<size;i++)
//         {
//             node* node=q.front();
//             q.pop()
//             if(node->left!=NULL) q.push(node->left);
//             if(node->right!=NULL) q.push(node->right);
//             level.push_back(node->val);
//         }
//        ans.push_back(level)
//     }
//     return ans;
   









// }