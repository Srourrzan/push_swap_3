# -*- MakeFile -*-

TARGET = push_swap
SRCS = main.c linked_list.c info_utils.c display_utils.c std_utils.c stack_utils.c \
		push_util.c swap_utils.c sort_utils.c rotate_util.c small_sort.c
OBJ_DIR = obj

OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

test:
	@echo $(OBJS)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	
re: fclean all

fclean: clean
	rm -f $(TARGET)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJ_DIR)

.PHONY: all clean fclean re