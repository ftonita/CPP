NAME = diamondtrap

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

CC = c++

.PHONY:		all

all: $(HEADERS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
