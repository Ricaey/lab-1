int iterative_sequential_search(int arr[],int dummy,int len,int target){//iterative sequential search
    int i;
    for(i=0;i<len;i++){//using iteration
        if(arr[i]==target){//if found
            return i;//return the index
        }
    }
    return -1;//if the target is not found
}