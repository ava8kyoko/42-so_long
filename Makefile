# Nom du Projet
NAME = so_long

# Flags
AR = ar
CC = gcc
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror -g

# Includes
LIBFT = includes/libft/libft.a
LIBFT_PATH = includes/libft/

LIBXFLAG = -framework OpenGl -framework Cocoa
MINILIBX = includes/mlx/minilibx_opengl/libmlx.a
MINILIBX_PATH = includes/mlx/minilibx_opengl/

# Sources files
S = srcs/
SRCS_FILES =	my_mlx_fonc.c so_long.c valid_file.c valid_map.c
SRCS = $(addprefix $S, $(SRCS_FILES))

# Objects conversion
O = objs/
OBJS= $(SRCS:$S%=$O%.o)
$O%.o: $S%
	@printf "$R■$W"
	@$(CC) $(CFLAGS) -c $< -o $@

# Main rule
all: signature init $(NAME)
	@echo "$G\n$(NAME) Compiled!$W"

# Initialise librairies and making objs folder
init:
	@mkdir -p $O
	@echo "$GLibrary's initialization$W"
	@echo "Creating Minilibx"
	@$(MAKE) -s -C $(MINILIBX_PATH)
	@$(MAKE) -s -C $(LIBFT_PATH)
	@printf "$CCreating $(NAME)\n$W"

# Creating  executable
$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(LIBFT) $(MINILIBX) $(CFLAGS) $(LIBXFLAG)

# Cleaning
REMOVE = rm -rf

clean:
	@$(REMOVE) $O
	@$(MAKE) -s clean -C $(LIBFT_PATH)

fclean: clean
	@$(REMOVE) $(NAME)
	@$(MAKE) -s fclean -C $(LIBFT_PATH)

re:	fclean all

# Utilities
COMMIT = $(shell date "+%d %B %T")
git:
	@git add .
	@git commit -m "$(COMMIT)"
	@git push

R = $(shell tput -Txterm setaf 1)
G = $(shell tput -Txterm setaf 2)
C = $(shell tput -Txterm setaf 6)
W = $(shell tput -Txterm setaf 7)

signature:
	@echo "\n$C+---+---+---+---+---+---+---+---+"
	@echo "$C|$G	$(NAME) by mchampag	$C|"
	@echo "$C+---+---+---+---+---+---+---+---+"

















# PROG	= so_long

# # FILES AND OBJECTS MANDATORY
# SRCS 	= srcs/main.c srcs/init_map.c srcs/valid_map.c
# OBJS 	= ${SRCS:.c=.o}
# MAIN	= srcs/main.c

# CC		=	gcc
# CFLAGS	=	-Wall -Wextra -Werror -g 
# HEADER	=	-Iincludes

# LIBXFLAG_MAC = -framework OpenGl -framework Cocoa
# MINILIBX_MAC = includes/minilibx_opengl/
# MINILIBX_PATH_MAC = includes/minilibx_opengl/

# # COLORS TO MAKE YOUR LIFE PRETTIER
# BLUE	=	\033[1;34m
# GREEN	=	\033[1;32m
# RED		=	\033[1;31m
# WHITE	=	\033[1;37m
# END		=	\033[0m

# .c.o:		%.o : %.c
# 			@gcc ${CFLAGS} ${LIBXFLAG_MAC} ${HEADER} -c $< -o $(<:.c=.o)

# all: 		${PROG}

# ${PROG}:	${OBJS}
# 			@echo "\n$(GREEN)---- $(BLUE)LIBFT $(GREEN)is compiled ---- $(END)"
# 			@$(CC) -o $@ $^ $(LIBFT) $(MINILIBX) $(CFLAGS) $(LIBXFLAG)

# 			@make re -C ./includes/libft 
# 			@$(CC) ${OBJS} -L ./includes/libft -l ft -o ${PROG}
# 			@echo "$(BLUE)Pipex $(GREEN)is compiled $(BLUE)(☞ﾟ∀ﾟ)☞ $(RED)♥$(END)\n"

# clean:
# 			@make clean -C ./includes/libft
# 			@rm -rf ${OBJS} 
# 			@echo "\n(⌐■_■)--︻╦╤─ - - - $(RED)objects are deleted.$(END)"

# fclean: 	clean
# 			@make fclean -C ./includes/libft
# 			@rm -f $(NAME)
# 			@rm -f ${PROG}
# 			@echo "(⌐■_■)--︻╦╤─ - - - $(RED)executive is deleted.$(END)\n"

# re:			fclean all

# re_bonus:	fclean bonus

# # execute:	./pipex file1.txt ls wc file2.txt && cat file2.txt

# valgrind:	
# 			valgrind --leak-check=full ./so_long file

# test:	
# 		@echo "--------------------"
# 		@echo "-- TESTS EXAMPLES --"
# 		@echo "--------------------"
# 		@echo "-- TEST 1 --"
# 		@echo "ls"
# 		@echo "-- TEST 2 --"
# 		@echo "ls -la"
# 		@echo "-- TEST 3 --"
# 		@echo "test with path : /bin/ls"
# 		@echo "--- TEST 4 ---"
# 		@echo "unset PATH"
# 		@echo "./a.out file1.txt "ls -la"  cat file2.txt"

# .PHONY: all clean fclean re re_bonus bonus
