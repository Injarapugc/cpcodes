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

