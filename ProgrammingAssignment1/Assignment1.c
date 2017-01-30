/*
 * Filename: int_array.c
 * This program uses a function to read X number of integers from the keyboard
 * It will then split the integers into 2 arrays and check for order equivalency
 */

#include <stdio.h>

/*
 * reads a list of integers from the keyboard into an array.
 * parameter: list - the array
 * parameter: input_size - expected size of input
 * parameter: max_size - maximum size of the array
 */
void read_integers(int list[], int list2[], int input_size, int max_size);


/*
 * prints a list of integers.
 * parameter: list - the array
 * parameter: size - size of the array
 */
void print_integers(int list[], int list2[], int size);


/*
 * Program execution begins from here.
 * parameters: none
 */
int main()
{
    int list[100];
    int list2[100];
    int size = 10;

    printf( "Enter a list of integers: " );
    read_integers( list, list2, size, 100 );
    print_integers( list, list2, size );
}

void read_integers(int list[], int list2[], int input_size, int max_size)
{
    int i;
    int num;

	//Splits the input size in half then inserts it into array 1
    for( i = 0; i < input_size/2; i++ )
    {
        scanf( "%d", &num );
        list[i] = num;
    }
    //Splits the input size in half and then inserts the 2nd half of intergers into array 2
    for ( i = 0; i < input_size/2; i++ )
    {
    	scanf( "%d", &num );
    	list2[i] = num;
	}
}

void print_integers(int list[], int list2[], int size)
{
    int i;

    for( i = 0; i < size/2; i++ )
    {
        
        //Checks sequence 1 if it is greater than.
        if (list[i+1] > list[i]) {
        	
        	printf ("Getting Sequence 1 Order Equivalency");
        	printf ("\n");
        	
        	
        	//If sequence 1 is greater than, the program compares to make sure that sequence 2 is also greater than.
        	if(list2[i+1] > list2[i])
			{
			
				printf ("Comparing Sequence 2 Order Equivalency");
        		printf ("\n");
        		printf ("So far order equivalent.");
		    	printf ("\n");
        	
        	}
        	//If sequence 2 is not greater than, break from loop and it is not order equivalent.
        	else 
			{
				printf ("Comparing Sequence 2 Order Equivalency");
        		printf ("\n");
        		printf ("Not order equivalent.");
        		printf ("\n");
        		break;
        	
        	}
		} 
		//Checks sequence 1 if it is less than
		else if (list[i+1] < list[i]) 
		{
			
			printf ("Getting Sequence 1 Order Equivalency");
			printf ("\n");
			
			//if sequence 1 is less than, the program compares to make sure that sequence 2 is also less than at that step.
			if (list2[i+1] < list2[i])
			{
				printf ("Comparing Sequence 2 Order Equivalency");
        		printf ("\n");
				printf ("So far order equivalent");
				printf ("\n");
			
			}
			//if sequence 2 is not less than at that step, break from loop and print not order equivalent.
			else
			{
				printf ("Comparing Sequence 2 Order Equivalency");
        		printf ("\n");
				printf ("Not order equivalent.");
				printf ("\n");
				break;
			}
		}
	
		else
		{
			
			printf ("Getting Sequence 1 Order Equivalency");
			printf ("\n");
			
			//Checks if sequence 1 is equal at that step
			if (list[i+1] = list[i]) 
			{
				
				//if sequence 1 is equal at that step, the program compares with sequence 2 to make sure it also equal at that step.
				if (list2[i+1] = list2[i])
				{
					printf ("Comparing Sequence 2 Order Equivalency");
        			printf ("\n");
					printf ("So far order equivalent");
					printf ("\n");
				}
				//if sequence 2 is not equal at that step, program breaks from loop and prints out not order equivalent.
				else
				{
					printf ("Comparing Sequence 2 Order Equivalency");
	        		printf ("\n");
					printf ("Not order equivalent.");
					printf ("\n");
					break;
				}
			}	
		}
		printf("\n");
    }      
}


