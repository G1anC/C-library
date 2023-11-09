##
## EPITECH PROJECT, 2023
## my_ls
## File description:
## Makefile
##

NAME	=	project_name

SRC		=	PRINTF/flag_maj.c \
			PRINTF/flag_num_de_base.c \
			PRINTF/flag_num.c \
			PRINTF/flag_strings.c \
			PRINTF/flag_supp.c \
			PRINTF/my_printf.c \
			PRINTF/my_put_nbr.c \
			PRINTF/my_put_float.c \
			exit_error.c \
			is_existing.c \
			is_printable.c \
			my_getnbr.c \
			PRINTF/my_putstr.c \
			my_str_to_word_array.c \
			my_strlen.c \
			my_strcat.c \
			arrlen.c \
			my_revstr.c \
			my_revarr.c \
			my_strcmp.c \
			my_strcpy.c \
			my_strdup.c \
			my_strncat.c \
			my_strncmp.c \
			my_strncpy.c \
			putarray.c \
			split_string.c \
			main.c

OBJ		 =	$(SRC:.c=.o)

all: $(OBJ)
	@clear
	@gcc -g -o $(NAME) $(SRC) -I./include
	@echo -e "\n\n"
	@echo -e "____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"
	@echo -e "\t    _________                       .__.__          __  .__                  ________                        "
	@echo -e "\t    \_   ___ \  ____   _____ ______ |__|  | _____ _/  |_|__| ____   ____     \_____  \   ____   ____   ____  "
	@echo -e "\t    /    \  \/ /  _ \ /     \_____ \|  |  | \__  \_   __\  |/  _ \ /    \     ||   \  \ /  _ \ /    \_/ __ \ "
	@echo -e "\t    \     \___|  <_> |  Y Y  \  |_> >  |  |__/ __ \|  | |  |  <_> |   |  \    | \__|   |  <_> |   |  \  ___/ "
	@echo -e "\t     \______  /\____/|__|_|  /   __/|__|____|____  /__| |__|\____/|___|  /   /_______  /\____/|___|  /\___  >"
	@echo -e "\t            \/             \/|__|                \/                    \/            \/            \/     \/ "
	@echo -e "\n\n\n"
	@echo -e "____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"
clean:
	@rm -f $(OBJ) > /dev/null

fclean:	clean
	@rm -f $(NAME) > /dev/null
	@rm -f vgcore.* > /dev/null

re:	fclean all

.PHONY:	all clean fclean re

cs: fclean
	@coding-style . .
	