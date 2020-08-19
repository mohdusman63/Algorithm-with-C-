#include <stdio.h>

int main() {
	//code
	//code
	int i,a[200],b[200],c[200],d[200],temp,n,t,sum,x,y,j;
	scanf("%d",&t);
	while(t--){
	    sum=0;
	    scanf("%d %d %d",&n,&x,&y);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	        scanf("%d",&b[i]);
	    for(i=0;i<n;i++){
	        d[i]=abs(a[i]-b[i]);
	        c[i]=i;
	    }
	    for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(d[i]<d[j]){
	                temp=d[i];
	                d[i]=d[j];
	                d[j]=temp;
	                temp=c[i];
	                c[i]=c[j];
	                c[j]=temp;
	            }
	        }
	    }
	    if(x==0 && y==0)
	    {
	        return 0;
	    }
	  else
	  {
	    for(i=0; i<n;i++)
	    {
	        if(a[c[i]]>b[c[i]])
	        {
	            if(x)
	            {
	                sum+=a[c[i]];x--;
	            }
	            else
	            {
	                sum+=b[c[i]];y--;
	            }
	        }
	        else
	        {
	            if(y)
	            {
	                sum+=b[c[i]];y--;
	            }
	            else
	            {
	                sum+=a[c[i]];x--;
	            }
	        }
	    }
	    printf("%d\n",sum);
	}
	}
	return 0;
}



