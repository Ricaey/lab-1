int recursive_sequential_search(int arr[],int low,int high,int target){
    if(low>high){//if so ,then it means target is not found
        return -1;//return -1 and then quit
    }else{
        if(arr[low]==target){//if found
            return low;//return the index
        }else{//if not found
            return recursive_sequential_search(arr,low+1,high,target);//recursive call
        }
    }
}