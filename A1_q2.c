#include <stdio.h>
int main(){
    int marks;
    printf("\t ENTER YOUR MARKS:");
    scanf("%d",&marks);
    if(marks>90 && marks<=100){
        printf("EXECELLENT :)");
    }
    else if(marks>80 && marks<=90){
        printf("GOOD :)");
    }
    else if(marks>70 && marks<=80){
        printf("FAIR ");

    }
else if (marks >60 && marks<=70){
    printf("MEETS EXPECTATAIONS ");
   }
 else{

    printf("BELOW ");
 
 }
    return 0;
}
