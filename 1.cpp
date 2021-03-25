#include<stdio.h>
int main(){
	unsigned long n=1,i,j,x;
	int k=1,l=0;
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
		}
		//printf("%d",l);
			if(l!=3)
				k++;

			//printf("%ld\n",i);
	}
	i--;
	if(i==n&&l==3)
		printf("Not Cube Free");
	else
		printf("%d",k);
	
	return 0;
}
