#include <stdio.h>

void bubble_sorta(long [], long);
void bubble_sortd(long [], long);
 
int main() {
  long array[100], n, c, d, temp;
  char way;
  
  printf("Enter 'A' to sort in ascending order or 'D' to sort in descending order.\n", way);
  scanf("%c", &way);
  //stores the char inside variable way
  
  printf("Enter number of elements\n");
  scanf("%ld", &n);
  //stores the number of elements in n
 
  printf("Enter %ld integers\n", n);
 //restricts user input to n
 
 
  for (c = 0; c < n; c++)
	scanf("%ld", &array[c]);
  //stores each element into an array
  
  if (way == 'A' || way == 'a') {	//if the char stored is equal to A or a, execute ascend bubblesort
  	bubble_sorta(array, n);
  } else if (way == 'D' || way == 'd') { //if char stored is d or D, execute descend bubblesort
  	bubble_sortd(array, n);
  } else {								 //any thing else stored in way is invalid and the program exits
  	printf("Invalid option");
  	exit(0); 
  }
 
  printf("Sorted list\n");
 
  for ( c = 0 ; c < n ; c++ )			//if way is valid, then the array of numbers gets printed in the proper order
     printf("%ld\n", array[c]);
 
  return 0;
}
 
//ascending bubble sort. takes parameters list array and n long
void bubble_sorta(long list[], long n) {
  long c, d, temp;
 
  for (c = 0 ; c < ( n - 1 ); c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] > list[d+1]) {
        
 		//swap
 		//if the current is larger than next, swap
        temp      = list[d];
        list[d]   = list[d+1];
        list[d+1] = temp;
      }
    }
  }
}

//descend bubble sort, takes same parameters as bubble_sorta
void bubble_sortd(long list[], long n) {
  long c, d, temp;
 
  for (c = 0 ; c <  n ; c++) {
    for (d = 0 ; d < n - c ; d++) {
      if (list[d] < list[d+1]) {
        
        //swap
        //if current is smaller than the next, swap
        temp      = list[d+1];
        list[d+1] = list[d];
        list[d] = temp;
      }
    }
  }
}
