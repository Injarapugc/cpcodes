

// INCREMENTAL QUERIES
// TIME COMPLEXITY:- O(QLOG(N)
// SPACE COMPLEXITY:- O(4*N)

#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

vi arr,even,seg_sum,seg_even,seg_max;

void initialize(ll n)
{
	arr.assign(n,0);
	even.assign(n,0);
	seg_sum.assign(4*n,0);
	seg_even.assign(4*n,0);
	seg_max.assign(4*n,-inf);
}

// segment tree for sum starts here

void build_sum_segment_tree(ll node , ll left , ll right)
{
    if(left==right)
    {
        seg_sum[node] = arr[left];
        return;
    }
    
    // calculate mid
    
    ll mid = (left+right)/2;
    
    build_sum_segment_tree(node*2LL,left,mid);
    build_sum_segment_tree(node*2LL+1LL,mid+1LL,right);
    
    seg_sum[node] = seg_sum[node*2LL] + seg_sum[node*2LL+1LL];
}

ll get_segment_sum(ll node , ll qlow , ll qhigh , ll left , ll right)
{
    if(qlow>qhigh)
    {
        return 0;
    }
    
    if(qlow==left and qhigh==right)
    {
        return seg_sum[node];
    }
    
    ll mid = (left+right)/2;

	ll ans_left = get_segment_sum(node*2LL,qlow,min(qhigh,mid),left,mid);
	ll ans_right = get_segment_sum(node*2LL+1LL,max(mid+1LL,qlow),qhigh,mid+1,right);
    
    return ans_left + ans_right;
}

void update_segment_sum(ll node, ll pos , ll new_value , ll left , ll right)
{
    if(left==right)
    {
        seg_sum[node] = new_value;
        return;
    }
    
    ll mid = (left+right)/2;
    
    if(pos<=mid)
    {
        update_segment_sum(node*2LL,pos,new_value,left,mid);
    }
    else
    {
        update_segment_sum(node*2LL+1LL,pos,new_value,mid+1LL,right);
    }
    
    seg_sum[node] = seg_sum[node*2LL] + seg_sum[node*2LL+1LL];
}

// segment tree for sum ends here

// segment tree for parity = even starts here
void build_even_segment_tree(ll node , ll left , ll right)
{
    if(left==right)
    {
        seg_even[node] = even[left];
        return;
    }
    
    // calculate mid
    
    ll mid = (left+right)/2;
    
    build_even_segment_tree(node*2LL,left,mid);
    build_even_segment_tree(node*2LL+1LL,mid+1LL,right);
    
    seg_even[node] = seg_even[node*2LL] + seg_even[node*2LL+1LL];
}

ll get_segment_even(ll node , ll qlow , ll qhigh , ll left , ll right)
{
    if(qlow>qhigh)
    {
        return 0;
    }
    
    if(qlow==left and qhigh==right)
    {
        return seg_even[node];
    }
    
    ll mid = (left+right)/2;

	ll ans_left = get_segment_even(node*2LL,qlow,min(qhigh,mid),left,mid);
	ll ans_right = get_segment_even(node*2LL+1LL,max(mid+1LL,qlow),qhigh,mid+1,right);
    
    return ans_left + ans_right;
}

void update_segment_even(ll node, ll pos , ll new_value , ll left , ll right)
{
    if(left==right)
    {
        seg_even[node] = new_value;
        return;
    }
    
    ll mid = (left+right)/2;
    
    if(pos<=mid)
    {
        update_segment_even(node*2LL,pos,new_value,left,mid);
    }
    else
    {
        update_segment_even(node*2LL+1LL,pos,new_value,mid+1LL,right);
    }
    
    seg_even[node] = seg_even[node*2LL] + seg_even[node*2LL+1LL];
}

// segment tree for parity = even ends here

// segment tree for maximum starts here

void build_max_segment_tree(ll node , ll left , ll right)
{
    if(left==right)
    {
        seg_max[node] = arr[left];
        return;
    }
    
    // calculate mid
    
    ll mid = (left+right)/2;
    
    build_max_segment_tree(node*2LL,left,mid);
    build_max_segment_tree(node*2LL+1LL,mid+1LL,right);
    
    seg_max[node] = max( seg_max[node*2LL] , seg_max[node*2LL+1LL] );
}

ll get_segment_max(ll node , ll qlow , ll qhigh , ll left , ll right)
{
    if(qlow>qhigh)
    {
        return 0;
    }
    
    if(qlow==left and qhigh==right)
    {
        return seg_max[node];
    }
    
    ll mid = (left+right)/2;

	ll ans_left = get_segment_max(node*2LL,qlow,min(qhigh,mid),left,mid);
	ll ans_right = get_segment_max(node*2LL+1LL,max(mid+1LL,qlow),qhigh,mid+1,right);
    
    return  max( ans_left , ans_right );
}

void update_segment_max(ll node, ll pos , ll new_value , ll left , ll right)
{
    if(left==right)
    {
        seg_max[node] = new_value;
        return;
    }
    
    ll mid = (left+right)/2;
    
    if(pos<=mid)
    {
        update_segment_max(node*2LL,pos,new_value,left,mid);
    }
    else
    {
        update_segment_max(node*2LL+1LL,pos,new_value,mid+1LL,right);
    }
    
    seg_max[node] = max( seg_max[node*2LL] , seg_max[node*2LL+1LL] );
}

// segment tree for maximum ends here

// main function starts here

signed main()
{
    FIO;

	ll n,q;
	cin>>n>>q;

	//initialize segment trees
	initialize(n);
	
	for(ll i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]%2==0)even[i]++;
	}
	
	// build the sum segment tree
	// build(root vertext,left,right)
	build_sum_segment_tree(1,0,n-1);
	
	// build segment tree for parity = even
	build_even_segment_tree(1,0,n-1);
	
	// build the maximum segment tree
	build_max_segment_tree(1,0,n-1);
	
	while(q--)
	{
	    ll type,L,R;
	    cin>>type>>L>>R;
	    
	    if(type==1)
	    {
	        // we need to set A[L] to R;
	        
	        L--;
	        
	        update_segment_max(1,L,R,0,n-1);
	        update_segment_even(1,L,R%2==0,0,n-1);
	        update_segment_sum(1,L,R,0,n-1);
	    }
	    else
	    {
	        // we need to print the answer for subarray L to R
	        
	        L--;R--;
	        
	        ll currLength = R-L+1;
	        ll even = get_segment_even(1,L,R,0,n-1);
	        ll currMax = get_segment_max(1,L,R,0,n-1);
	        ll currSum = get_segment_sum(1,L,R,0,n-1);
	        
	        ll cnt = 0;
	        
	        if(currMax%2)
	        {
	            cnt = even;
	        }
	        else
	        {
	            cnt = currLength - even;
	        }
	        
	        ll ans = ( (currMax*currLength) - currSum - cnt ) / 2;
	        
	        ans = ans + cnt;
	        
	        cout<<ans<<endl;
	    }
	}
	
}