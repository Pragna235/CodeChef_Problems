#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	    printf("%d\n",(10*x)+(5*y));
	    i++;
	}while(i<t);
	return 0;
}

