TARGET	= phonebook

CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -rf

SRC		= Contact.cpp \
		  main.cpp \
		  PhoneBook.cpp

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
