#include<stdio.h>

int array[100],position,c,n,m;
void create()
{
	printf("Enter number of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(c=0;c<n;c++)
	   scanf("%d",&array[c]);
}
void display()
{
	printf("\nElements of the array are \n");
for(c=0;c<n;c++)
	printf("Elements %d at %d position\n",array[c],c);
}
void insert_pos()
{
	int ele;
  	printf("Elements the valid position where you wish to insert elements:");
	scanf("%d",&position);
	if(position>=n+1)
	  printf("Insertion is not possible\n");
 	else
	{
	  printf("Enter the elements :");
	  scanf("%d",&ele);
	  for(c=n-1;c>=position;c--)
	  array[c+1]=array[c];
	  array[position]=ele;

        }
}
void delete_pos()
{
	printf("Enter the valid position where you wish to delete element:");
	scanf("%d",&position);
	if(position>=n+1)
	printf("Deletion is not possible\n");
	else
	{
	  for(c=position;c<=n-1;c++)
	  array[c]=array[c+1];
  	}
}
int main()
{
  int ch;
  while(1)
  {
	printf("\n1.creating an array of N integer elements");
	printf("\n2.display of array elements");
	printf("\n3.inserting at a given valid position");
	printf("\n4.deleting at a given valid position");
	printf("\n5.exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
 	{
	  case 1:create();
		 break;
	  case 2:display();
	         break;
	  case 3:insert_pos();
	 	 break;
	  case 4:delete_pos();
		 break;
	  case 5:return 0;
	  default:printf("\n Invalid choice\n");
	}
   }
    return 0;
}








