# Pointers

-   When a variable is initialised, it is allocated a memory in space. The table that holds all the addresses of the vaiables is called the symbol table.
-   Address is stored as a hexadecimal number

To find the address of any variable

```cpp
cout<<&a; // Will give the address of a
```

Initialise a pointer by referencing operator \*

```cpp
int *p=&a;
cout<<p; // Will give the address of a
```

To dereference a pointer

```cpp
cout<<*p; // Will give the value of a
```

If we change the value of the variable, the dereferenced pointer will also new value,

```cpp
a++;
cout<<a;
cout<<*p; // They both will produce same output
```

## Pointer Aritmetic

Pointers can be incremented/decremented to point to the next data type.

```cpp
p++;
cout<<p; // Will print the address of next integer
```

## Pointers and Arrays

For an array, the following statments are very same

```cpp
cout << a << endl;
cout << &a[0] << endl;
```

But there are differences between them

-   The sizeof pointer is always fixed

```cpp
cout<<sizeof(p); // Will always give same size
cout<<sizeof(a); // Will give the size of whole array
```

-   For an array referencing does not has any effect, while it does on pointers.

```cpp
cout<<a<<&a; // Will give same output (address of a[0])
cout<<p<<&p; // Will give the address of a and address of p respectively
```

-   You can't assign a pointer to an array, but the vice versa is true

```cpp
a=p; // Error
p=a; // Stores the address of a[0] in p
```

## Character Pointer

Character pointer work a bit different from the integer pointer

```cpp
char c[]="abc";
cout<<c; // This will not output the address of c[0], but the value of array c
```

Similarly for a single character, the pointer poinitng at it will print the string in garbage memory until a NULL(\0) charcter is reached.

```cpp
char c1='a';
char *q=&c;
cout<<&c1<<q; // They both will give au=i� or something different in memory
```

-   **Memory Allocation**: For a string array, it makes a copy of memory, but for a string pointer it uses direct memory.

```cpp
char str[] = "abcde";
char *pstr = "abcde";
```

## Functions and Pointers

We can pass pointers to functions just like any other data type

```cpp
void func(int *p)
{
    cout<<*p; // Will give the value of integer pointed by p.
}
```

## Functions and arrays

When we pass an array to a function, it is actually passed as a pointer.

```cpp
void func(int a[])
{
    cout<<sizeof(a); // 8
}
int a[10];
cout<<sizeof(a); // 40
```

## Double Pointers

Pointers that store the address of other pointers are called double pointers.

```cpp
int a = 5;  // 5
int *p = &a;    // address of a
int **q = &p;   // address of p
```
