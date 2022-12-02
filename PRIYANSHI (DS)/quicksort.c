#include<stdio.h>
#define n 25
int totalElement , cnt=0;
//void print(int number[25])
//{
//      int i;
//      for(i=0;i<totalElement ; i++)
//          scanf("%d" , &number[i]);
//}
void quicksort(int number[25],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;
      while(i<j)
      {
        while(number[i]<=number[pivot]&&i<last)
         i++;
        while(number[j]>number[pivot])
         j--;
        cnt++;
        if(i<j)
        {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
        }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main()
{
   int i , number[25];
   printf("How many elements are u going to enter?: ");
   scanf("%d",&totalElement);

   //printf("Enter %d elements: ", totalElement);

   //for(i=0;i<totalElement;i++)
   //scanf("%d",&number[i]);
   
    printf("\narray elements:");    
    for (i = 0; i < 10; i++)
         number[i] = rand() % 50;    

    for (i = 0; i < 10; i++)
        printf("%d ", number[i]);
   quicksort(number,0 , totalElement-1);

   printf("\n Order of Sorted elements: ");

   for(i=0;i<totalElement;i++)
        printf(" %d",number[i]);

    printf("\n cnt : %d ",cnt);
   return 0;
}