SRCS	=	main.cpp 

OBJS	=	$(SRCS:.cpp=.o)

INC		=	-I/Replace.hpp

NAME	=	replace
CC		=	clang++
CFLAGS	=	#-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Replace.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
