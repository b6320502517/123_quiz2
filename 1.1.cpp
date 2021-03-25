#include<stdio.h>
int main(){
	unsigned long n=1,i,j,x,k=1,l=0;
	if(n>=1&&n<=1000000)
		scanf("%ld",&n);

	for(i=2;i<=n;i++){
		x=i;
		for(j=2;x!=1;j++){
			l=0;
			while(x%j==0){
				l++;
				x/=j;	
			}
		}
		if(l!=3)
			k++;
	}
	i--;
	if(i==n&&l>=3)
		printf("Not Cube Free");
	else
		printf("%ld",k);
	
	return 0;
}
