#include<stdio.h> 
void main()
{
int allocation[20],b[20],p[20],i,j,bno,pno,temp,highest=0;
static int barray[20],parray[20];


printf("\nEnter the number of blocks:");
scanf("%d",&bno);
printf("\nEnter the size of the blocks:-\n");
for(i=1;i<=bno;i++)
    {
printf("Block no.%d:",i);
        scanf("%d",&b[i]);
    }


printf("Enter the number of processes:");
scanf("%d",&pno);

printf("\nEnter the size of the processes :-\n");
for(i=1;i<=pno;i++)
    {
        printf("Process no.%d:",i);
        scanf("%d",&p[i]);
    }

for(i=1;i<=pno;i++)
{
for(j=1;j<=bno;j++)
{
if(barray[j]!=1)
{
temp=b[j]-p[i];
if(temp>=0)
if(highest>temp)
{
parray[i]=j;
highest=temp;
}
}
}
allocation[i]=highest;
barray[parray[i]]=1;
highest=0;
}
printf("\nProcess_no\tBlock_no\tBlock_size\tallocation");
for(i=1;i<=pno && parray[i]!=0;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d",i,parray[i],b[parray[i]],allocation[i]);
}