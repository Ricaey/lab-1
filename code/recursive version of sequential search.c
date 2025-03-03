int recursive_sequential_search(int arr[],int low,int len,int target){
    int index =0;
    if(index>=len){//if so ,then it means target is not found
        return -1;//return -1 and then quit
    }else{
        if(arr[index]==target){//if found
            return index;//return the index
        }else{//if not found
            return recursive_sequential_search(arr,index+1,len,target);//recursive call
        }
    }
}