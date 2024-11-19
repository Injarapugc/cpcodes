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
int riz(tree *root)
{
    if(root==NULL) return 0;
    int l=riz(root->left);
    int r=riz(root->right);
    return 1+l+r;
}
int main()
{


}