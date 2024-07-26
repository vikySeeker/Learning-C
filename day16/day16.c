#include<stdio.h>


/*
 * This assignment is created to help beginners to understand how arrays work in C.
 * When we declare an array in C we use the syntax: <datatype> <variable[size]> = <{array data}>.
 * In this specific code we are passing the array variable `arr` to the printf function.
 * The printf function just prints an address upon execution.
 * so which means it treats the array variable as like it treats the pointer variable.
 *
 * Why such behaviour?
 * In C arrays are implicitly works as a pointer. almost pointers and arrays are same.
 * So the value of the arr variable is the address of the first element of the given array.
 *
 * Then how does the subscript operator (`[]` bracktes used with arrays.)? (**Pointer Arithmetic**)
 * Just think that subscript works in the same way how we get a value from the pointer.
 * If we want to get a value from a pointer variable we use `*`.
 * Like that arr[4] is implicitly converted as *(arr+indexvalue).
 * So to get the value of second element from the array just do *(arr+1).
 *
 * As you can treat the arrays as pointer the same is true for the opposite.
 * i.e. you can treat a pointer as an array!!.
 *
 * Reference: https://youtu.be/kdgq-OwsOs8?si=VEVydcKCn8R8gCpc
 */
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	printf("%d\n", arr);
}
