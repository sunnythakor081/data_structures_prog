#include<stdio.h>

void push(int arry[],int size){
    printf("enter %d element in accending",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arry[i]);
    }
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binary_shearch(int arry[],int size,int key){
    
    int mid,low=0,high=size-1;
    
    while(low<high){
        mid=(low+high)/2;
        if(arry[mid]==key){
            return mid;
        }else if(arry[mid]<key){
            high= mid-1;
        }else{
            low =mid+1;
        }
    }
}

void main(){
    int ans,key,size;
    printf("enter size");
    scanf("%d",&size);
    
    int arry[size];
    push(arry,size);
    
    bubbleSort(arry, size);

    // Display sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    printf("\n");
    
    printf("enter key");
    scanf("%d",&key);
    
    ans= binary_shearch(arry,size,key);
    
    if(ans==-1){
        printf("not found");
        
    }else{
        printf("elsement found %d and indexn is %d",key,size);
    }
    
}
