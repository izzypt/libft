SRCS			=	ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
					ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset \
					ft_strchr ft_strdup ft_calloc ft_substr ft_atoi ft_strjoin ft_strtrim ft_split \
					ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper \

OBJS			= $(SRCS:=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
					$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:			all clean fclean re