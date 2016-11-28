#include <stdio.h>
int a[1000000]={0};
int main() {
	int t;
a[1]=1;
	// your code goes here
scanf("%d",&t);
while(t--){
	int m,n,i,j,k,s,r=0;
	scanf("%d",&n);
	for(i=2;i*i<n;i++)
	{
		k=0;
		for(j=2;j*j<i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==0)
		{
			for(s=2;i*s<=n;s++)
           {
           	a[s*i]=1;
           }
		}
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]==0)
		r++;
	}
printf("%d\n",r);
}

	return 0;
}

