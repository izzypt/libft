# libft
libft exercises for 42 Lisbon

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
  
In the second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form.

  - ft_substr
   ```
    Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
    Parameters: 
              s: The string from which to create the substring.
              start: The start index of the substring in the string ’s’.
              len: The maximum length of the substring.
    Return: value The substring. NULL if the allocation fails.
    External functs: malloc
    Description :  Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
   ```
  - ft_strjoin
   ```
    Prototype: char *ft_strjoin(char const *s1, char const *s2);
    Parameters: 
      s1: The prefix string.
      s2: The suffix string.
    Return: The new string. NULL if the allocation fails.
    External functs: malloc
    Description : Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
    ```
  - ft_strtrim
  - ft_split
  - ft_itoa
  - ft_strmapi
  - ft_striteri
  - ft_putchar_fd
  - ft_putstr_fd
  - ft_putendl_fd
  - ft_putnbr_fd
