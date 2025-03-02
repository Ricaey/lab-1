int iterative_binary_search(int arr[],int len,int target){//use len to keep consistent with others
    int low = 0;//initiate low
    int high =len-1;//initiate high
    int mid;
    while(!(low>high)){
        mid=(low+high)/2;//change mid in every loop
        if(arr[mid]==target){//if found
            return mid;//return the index and quit
        }else if(arr[mid]>target){
            high=mid-1;
        }else{//if(arr[mid]<target)
            low=mid+1;
        }
    }
    //if not found
    return -1;
}