 //Time complexity: O(n) n denotes height of the call stack 
//Space Complexity : O(1)

class BSTIterator {
public:
      stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
      dfs(root);
    }
    
    int next() {
        TreeNode* node=st.top();
        st.pop();
        //if(node->right!=nullptr)
            dfs(node->right);
        return node->val;
    }
    
    bool hasNext() {
        return (!st.empty());
    }
    void dfs(TreeNode* node)
    {
        while(node!=nullptr)
        {
            st.push(node);
            node=node->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
