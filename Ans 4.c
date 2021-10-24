#include<stdio.h>
#define MAX 1000000
int A[MAX]={0};
//1
void insertAtLast(int A[],int n,int key){ A[n]=key; return;}//2
void insertAtFront(int a[],int n,int key)
{ 
for(int i=n;i>0;i--) 
A[i]=A[i-1];
A[0]=key; 
return;
}
//3
insertAt_i(int A[],int n,int i,int key)
{
for(int x=n;x>i;x--) 
A[x]=A[x-1];
A[i]=key; 
return;
}
//4
void deleteFromLast(int A[],int *n){
--*n;
return;
}
//5
void deleteFromFirst(int A[],int n)
{
for(int x=1;x<n;x++) 
A[x-1]=A[x]; 
return;
}
//6
void deleteFromIndex_i(int A[],int n,int i){ 
for(int x=i;x<n-1;x++) 
{ 
A[x]=A[x+1];
}}
//7
int unsortedAscending(int A[],int n){
for(int i=0;i<n-1;i++)
{ 
if(A[i+1]<A[i])
return i+1;
} return -1;}
int unsortedDescending(int A[],int n){
for(int i=0;i<n;i++)
{
if(A[i+1]>A[i]) 
return i+1; }
return -1;}
//8
int sortedAscending(int A[],int n)
{
for(int i=0;i<n-1;i++)
{
if(A[i]<A[i+1])
return i;
}
return -1;
}
int sortedDescending(int A[],int n){ 
for(int i=0;i<n;i++) 
{ 
if(A[i]>A[i+1]) 
return i;
} 
return -1;}
//9
void sortArray(int A[],int n)
{
for(int i=1;i<n;i++) 
{ 
for(int j=0;j<n-i;j++) 
{
if(A[j]>A[j+1])
{ 
int temp=A[j+1];
A[j+1]=A[j];
A[j]=temp; 
} } } 
return;}
//10
void extractSubset(int A[],int n,int i,int j){ 
for(int x=i;x<=j;x++) 
printf("%d ",A[x]); 
printf("\n");
return;
}
//11
void deleteSubset(int A[],int n,int i,int j)
{ 
for(int x=i;x<n;x++) 
{ 
if(x+j>=n)
break; 
A[x]=A[x+j]; 
} 
return;
}
//12
void splitArray(int A[],int n){ 
printArray(A,n);
}
//13
void cloneArray(int A[],int n,int b[])
{ 
for(int i=n;i<2*n;i++)
A[i]=b[i-n];
return;
}
//14
void shiftLeft(int A[],int n)
{ 
int curr=A[0]; 
for(int i=1;i<n;i++) 
A[i-1]=A[i]; 
A[n-1]=curr;
return;
}
//15
void shiftRight(int A[],int n)
{ 
int curr=A[n-1];
for(int i=n-1;i>0;i--)
{ 
A[i]=A[i-1]; 
} 
A[0]=curr; 
return;
}
//16
void rotateArrayClockwise(int A[],int n,int r)
{ 
for(int i=1;i<=r;i++) 
shiftRight(A,n);
return;
}
//17
void rotateArrayAntiClockwise(int A[],int n,int r)
{ 
for(int i=1;i<=r;i++)
shiftLeft(A,n); 
return;
}
//18
int minim(int A[],int n)
{ 
int ans=0;
for (int i=0;i<n;i++)
{
if(A[i]<A[ans])
ans=i; 
}
return ans;
}
//19
int maxim(int A[],int n)
{
int ans=0;
for(int i=1;i<n;i++)
{ 
if(A[i]>A[ans])
ans=i;
} 
return ans;}
//20
void fillPseudoRandom(int A[],int n){ 
for(int i=0;i<n;i++) 
A[i]=rand();
return;
}
//21
void fillTrueRandom(int A[],int n){ 
srand(time(0));
for(int i=0;i<n;i++) 
A[i]=rand(); 
return;
}
//23
void setToZero(int A[],int n)
{
for(int i=0;i<n;i++) 
A[i]=0;}
//25
void deletion(int A[],int n)
{ 
for(int i=0;i<n;i++) 
free(A[i]); 
return;
}
//27
void printArray(int A[],int n)
{
for(int i=0;i<n;i++)
printf("%d ",A[i]); 
printf("\n");
}
int main()
{
int n,m; 
printf("Enter the initial no of elements in Array\n");
scanf("%d",&n);
printf("Enter the elements\n"); 
for(int i=0;i<n;i++)
scanf("%d",&A[i]); 
int key,i,j,r;
int b[100000]; 
printf("Hello\n"); 
printf( "Enter choice:\n0. All Operations Completed\n1. Insert item at last\n2. Insert Item At First\n3. Insert Item At Index\n4. DeleteItemFromLast\n5. Delete Item from First\n6. DeleteItemFromIndex\n7. Find Item Unsorted\n8. Find Item Sorted\n9. Sort Array\n10. ExtractSubest\n11. DeleteSubset\n12. Split Into Two Array\n13. m. CloneArray\n14. ShiftLeftArray\n15. ShiftRightArray\n16. RotateArrayClockwise\n17. RotateArrayAntiClockwise\n18. FindMin\n19. FindMax\n20. FillArrayPseudoRandom\n21. FillArrayTrueRandom\n22. IncreaseArraySize\n23. SetArrayToZero\n24. DeleteAllItemOfArray\n25. DeleteArray\n26. AllocateArray\n27. PrintArray\n");
int choice;
do
{
printf("\nEnter choice\n");
scanf("%d",&choice); 
switch(choice)
{ 
case 0:
printf("Operations have been performed successfully\n"); 
break; 
case 1: 
printf("Enter the number to be inserted\n"); 
scanf("%d",&key); 
insertAtLast(A,n,key); 
n++; 
printf("Array has been updated\n"); 
break; 
case 2: 
printf("Enter the number to be inserted\n"); 
scanf("%d",&key);
insertAtFront(A,n,key); 
n++; 
printf("Array has been updated\n"); 
break;
case 3:
printf("Enter the number to be inserted and enter the index respectively\n"); 
scanf("%d %d",&key,&i); 
insertAt_i(A,n,i,key); 
n++;
printf("Array has been updated\n"); 
break;
case 4: 
deleteFromLast(A,&n); printf("Array has been updated\n"); 
break; 
case 5: 
deleteFromFirst(A,n); 
n--; 
printf("Array has been updated\n"); 
break;
case 6: 
printf("Enter the index to be deleted from\n"); 
scanf("%d",&i); 
deleteFromIndex_i(A,n,i); n--; 
break;
case 7: 
printf("Considering the array to be a ascending array, the Unsorted element is: "); 
printf("%d\n",unsortedAscending(A,n));
printf("Considering the array to be a descending array, the Unsorted element is: "); printf("%d\n",unsortedDescending(A,n)); break; 
case 8: printf("For ascending: "); printf("%d\n",sortedAscending(A,n)); printf("For descending: "); printf("%d\n",sortedDescending(A,n)); break;
case 9: 
sortArray(A,n); 
printf("Array has been Sorted\n"); 
break; 
case 10: 
printf("Enter the starting and ending indexes of the subarray in the given array\n");
scanf("%d %d",&i,&j);
extractSubset(A,n,i,j); 
break; 
case 11: 
printf("Enter the the starting and ending indexed of the subset to be deleted\n"); 
scanf("%d %d",&i,&j); 
deleteSubset(A,n,i,j); 
printf("Required subset has been deleted\n"); 
n=n-j+i-1; 
break;
case 12:
printf("Array after splitting:\n");
n=n/2+1;
splitArray(A,n);
break; 
case 13:
printf("Enter %d elements for 2nd array\n",n);
for(int i=0;i<n;i++) 
scanf("%d",&b[i]); 
cloneArray(A,n,b);
n*=2; 
printf("Cloning has been done\n");
break; 
case 14: 
shiftLeft(A,n); 
printf("Array has been shifted left\n"); break;
case 15: 
shiftRight(A,n); 
printf("Array has been shifted right\n"); 
break;
case 16: 
printf("Enter no of rotations\n"); 
scanf("%d",&r); 
r=r%n;
rotateArrayClockwise(A,n,r);
printf("Array has been rotated\n");
break;
case 17: 
printf("Enter no of rotations\n"); 
scanf("%d",&r); 
r=r%n;
rotateArrayAntiClockwise(A,n,r); 
printf("Array has been rotated\n");
case 18: 
printf("The index containing the minimum element is :%d\n", minim(A,n)); 
break; 
case 19:
printf("The index containing the maximum element is :%d\n", maxim(A,n)); 
break; 
case 20:
fillPseudoRandom(A,n); 
printf("Array has been filled with pseudo random numbers\n");
break; 
case 21: 
fillTrueRandom(A,n); 
printf("Array has been filled with true random numbers\n");
break;
case 22: 
printf("Enter the new size of Array\n"); 
scanf("%d",&m); 
printf("Size of Array has been changed from %d to %d\n",n,m);
if(m>n) 
printf("%d elements are filled with garbage values\n",m-n); 
case 23: 
setToZero(A,n); 
break; 
case 24: 
n=0;
printf("Elements Of array has been deleted");
break;
case 25: 
deletion(A,n);
free(A);
n=0; 
break;
case 26: 
printf("Enter the new size of array\n"); 
scanf("%d",&m); 
printf("The address of newly allocated array is: %p\n",&b[0]); 
break; 
case 27: 
printArray(A,n);
break;
default: 
printf("Error 404\nExit Code status X"); 
} }
while(choice>=1 && choice<=27);}
