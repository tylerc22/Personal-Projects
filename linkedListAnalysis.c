
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>
#include <time.h>

typedef struct node
{
	int number;
	struct node *next_ptr;
}
NODE;

void AddNodeToLL(int Number, NODE **LinkedListHead)
{
	NODE *TempPtr, *NewNode;
	NewNode = malloc(sizeof(NODE));
	NewNode->number = Number;
	NewNode->next_ptr = NULL;

	if (*LinkedListHead == NULL)
	{
		*LinkedListHead = NewNode;
	}
	else
	{
		TempPtr = *LinkedListHead;

		while (TempPtr->next_ptr != NULL)
			TempPtr = TempPtr->next_ptr;

		TempPtr->next_ptr = NewNode;
	}
}

void ReadFileIntoLL(int argc,  char *argv[], NODE **LLH)
{
	int count = 0;
	int total = 0;

	if (argv[1] != NULL)
	{
		FILE *fp;
		char fileLine[120] = {};
		int numberLine = 0;
		fp = fopen(argv[1], "r");

		while (fgets(fileLine, sizeof(fileLine), fp))
		{
			numberLine = atoi(fileLine);
			AddNodeToLL(numberLine, LLH);
			count++;
			total += numberLine;
		}
	}

	printf("\n%d records were read for a total sum of %d\n", count, total);
}

void PrintLL(NODE *LLH) 
{ 
	NODE *TempPtr;
	TempPtr = LLH;
	int count = 0;
	int total = 0;

	while (TempPtr != NULL)
	{
		printf("\n%p %d %p\n", TempPtr, TempPtr->number, TempPtr->next_ptr);
		count++;
		total += TempPtr->number;
		TempPtr = TempPtr->next_ptr;
	}
	printf("\n%d records were read for a total sum of %d\n", count, total);

}

void FreeLL(NODE **LLH) 
{ 
	NODE *TempPtr;
	TempPtr = *LLH;
	int count = 0;
	int total = 0;

	while (TempPtr != NULL)
	{
		#ifdef PRINT
		printf("\nFreeing %p %d %p\n", TempPtr, TempPtr->number, TempPtr->next_ptr);
		#endif

		count++;
		total += TempPtr->number;

		free(TempPtr);
		TempPtr = TempPtr->next_ptr;
	}

	printf("\n%d nodes were deleted for a total sum of %d\n", count, total);
}

int main(int argc, char *argv[]) 
{ 
	clock_t start, end;
	NODE *LLH = NULL;

	if (argv[1] == NULL)
	{
		printf("File must be provided on command line...exiting\n");
		return 0;
	}
	
	/* capture the clock in a start time */
	start = clock();
	ReadFileIntoLL(argc, argv, &LLH);
	/* capture the clock in an end time */
	end = clock();
	printf("\n%ld tics to write the file into the linked list\n", end-start);

	/* capture the clock in a start time */
	#ifdef PRINT
	start = clock();
	PrintLL(LLH);
	end = clock();
	printf("\n%ld tics to print the linked list\n", end-start);
	#endif
	/* capture the clock in an end time */
	
	/* capture the clock in a start time */
	start = clock();
	FreeLL(&LLH);
	end = clock();
	/* capture the clock in an end time */
	printf("\n%ld tics to free the linked list\n", end-start);
	
	return 0; 
} 
