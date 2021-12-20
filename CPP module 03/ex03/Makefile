TARGET	= DiamondTrap

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
RM		= rm -rf

SRC		= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp \
		  FragTrap.cpp \
		  DiamondTrap.cpp

OBJS	= $(SRC:.cpp=.o)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(TARGET)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : clean all

bonus :

.PHONY : all clean fclean re bonus
