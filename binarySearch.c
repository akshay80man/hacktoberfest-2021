#include<stdio.h>
int binarySearch(int A[],int low,int high,int target)
{
   while(low<=high)
   {
       int mid=low+(high-low)/2;
      //This make this program to accept large values as well
       if(A[mid]<target)
       {
           low=mid+1;
       }
       else if(A[mid]>target)
       {
           high=mid-1;
       }
       else{
           return mid;
       }
   }
   return -1;
}
