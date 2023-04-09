#include<stdio.h>
int main(){
    int arr[5]={4,5,6,2,4};
    for(int i=1;i<5;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("min=%d",arr[0]);

    return 0;
}