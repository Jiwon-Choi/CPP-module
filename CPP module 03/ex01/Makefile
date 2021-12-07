TARGET	= ScavTrap

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -rf

SRC		= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp

OBJS	= $(SRC:.cpp=.o)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $(SRC)

all : $(TARGET)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : clean all

bonus :

.PHONY : all clean fclean re bonus
