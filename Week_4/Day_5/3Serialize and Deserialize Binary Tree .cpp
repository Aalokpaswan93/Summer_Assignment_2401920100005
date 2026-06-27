#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Codec {
public:
    string serialize(TreeNode* root) {
        if(root==nullptr) return "X";
        
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right); // to_string
    }
    int convertStringtoInt(string& data){
        int pos=data.find(',');
        int value=stoi(data.substr(0, pos));
        data=data.substr(pos+1);
        return value;
    }
    TreeNode* deserializehelper(string& data) { // data is updated, hence by reference
        if(data[0]=='X'){
            if(data.size()>1)
                data=data.substr(2);  // keep removing data 
            return nullptr;
        }
        
        TreeNode* tnode = new TreeNode(convertStringtoInt(data));  // covert data using stoi
        tnode->left=deserializehelper(data);
        tnode->right=deserializehelper(data);
        return tnode;
    }
    TreeNode* deserialize(string data) {
        return deserializehelper(data);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;