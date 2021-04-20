/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> ans;
    
    void fun(Node *root)
    {
        if(!root)
            return ;
        
        ans.push_back(root->val);
        
        for(int i=0;i<root->children.size();i++)
            fun(root->children[i]);
    }
public:
    vector<int> preorder(Node* root)
    {
        fun(root);
        return ans;
    }
};