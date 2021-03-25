#include<stdio.h>
int main(){
	unsigned long n=1;
	int i,j,k=1,l=0;
	if(n>=1&&n<=1000000)
		scanf("%ld",&n);
	if(n==1)
		printf("1");
	for(i=2;i<=n;i++){
		for(j=2;i!=1;j++){
			l=0;
			while(i%j==0){
				l++;
				i/=j;	
			}
		}
		printf("%d",l);
			if(l==3)
			k--;
			else
			k++;
	}
	if(i==n&&l==3)
		printf("Not Cube Free");
	else
		printf("%d",k);
	
	return 0;
}
