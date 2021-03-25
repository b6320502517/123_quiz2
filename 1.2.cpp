#include<stdio.h>
int main(){
	unsigned long n=1,i,j,x,k=1,l=0,a,b=0;
	if(n>=1&&n<=1000000)
		scanf("%ld",&n);

	for(i=2;i<=n;i++){
		x=i;
		a=0,b=0;
		for(j=2;x!=1;j++){
			l=0;
			while(x%j==0){
				l++;
				x/=j;	
			}
			if(l>=3)
				a++;	
		}
		if(a!=0)
			b++;
		else
			k++;
	}
	i--;
	if(i==n&&b!=0)
		printf("Not Cube Free");
	else
		printf("%ld",k);
	
	return 0;
}
