#include<stdio.h>
void main(){
 int j,i,n,a,r,b,d,c=0;
 scanf("%d",&n);
 i=1;
 while(i<n){
    j=i+1;
     while(j<=n){
        b=j;
        d=i;
      //   if(d>b){
      //    d=b+d;
      //    b=d-b;
      //    d=d-b;
      //   }
        r=b%d;
        if(r==0){
         if(d==1){
            printf("%d %d\n",i,j);
         }
        }else{
         while(r>=0){
             b=d;
             d=r;
             if(r==0){
               if(b==1){
                  printf("%d %d\n",i,j);
               }
               break;
             }

            r=b%d;
         }
        }

        j++;
     }
     //printf("%d %d\n ",i,j);
     





    i++;
 }







}