#include<stdio.h>

int main(){

    int ms,ps,nop,rempages,np,x,y,offset,i,j,pa;
    int s[10],fno[10][20];

    printf("Enter the memory size:");
    scanf("%d",&ms);

    printf("\nEnter the page size:");
    scanf("%d",&ps);

    nop=ms/ps;
    rempages=nop;

    printf("\nThe number of pages available are: %d",nop);
    printf("\nEnter the number of processes:");
    scanf("%d",&np);

    for(i=1;i<=np;i++){
    printf("\nEnter the number of pages required for process %d:",i);
    scanf("%d",&s[i]); 

    if(s[i]>rempages)
    {
        printf("\nmemory is full");
        break;
    }

    rempages-=s[i];

    printf("Enter the page number for the process %d:",i);

    for(j=0;j<s[i];j++)
        scanf("%d",&fno[i][j]);


    }

   printf("\nEnter the logical address to find the physical address:");
   printf("\nEnter the process number,page number and offset:");

   scanf("%d %d %d",&x,&y,&offset);

   if(x>np || y>=s[i] || offset>=ps){
       printf("\nInvalid");

   }

   else{

       pa=fno[x][y]*ps+offset;
       printf("\nPhysical address is %d",pa);
   }

}