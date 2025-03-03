#include <stdio.h>
#include "iterative version of sequential search.c"//import functions from outer files
#include "recursive version of sequential search.c"
#include "iterative version of binary search.c"
#include "recursive version of binary search.c"
#include <time.h>
clock_t start, stop;
double total_runtime;
double duration;
void test(int (*p)(int[],int,int,int),int a[],int low,int l,int k,int target){//it is a test function capable for all 4 verrsions of searching alogrithms
    int i;
    start = clock();//Timer starts!
    for(i=0;i<k-1;i++){
        p(a,low,l,target);
    }
    printf("The result is %d\n",p(a,low,l,target));//make up the last loop and prinnt out the caption
    stop = clock();//Time is up!
    total_runtime = ((double)(stop - start)) / CLK_TCK;//convert the ticks to seconds
    duration = total_runtime / k;// try to calculate the average time for each search
    printf("The total run time is %.4f\nThe duartion is %.4f\n", total_runtime,duration);
}

int main(){
    int l,k;//length and the K(loop times)
    printf("Enter the length of the array: \n");//caption
    scanf("%d", &l);//change l in every test
    printf("Enter the k you want: \n");//caption,too
    scanf("%d", &k);//change k according tothe input length if the arrary
    int a[l],i;//initialize the array and the index
    for(i=0;i<l;i++){//using for loop to generate the ascending array
        a[i]=i;
    }
    //i don'know how to print the name of the function 
    //so i just print the result for 4 times
    printf("\nFor the worst case for iterative sequential search:\n");
    test(iterative_sequential_search,a,0,l-1,k,l);
    printf("\nFor the worst case for recursive sequential search:\n");
    test(recursive_sequential_search,a,0,l-1,k,l);
    printf("\nFor the worst case for iterative binary search:\n");
    test(iterative_binary_search,a,0,l-1,k,l);
    printf("\nFor the worst case for recursive binary search:\n");
    test(recursive_binary_search,a,0,l-1,k,l);
    return 0;
}