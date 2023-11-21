##
## EPITECH PROJECT, 2023
## my_ls
## File description:
## Makefile
##

NAME	=	project_name

SRC		=	main.c \
			SRC/init.c \
			SRC/tools.c \
			SRC/ALGO/algo.c \
			SRC/PARSER/parser.c \
			SRC/error_handling.c \
			LIB/arrlen.c \
			LIB/putarr.c \
			LIB/free_arr.c \
			LIB/is_alpha.c \
			LIB/my_strcat.c \
			LIB/my_strcmp.c \
			LIB/my_strcpy.c \
			LIB/my_strdup.c \
			LIB/my_strlen.c \
			LIB/my_getnbr.c \
			LIB/array_tok.c \
			LIB/exitErr.c \
			LIB/my_strncat.c \
			LIB/my_strncpy.c \
			LIB/my_strncmp.c \
			LIB/is_existing.c \
			LIB/split_string.c \
			LIB/PRINTF/flag_maj.c \
			LIB/PRINTF/flag_num.c \
			LIB/PRINTF/flag_supp.c \
			LIB/PRINTF/my_printf.c \
			LIB/myStrToWordArray.c \
			LIB/PRINTF/my_putstr.c \
			LIB/PRINTF/my_putchar.c \
			LIB/PRINTF/my_put_nbr.c \
			LIB/signed_int_to_str.c \
			LIB/PRINTF/flag_strings.c \
			LIB/PRINTF/my_put_float.c \
			LIB/PRINTF/flag_pointeur.c \
			LIB/READFILES/stat_reader.c \
			LIB/PRINTF/flag_num_de_base.c \
			LIB/READFILES/getline_reader.c \

OBJ		 =	$(SRC:.c=.o)

MSG		 =	""

CFLAGS	+=	-g -I./INCLUDE

all :
	@clear
	@gcc -o $(NAME) $(SRC) $(CFLAGS)
	@mkdir BUILD_DIR/
	@mv $(OBJ) ./BUILD_DIR/
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "               _________                       .__.__          __  .__                  ________                        "
	@echo -e "               \_   ___ \  ____   _____ ______ |__|  | _____ _/  |_|__| ____   ____     \_____  \   ____   ____   ____  "
	@echo -e "               /    \  \/ /  _ \ /     \\____ \|  |  | \__  \\   __\  |/  _ \ /    \     |    \  \ /  _ \ /    \_/ __ \ "
	@echo -e "               \     \___|  <_> |  Y Y  \  |_> >  |  |__/ __ \|  | |  |  <_> |   |  \    |     `  |  <_> |   |  \  ___/ "
	@echo -e "                \______  /\____/|__|_|  /   __/|__|____|____  /__| |__|\____/|___|  /   /_______  /\____/|___|  /\___  >"
	@echo -e "                       \/             \/|__|                \/                    \/            \/            \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

clean :
	@clear
	@rm -rf BUILD_DIR/
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "               __________                   __               __      _________ .__                                  .___"
	@echo -e "               \______   \_______  ____    |__| ____   _____/  |_    \_   ___ \|  |   ____ _____    ____   ____   __| _/"
	@echo -e "                |     ___/\_  __ \/  _ \   |  |/ __ \_/ ___\   __\   /    \  \/|  | _/ __ \\__  \  /    \_/ __ \ / __ | "
	@echo -e "                |    |     |  | \|  <_> |  |  \  ___/\  \___|  |     \     \___|  |_\  ___/ / __ \|   |  \  ___// /_/ | "
	@echo -e "                |____|     |__|   \____/\__|  |\___  >\___  >__|      \______  /____/\___  >____  /___|  /\___  >____ | "
	@echo -e "                                       \______|    \/     \/                 \/          \/     \/     \/     \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

fclean :
	@clear
	@rm -rf BUILD_DIR/
	@rm $(NAME)
	@rm vgcore.*
	@rm coding-style-reports.log
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "                            __________      .__.__       .___   ___________                               .___"
	@echo -e "                            \______   \__ __|__|  |    __| _/   \_   _____/___________    ______ ____   __| _/"
	@echo -e "                             |   __  _/  |  \  |  |   / __ |     |    __|_\_  __ \__  \  /  ___// __ \ / __ | "
	@echo -e "                             |  |__\  \  |  /  |  |__/ /_/ |     |        \|  | \// __ \_\___ \\  ___// /_/ | "
	@echo -e "                             |______  /____/|__|____/\____ |    /_______  /|__|  |____  /____  >\___  >____ | "
	@echo -e "                                    \/                    \/            \/            \/     \/     \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

re :
	@clear
	@rm -rf BUILD_DIR/
	@rm $(NAME)
	@rm vgcore.*
	@rm coding-style-reports.log
	@gcc -o $(NAME) $(SRC) $(CFLAGS)
	@mkdir BUILD_DIR/
	@mv $(OBJ) ./BUILD_DIR/
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "               __________      .__.__       .___  __________                                                 __             .___"
	@echo -e "               \______   \__ __|__|  |    __| _/  \______   \ ____   ____  ____   ____   ____   ____   _____/  |_  ____   __| _/"
	@echo -e "                |  __   _/  |  \  |  |   / __ |    |       _// __ \_/ ___\/  _ \ /    \ /    \_/ __ \_/ ___\   __\/ __ \ / __ | "
	@echo -e "                | |__\   \  |  /  |  |__/ /_/ |    |    |   \  ___/\  \__|  <_> |   |  \   |  \  ___/\  \___|  | \  ___// /_/ | "
	@echo -e "                |______  /____/|__|____/\____ |    |____|_  /\___  >\___  >____/|___|  /___|  /\___  >\___  >__|  \___  >____ | "
	@echo -e "                       \/                    \/           \/     \/     \/           \/     \/     \/     \/          \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

cs:
	@clear
	@rm -rf BUILD_DIR/
	@rm $(NAME)
	@rm vgcore.*
	@rm coding-style-reports.log
	@coding-style . . > /dev/null/
	@echo -e "\n"
	@cat coding-style-reports.log
	@echo -e "\n"

commit:
	@rm -rf BUILD_DIR/
	@rm $(NAME)
	@rm vgcore.*
	@rm coding-style-reports.log
	@git add -A
	@read -p "Commit message [$(MSG)]: " NEW_MSG; \
	MSG="$${NEW_MSG:-$(MSG)}" && \
	git commit -m "$$MSG" && \
	git push origin main
	@clear
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "        _________ .__                                             _________                        .__  __             .___"
	@echo -e "        \_   ___ \|  |__ _____    ____    ____   ____   ______    \_   ___ \  ____   _____   _____ |__|/  |_  ____   __| _/"
	@echo    "        /    \  \/|  |  \\\\__  \  /    \  / ___\_/ __ \ /  ___/    /    \  \/ /  _ \ /     \ /     \|  \   __\/ __ \ / __ | "
	@echo -e "        \     \___|   Y  \/ __ \|   |  \/ /_/  >  ___/ \___ \     \     \___|  <_> |  Y Y  \  Y Y  \  ||  | \  ___// /_/ | "
	@echo -e "         \______  /___|  |____  /___|  /\___  / \___  >____  >     \______  /\____/|__|_|  /__|_|  /__||__|  \___  >____ | "
	@echo -e "                \/     \/     \/     \//_____/      \/     \/             \/             \/      \/              \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

.PHONY: all clean fclean re