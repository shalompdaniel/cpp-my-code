 #include<stdio.h>
 int main()
 {
    int n,i;
    float sum =0,mean ;

    printf("enetr the number :");
    scanf("%d",&n);

    float number[n];
    printf("enter the numbers");
    for(i=0; i<n;i++){
     scanf("%f",&number[i]);
    }
     for(i=0;i<n;i++){
     sum +=number[i];
   
   mean = sum/n;
    printf("mean = %.2f",mean);
    return 0;
 }
 }






#include<stdio.h>
int main(){
    int num,time ,result;
    printf("enetr the number :");
    scanf("%d",&num);
    printf("enter the table :");
    scanf("%d",&time);

    

    for (int i=0;i<=time;i++){
       scanf("%d * %d = %d\n",num,i+1,num*(i+1));
    }
    return 0;



}