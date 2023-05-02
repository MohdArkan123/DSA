// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[5]={2,3,4,5,6};
    int a,i;
    int flag=0;
    printf("enter number=");
    scanf("%d",&a);
    for(i=0;i<5;i++){
        if(arr[i]==a){
            flag=1;
            break;
        }
       
    }
    if(flag==1){
        printf("%d",i);
    }
    else{
        printf("not found");
    }

    return 0;
}