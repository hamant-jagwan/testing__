# include <stdio.h>



int main(){

    int arr[] = {1,34,6,7,73};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("the size of above array is %d", length);
    printf("check what it is %d", sizeof(arr[0]));

    for(int i =0; i<length ;i++){
        printf("the value of %d place is %d\n", i, arr[i]);
    }
    return 0;
    
}