# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 17:31:52 by atoof             #+#    #+#              #
#    Updated: 2023/04/11 17:31:53 by atoof            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = algorithm.c create_node.c ft_check.c helper_functions.c \
	ft_init.c movements.c pop_push.c push_swap.c sort_three.c \
	ft_atol.c sort_four.c sort_five.c sort.c
OBJ = $(SRC:.c=.o)   # Object files
HEADER = push_swap.h
LIBFT = ./libft/libft.a
FLAGS = -Wall -Werror -Wextra

# ANSI escape sequences for text formatting
BOLD = \033[1m
GREEN = \033[0;32m
YELLOW = \033[0;33m
CYAN = \033[0;36m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)$(BOLD)Compiling $(NAME)$(NC)"
	@make -C ./libft
	@cc $(FLAGS) $(OBJ) -I$(HEADER) $(LIBFT) -o $@
	@echo "$(GREEN)$(BOLD)$(NAME) successfully compiled!$(NC)"

%.o: %.c
	@cc $(FLAGS) -I$(HEADER) -c $< -o $@

clean:
	@echo "$(CYAN)$(BOLD)Cleaning object files$(NC)"
	@make clean -C ./libft
	@/bin/rm -f $(OBJ)

fclean: clean
	@echo "$(CYAN)$(BOLD)Cleaning $(NAME)$(NC)"
	@make fclean -C ./libft
	@/bin/rm -f $(NAME)
	@echo "$(GREEN)$(BOLD)$(NAME) successfully cleaned!$(NC)"

re: fclean all
