#include <stdio.h>
#include <stdlib.h>
int timkiemnhiphan(int a[],int k,int n){
int left= 0 , right= N-1;
while(left<= right){
        int mid =(left+right)/2;
if(a[mid]==k)
         return mid;
else if(a[mid]<k)
        left=mid +1;
else
         right=mid-1;
         }
  return -1;
  }
  int main(){
  int a[] = {5 8 12 16 23 38 56 72 88 90};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 10;
  int result = binarySearch(a, 0, n - 1, x);
  if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}
