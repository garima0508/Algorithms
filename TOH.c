#include <stdio.h> 
  
// C recursive function to solve tower of hanoi puzzle 
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) // We can transfer disk only when its the only one in a stick.
    { 
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);  // using recursion and breaking it into a sub-problem by reducing the no. of disks by 1. Basically we are taking the     last disk and the disks above the last one as a whole and putting them into the target stick.
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); // Here we are moving the nth disk from the from_rod to to_rod.
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); // again using recursion to place the bunch of disks above the nth disk.
} 
  
int main() 
{ 
    int n; // Number of disks 
    printf("Enter the no. of disks");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0; 
} 