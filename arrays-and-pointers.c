#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void printElements (int *v, int size);

int main ()
{
    // array
    // -> is an array a constant pointer ? No, but ...
    int arr[10]; // allocate 40 bytes on the main stack
    arr[0] = 42;
    arr[1] = 1334;
    arr[2] = -21;

    printf("%p == %p\n", arr, &arr[0]); // "arrays are almost equal to the pointer of the first element"

    /* for (int i = 0; i < 10; ++i)
    {
        printf("array: %d\n", arr[i]); // "*arr++" is not allowed
    } */
    // in the stack
    printf("address of the array: %d\n", arr); // can not increase arr
    printf("size: %zu\n", sizeof(arr));
    // &
    printf("%p\n", &arr); // same value
    printf("%p\n", arr); // same value
    // pointer arithmetic
    printf("%p\n", &arr + 1); // not the same value -> different pointer type
    printf("%p\n", arr + 1); // not the same value -> different pointer type
    
    puts("\n");

    // fake array
    int * const ptr = alloca(sizeof(int) * 10); // allocates 40 bytes in memory
    // "allocates size of bytes of space in the stack frame of the caller. This space is automatically freed on return". 

    *(ptr + 0) = 42;
    *(ptr + 1) = 1334;
    *(ptr + 2) = -21;

    /* for (int i = 0; i < 10; ++i)
    {
        printf("ptr: %d\n", *ptr++); // "*ptr++" is not allowed as it is constant
    } */
    // in the stack
    printf("address of the fake array: %d\n", ptr);
    printf("size: %zu\n", sizeof(ptr));
    // &
    printf("%p\n", &ptr); // not same value
    printf("%p\n", ptr); // not same value
    // pointer arithmetic
    printf("%p\n", &ptr + 1); // not the same value -> different pointer type
    printf("%p\n", ptr + 1); // not the same value -> different pointer type

    // Conclusion: 
    // Array decay: percieve arrays as pointers
        // exceptions:
        // 1. can not increase thename on an array
        // 2. when using & with an array we get the address of the array, that has a specific type (the type of the array)
    // Array decay makes the lenguage more efficient by passing just references of the arrays and not copies of the arrays itself.

    int v[10];
    int *pExample;

    v[0] = 13;
    v[1] = 67;

    printf("%zu\n", sizeof(v)); // not decay
    printf("%p\n", &v);
    printf("%d\n", *(v + 1)); // show the value with poiter notation as it is like a pointer
    // in the end, pointer arithmatics works the way it works: it is basically array indexing
    printf("%d\n", v[1]); // when the copiler sees "v[1]" it converts it to "*(v + 1)"
    printf("%d\n", 1[v]); // when the copiler sees "1[v]" it converts it to "*(1 + v)"
    printf("%c\n", "hello"[0]);
    printf("%c\n", *"hello");
    printf("%c\n", *("hello" + 1));
    printf("%c\n", *("hello" + 2));
    printf("%c\n", 3["hello"]);

    pExample = v;
    printf("%d\n", *pExample);

    int exampleArray[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        exampleArray[i] = rand() % 101;
    }
    printElements(exampleArray, SIZE);
    

}

void printElements (int *arr, int size)
{
    printf("%zu\n", sizeof arr);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}