#include<stdio.h>
arrayreversal(int arr[])
{
	int i;
	printf("\n\nthe value of array before reversal is :");
	for(i=0; i<=6;i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n\nThe value of array after reversal is :");
	for(i=6;i>=0;i--)
	{
		printf("%d",arr[i]);
	}

}
main()
{
	printf("-------------Welcome to array reversal program----------------\n");
	int arr[]={1,2,3,4,5,6,7};
	arrayreversal(arr);
	
}

