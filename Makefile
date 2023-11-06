# 
# EPITECH PROJECT, 2023
# main.c
# File description:
# main
#

NAME	=	my_project

SRC		=	main.c \
			SRC/*.c \
			LIB/ *.c \

OBJ		=	$(SRC:.o=.c)

all :
	@gcc -c -g -o $(NAME) $(SRC) -I./INCLUDE/
	@echo "Compiling Done"

clean :
	@rm -rf $(OBJ)
	@echo "Project Cleaned"

fclean : clean
	@rm -rf $(NAME)
	@rm -rf vgcore.*
	@rm -rf coding-style-reports.log
	@echo "Build Erased"

re : fclean all
	@echo "Build Reconnected"

.PHONY : all clean fclean