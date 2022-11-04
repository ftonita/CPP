NAME = polymorphism

HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

CC = c++

.PHONY:		all

all: $(HEADERS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
