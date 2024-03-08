#include<stdio.h>
int main(){
    printf("enter length of array\n");
    int n=0;
    scanf("%d", &n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int m1=a[0], m2=a[0], m3=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>m1){
            m3=m2;
            m2=m1;
            m1=a[i];
        }
        else if(a[i]>m2 ){
            m3=m2;
            m2=a[i];

        }
        else if(a[i]>m3){
            m3=a[i];
        }
    }
    printf("3rd largest integer is %d", m3);

}