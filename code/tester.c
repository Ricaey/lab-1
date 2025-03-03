#include <stdio.h>
#include "iterative version of sequential search.c"
#include "recursive version of sequential search.c"
#include "iterative version of binary search.c"
#include "recursive version of binary search.c"
#include <time.h>
clock_t start, stop;
double total_runtime;
double duration;
void test(int (*p)(int[],int,int,int),int a[],int low,int l,int k,int target){
    int i;
    start = clock();
    for(i=0;i<k-1;i++){
        p(a,low,l,target);
    }
    printf("The result is %d\n",p(a,low,l,target));
    stop = clock();
    total_runtime = ((double)(stop - start)) / CLK_TCK;
    duration = total_runtime / k;
    printf("The total run time is %lf\nThe duartion is %lf\n", total_runtime,duration);
}

int main(){
    int l,k,target;
    printf("Enter the length of the array: \n");
    scanf("%d", &l);
    printf("Enter the k you want: \n");
    scanf("%d", &k);
    printf("Enter the target  you want: \n");
    scanf("%d", &target);
    int a[l],i;
    for(i=0;i<l;i++){
        a[i]=i;
    }
    printf("\nFor the worst case for iterative sequential search:\n");
    test(iterative_sequential_search,a,0,l-1,k,target);
    printf("\nFor the worst case for recursive sequential search:\n");
    test(recursive_sequential_search,a,0,l-1,k,target);
    printf("\nFor the worst case for iterative binary search:\n");
    test(iterative_binary_search,a,0,l-1,k,target);
    printf("\nFor the worst case for recursive binary search:\n");
    test(recursive_binary_search,a,0,l-1,k,target);
    return 0;
}