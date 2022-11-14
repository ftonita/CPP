NAME = realtype

HEADERS = Base.hpp A.hpp B.hpp C.hpp

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

CC = c++

.PHONY:		all

all: $(HEADERS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
