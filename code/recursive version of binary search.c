int recursive_binary_search(int arr[],int low,int high,int target)
{
    int mid;
    if(low>high){//if low>high,then it means target is not found
        return -1;//quit
    }
    else{
        mid=(low+high)/2;
        if(arr[mid]==target){// if found  
            return mid;
        }else if(arr[mid]>target){
            return recursive_binary_search(arr,low,mid-1,target);//mid-1 to avoid repeated check
        }else{//if(arr[mid]<target)
            return recursive_binary_search(arr,mid+1,high,target);//mid+1 to avoid repeated check
        }
    }
}