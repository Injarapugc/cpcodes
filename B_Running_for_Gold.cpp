#include <stdio.h>
int r[50005][10];
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,num,ans;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d%d%d%d%d",&r[i][1],&r[i][2],&r[i][3],&r[i][4],&r[i][5]);
        ans=1;
        for(int i=2;i<=n;i++)
        {
            num=0;
            for(int j=1;j<=5;j++)
                if(r[i][j]<r[ans][j])
                    num++;
            if(num>=3)
                ans=i;
        }
        for(int i=1;i<=n;i++)
        {
            num=0;
            for(int j=1;j<=5;j++)
                if(r[i][j]<r[ans][j])
                    num++;
            if(num>=3)
            {
                ans=-1;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

  	  						 			 	 	 	  		  			