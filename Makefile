# ******************************************************************************* #
#                                                                             	  #
#     Makefile                                                   ♥           	  #
#                                                                 ¨/\_/\ ♥    	  #
#     By: zkerriga                                                 >^,^<     	  #
#                                                                   / \     	  #
#     Created: 2020-05-08 13:22:30 by zkerriga                     (___)__  	  #
#     Updated: 2020-05-08 13:22:30 by zkerriga                              	  #
#                                                                             	  #
# ******************************************************************************* #

NAME = libgraphic_math.a
HEAD = libgraphic_math.h

SRC_DIR = src/
OBJ_DIR = bin/
HDR_DIR = ./

CC = gcc
FLAGS = -I$(HDR_DIR) -Wall -Wextra -Werror 

FILES = color_multi color_sum color_to_int fbetween maxf module normalize \
		rad_to_deg reverse_vec rotate_ray set_lookat vaddition vdot \
		vget vmulti vprod vset vsubtract

FILES.O = $(addprefix $(OBJ_DIR), $(FILES:=.o))

.PHONY: all
all: $(OBJ_DIR) $(NAME)
	@echo -e "\n\033[32m[+] Make completed!\033[0m"

$(NAME): $(FILES.O)
	ar rcs $(NAME) $?

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(FILES.O): $(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

.PHONY: so
so: fclean
	gcc -fPIC -c *.c
	gcc -shared -Wl,-soname,libgraphic_math.so -o libgraphic_math.so *.o
