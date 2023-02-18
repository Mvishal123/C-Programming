#include <stdio.h>

int search(int array[], int target, int len){
    int start = 0;
    int end = len-1;
        while(start < end ){
        int mid = start + (end - start)/2;
        if(array[mid] == target){
            return mid;
        }
        else if(array[mid] > target){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}






int main(){
    int array[5] = {2, 4, 5, 7, 12};
    int target = 7;
    int len = sizeof(array)/sizeof(int);
    int ans = search(array, target, len);
    printf("%d", ans);
}