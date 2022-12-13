## First Section

You must write your own function implementing the following original ones. ( Follow man description )

They do not require any external functions:
  - isalpha
  - isdigit
  - isalnum
  - isascii
  - isprint
  - strlen
  - memset
  - bzero
  - memcpy
  - memmove
  - strlcpy
  - strlcat
  - toupper
  - tolower
  - strchr
  - strrchr
  - strncmp
  - memchr
  - memcmp
  - strnstr
  - atoi

In order to implement the two following functions, you will use malloc():

  - calloc
  - strdup
  
## Second Section
  
In the second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form.

  ### ft_substr
    
    Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
    Parameters: 
              s: The string from which to create the substring.
              start: The start index of the substring in the string ’s’.
              len: The maximum length of the substring.
    Return: value The substring. NULL if the allocation fails.
    External functs: malloc
    Description :  Allocates (with malloc(3)) and returns a substring from the string ’s’. 
                   The substring begins at index ’start’ and is of maximum size ’len’.
    
  ### ft_strjoin
    
    Prototype: char *ft_strjoin(char const *s1, char const *s2);
    Parameters: 
              s1: The prefix string.
              s2: The suffix string.
    Return: The new string. NULL if the allocation fails.
    External functs: malloc
    Description : Allocates (with malloc(3)) and returns a new string, which is the result of 
                  the concatenation of ’s1’ and ’s2’.
      
  ### ft_strtrim
      
    Prototype: char *ft_strtrim(char const *s1, char const *set);
    Parameters: 
              s1: The string to be trimmed.
              set: The reference set of characters to trim.
    Return: The trimmed string. NULL if the allocation fails.
    External functs: malloc
    Description : Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ 
                  removed from the beginning and the end of the string.
      
  ### ft_split
      
    Prototype: char **ft_split(char const *s, char c);
    Parameters: 
              s: The string to be split.
              c: The delimiter character.
    Return: The array of new strings resulting from the split. NULL if the allocation fails.
    External functs: malloc, free
    Description : Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the
                  character ’c’ as a delimiter. The array must end with a NULL pointer.
      
  ### ft_itoa
  
    Prototype: char *ft_itoa(int n);
    Parameters: 
              n: the integer to convert.
    Return: The string representing the integer. NULL if the allocation fails.
    External functs: malloc
    Description : Allocates (with malloc(3)) and returns a string representing the integer received as an argument. 
                  Negative numbers must be handled.
      
  ### ft_strmapi
      
    Prototype: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
    Parameters: 
              s: The string on which to iterate.
              f: The function to apply to each character.
    Return: The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
    External functs: malloc
    Description : Applies the function ’f’ to each character of the string ’s’, and passing its index 
                  as first argument to create a new string (with malloc(3)) resulting
                  from successive applications of ’f’.
      
  ### ft_striteri
      
    Prototype: void ft_striteri(char *s, void (*f)(unsigned int, char*));
    Parameters: 
              s: The string on which to iterate.
              f: The function to apply to each character.
    Return: None
    External functs: None
    Description : Applies the function ’f’ on each character of
                  the string passed as argument, passing its index
                  as first argument. Each character is passed by address to ’f’ to be modified if necessary.
      
  ### ft_putchar_fd
      
    Prototype: void ft_putchar_fd(char c, int fd);
    Parameters: 
    Return:
    External functs: 
    Description : 
      
  ### ft_putstr_fd
      
    Prototype: void ft_putstr_fd(char *s, int fd);
    Parameters: 
    Return:
    External functs: 
    Description :
      
  ### ft_putendl_fd
      
    Prototype: void ft_putendl_fd(char *s, int fd);
    Parameters: 
    Return: 
    External functs:
    Description :
      
  ### ft_putnbr_fd
    
    Prototype: void ft_putnbr_fd(int n, int fd);
    Parameters: 
              n: The integer to output.
              fd: The file descriptor on which to write
    Return: 
    External functs: write
    Description : Outputs the integer ’n’ to the given file descriptor.
      
## BONUS

## Useful Concepts to solve those exercises

## Dynamic Memmory allocation

The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

![image](https://user-images.githubusercontent.com/73948790/207420150-5605e7d1-417f-4278-828e-c47029d3fae6.png)

The “calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().

![image](https://user-images.githubusercontent.com/73948790/207422630-d25843dc-2eb1-42c4-83c2-3e88d4fef0a8.png)

The “free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

![image](https://user-images.githubusercontent.com/73948790/207422785-18bc25ae-4f81-463c-8cf7-0ad18c15a8ae.png)



## Heap

Presumably you mean heap from a memory allocation point of view, not from a data structure point of view (the term has multiple meanings).

A very simple explanation is that the heap is the portion of memory where dynamically allocated memory resides (i.e. memory allocated via malloc). Memory allocated from the heap will remain allocated until one of the following occurs:

The memory is free'd
The program terminates
If all references to allocated memory are lost (e.g. you don't store a pointer to it anymore), you have what is called a memory leak. This is where the memory has still been allocated, but you have no easy way of accessing it anymore. Leaked memory cannot be reclaimed for future memory allocations, but when the program ends the memory will be free'd up by the operating system.

Contrast this with stack memory which is where local variables (those defined within a method) live. Memory allocated on the stack generally only lives until the function returns (there are some exceptions to this, e.g. static local variables).

You can find more information about the heap in this article (https://en.wikipedia.org/wiki/Memory_management#HEAP).

## Structs

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

### Unlike an array, a structure can contain many different data types (int, float, char, etc.).

     // Create a structure called myStructure
    struct myStructure {
      int myNum;
      char myLetter;
    };

    int main() {
      // Create a structure variable of myStructure called s1
      struct myStructure s1;

      // Assign values to members of s1
      s1.myNum = 13;
      s1.myLetter = 'B';

      // Print values
      printf("My number: %d\n", s1.myNum);
      printf("My letter: %c\n", s1.myLetter);

      return 0;
    }



## Linked Lists



## Strings

Strings in C are arrays of chracters that should always end with a NULL chracter represented by '\0'.

![image](https://user-images.githubusercontent.com/73948790/207419313-9e0c60f2-dfa6-4a69-b165-6659a6e9c06a.png)
