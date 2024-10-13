# Session 2 - The Cequel

Welcome to the Cequel! 
<small> See what I did there </small>

I hope you enjoyed Session 1 and are now comfortable with using variables, for loops, and if statements to create very basic C programs (including commenting and being able to compile your code), and are familiar with undefined behaviour and arrays - we can now start to explore  

It's getting to the harder stuff ...

Good luck and happy coding!

- CHANGE THE README 

## Contents 

- <a href="#Pointers" style="color: black;"> Pointers </a>
    - <a href="#MemoryAddresses" style="color: black;"> Memory Addresses </a>
    - <a href="#ThePoint" style="color: black;"> The Point (Intro to Pointers) </a>
    - <a href="#PointerExercises" style="color: black;"> Pointer Exercises </a>
- <a href="#Functions" style="color: black;"> Functions </a>
    - <a href="#Functions" style="color: black;"> Revisiting Hello World </a>

- <a href="#Input" style="color: black;"> Reading Input </a>

## <a name="Pointers"> Pointers </a>

We are about to learn arguably the most fundamental part of C: pointers. They may seem scary but we'll soon see that they're not *actually* that bad! 

### <a name="MemoryAddresses"> Memory Addresses: How Variables Are Stored </a>

We know that variables store values for us; but what does this actually look like, in the memory of our computers? 

Let's think about the following variable initialisations:
```c
char a = 5;
char b = 14;
```

These variables correspond to the following address table:

| Memory Address | Value Stored |
| -------------- | ------------ |
| 6422039        | 5            |
| 6422040        | 14           | 

We can see that the variable **a** has been stored at 6422039, and that variable **b** has been stored at 6422040 (the next **memory address**). These **memory addresses** tell you where you'd find the variables in all of the RAM your computer is currently using so they tend to be fairly large values.

 Memory addresses are actually in **binary** (which uses only 2 symbols: `0, 1`) and converting to **denary** (our numbering system which uses 10 symbols: `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`) is a bit of a pain, so we don't usually represent addresses with denary. However, because of the large values that memory addresses tend to be, we can't exactly read them in their binary form since you get values like this: `11000011111111000010111` (`6422039` in binary). 

 Therefore, we typically represent addresses using **hexadecimal** (which uses 16 symbols: `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F`) which is both more compact than binary and, unlike denary, can be easily converted to and from binary. 
 
 Our memory addresses in various different bases:

| Denary  | Binary                    | Hexadecimal (what is commonly used!) | 
| ------  | ------------------------- | ------------------------------------ |
| 6422039 | 11000011111111000010111   | 61FE17                               |
| 6422040 | 11000011111111000011000   | 61FE18                               |

### <a name="ThePoint"> The Point </a>

It turns out that we can actually access the memory address of a variable in **C**, with the **address** operator (**&**). This returns a value which is the memory address of a variable so this value is said to **point** to that variable. This value is a **pointer**! Pointers have their own format specifier **%p** (**p** for **p**ointer) which we'll use to inspect some pointers:

```c
char a = 5;
char b = 14;

printf("%p\n", &a); // 61FE17
printf("%p\n", &b); // 61FE18
```

So we know variable **a** is stored at memory address `61FE17`, and variable **b** is stored at memory address `61FE18`. 

So far, we've only been dealing with pointers to **char** which is convenient since each char takes up **1 byte** in most machines, and each bit of memory (that has an address) stores **1 byte** of memory; what about ints which take up **4 bytes**? How are these stored in memory? 

```c
int a = 7;
int b = 22; 

printf("%p\n", &a); // 61FE18
printf("%p\n", &b); // 61FE1C
```

This can be visualised:




Okay cool so we know that a pointer is just a memory address, you can get it using the addressing operator **&**, and that you can output it using the format specifier **%p**. What else can we do with pointers?


### <a name="PointerExercises"> Pointer Exercises </a>


- Mention different types need different n bytes 
- May have HUGE amount of memory; what type is a memory address? 

- The NULL pointer (for failed)

## <a name="Functions"> Functions </a>

## Next Session…

Well done on completing Session 2! You're almost through to the end; just one more session to go... 

If you're not tired of C by then, then remember there's a bonus session on (INSERT DATE) 

## <a name="OptionalExercises"> Optional Exercises </a> 

Not sure what to put here yet 

## Acknowledgements

Thanks to ...
Originally created by Edward Denton. 
