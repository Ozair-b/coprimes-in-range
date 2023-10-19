# coprimes-in-range
#include<stdio.h>
void main(){
int n,i=1,gcd;
printf("Enter the range :");
scanf("%d",&n);
pritnf("Co primes in between 1 and %d are:\n",n);
for(i=1;i<n;i++){
  for(int j=i+1;j<=n;j++){
      for(int k=1;k<=j;k++){
          if(i%k==0 && j%k==0){
            gcd=k;
            }
            }
            if(gcd==1){
            printf("%d %d",i,j);
            }
            }
            }
