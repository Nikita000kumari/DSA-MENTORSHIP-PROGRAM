include<stdio.h>


int main()
{
  int low ,high;
  printf("\tENTER THE FIRST NUMBER (LOW): ");
  printf(" \n\tENTER THE SECOND NUMBER(HIGH):");
  scanf("%d",&low);
  scanf("%d",&high);
int n = low,i,count;

while(n <= high)

{

count =0;

for(i = 2;i <= n-1; i++)

{

if(n % i == 0)

{
