#include <iostream>
#include <vector>
#include <queue>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* insertLevelOrder(vector<int>& arr, int i, int n) {
    TreeNode* root = nullptr;

    if (i < n && arr[i] != -1) {
        root = new TreeNode(arr[i]);

        root->left = insertLevelOrder(arr, 2 * i + 1, n);

        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == NULL || root == p || root == q) return root;
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);
    if (left != NULL && right != NULL) return root;
    return left != NULL ? left : right;
}


TreeNode* findNode(TreeNode* root, int val) {
    if (root == NULL) return NULL;
    if (root->val == val) return root;
    TreeNode* left = findNode(root->left, val);
    if (left != NULL) return left;
    return findNode(root->right, val);
}

int main() {
    int n;
    cin>>n;
    vector<int> nodes(n);
    for(auto &x:nodes)cin>>x;
    int n1,n2;
    cin>>n1>>n2;
    
    TreeNode* root = insertLevelOrder(nodes, 0, nodes.size());
    TreeNode* node1 = findNode(root, n1);
    TreeNode* node2 = findNode(root, n2);
    
    TreeNode* lca = lowestCommonAncestor(root, node1, node2);
    if (lca != NULL) {
        cout << lca->val << endl;
    } else {
        cout << "LCA not found" << endl;
    }

    return 0;
}
