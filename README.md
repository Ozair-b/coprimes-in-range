# coprimes-in-range
#include<stdio.h>
<br>
void main(){
<br>
int n,i=1,gcd;
<br>
printf("Enter the range :");
<br>
scanf("%d",&n);
<br>
pritnf("Co primes in between 1 and %d are:\n",n);
<br>
for(i=1;i<n;i++){
<br>
for(int j=i+1;j<=n;j++){
<br>
for(int k=1;k<=j;k++){
<br>
if(i%k==0 && j%k==0){
<br>
gcd=k;
<br>
}
<br>
}
<br>
if(gcd==1){
<br>
printf("%d %d",i,j);
<br>
}
<br>
}
  <br>
}
