#include<bits/stdc++.h>
using namespace std;
struct tree
{
    int d;
    struct tree *right;
    struct tree *left;
    tree(int data)
    {
        d=data;
        right=left=NULL;

    }

    
};
vector<vector<int>> level(tree *root)
{
    vector<vector<int>> ans;
    queue<tree*> r;
    r.push(root);
    while (!r.empty())
    {
        int s=r.size();
        vector<int> level;
        for(int i=0;i<s;i++)
        {
            tree *riz=r.front();
            r.pop();
            if(riz->left!=NULL) r.push(riz->left);
            if(riz->right!=NULL) r.push(riz->right);
            level.push_back(riz->d);
        }
        ans.push_back(level);

        /* code */
    }
    return ans;
}
int m=INT_MIN;
int diameter(tree *root,int &d)
{
    if(root->left==NULL||root->right==NULL) return 0;
    int l=diameter(root->left,d);
    int r=diameter(root->right,d);
    d=max(d,l+r);
    return 1+max(l,r);;
}
int maxsum(tree *root,int &d)
{
    if(root==NULL) return 0;
    int l=max(0,maxsum(root->left,d));
    int r=max(0,maxsum(root->right,d));
    m=max(m,l+r+root->d);
    return root->d+max(l,r);
}
bool isametree(tree *r1,tree *r2)
{
    if(r1==NULL||r2==NULL) return r1==r2;
    bool a=(r1->d==r2->d)&&isametree(r1->left,r2->left);
    bool b=(r1->d==r2->d)&&isametree(r1->right,r2->right);
    return a&b;
}
    

        





