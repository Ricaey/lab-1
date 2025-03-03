int iterative_sequential_search(int arr[],int dummy,int high,int target){//iterative sequential search
    int i;
    for(i=0;i<=high;i++){//using iteration
        if(arr[i]==target){//if found
            return i;//return the index
        }
    }
    return -1;//if the target is not found
}