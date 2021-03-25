#include<stdio.h>
int main(){
	long n=1,m=1,i,j,l;
	if(m>=1&&m<=50000)
		scanf("%ld",&m);
	if(n>=1&&n<=5000)
		scanf("%ld",&n);	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%ld",&l);
	}
	return 0;
}
