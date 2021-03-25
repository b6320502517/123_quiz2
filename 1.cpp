#include<stdio.h>
int main(){
	unsigned long n=1,i,j,x,k=1,l=0,a=0;
	if(n>=1&&n<=1000000)
		scanf("%ld",&n);
	if(n==1)
		printf("1");
	for(i=2;i<=n;i++){
		x=i;
		for(j=2;x!=1;j++){
			l=0;
			while(x%j==0){
				l++;
				x/=j;	
			}
			if(l>=3)
				a++;
		}
		if(a==0)
			k++;
		a=0;
	}
	i--;
	if(i==n&&l>=3)
		printf("Not Cube Free");
	else
		printf("%ld",k);
	
	return 0;
}
