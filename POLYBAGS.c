#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    if(n%10==0)
	       printf("%d\n",n/10);
	    else
	       printf("%d\n",(n/10)+1);
	    i++;
	}while(i<t);
	return 0;
}

