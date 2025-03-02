int recursive_sequential_search(int arr[],int len,int target){
    len--;
    if(len<0){//if len<0,then it means target is not found
        return -1;//return -1 and then quit
    }else{
        if(arr[len]==target){//if found
            return len;//return the index
        }else(
            return recursive_sequential_search(arr,len,target);//recursive call
        )
    }
}