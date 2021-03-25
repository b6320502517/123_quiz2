#include<stdio.h>
int main(){
	long n=1,i,j,k=9,x,l=1,m,a=0;
	if(n>=1&&n<1000000)
		scanf("%ld",&n);
	long y[n];
	if(n<10)
		printf("%ld",n);
	else if(n==10)
		printf("9");
	else{
		for(i=11;i<=n;i++){
			l=1;
			for(x=i;x>0;x/=10){
				y[l]=x%10;
				l++;
				//printf("%ld\n",x);
			}
			l--;
			//printf("%ld",l);
			//if(l%2==0){
				for(j=1,m=l;j<=l/2;j++,m--)
					if(y[j]==y[m])
						a++;
				//printf("(%ld) ",a);
				if(a==l/2)
					k++;
				a=0;	
			//}

		}
		printf("%ld",k);
	}
		
	return 0;
}
