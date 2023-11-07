# 
# EPITECH PROJECT, 2023
# Makefile
# File description:
# Makefile
#

NAME	=	my_project_name

SRC		=	main.c \

			SRC/ALGO/algo.c \
			SRC/PARSER/parser.c \
			SRC/error_handling.c \
			SRC/tools.c \
			SRC/init.c \

			LIB/READFILES/getline_reader.c \
			LIB/READFILES/stat_reader.c \

			LIB/PRINTF/flag_maj.c \
			LIB/PRINTF/flag_num_de_base.c \
			LIB/PRINTF/flag_pointeur.c \
			LIB/PRINTF/flag_strings.c \
			LIB/PRINTF/my_put_float.c \
			LIB/PRINTF/my_put_nbr.c \
			LIB/PRINTF/flag_supp.c \
			LIB/PRINTF/my_printf.c \
			LIB/PRINTF/my_putstr.c \
			LIB/PRINTF/flag_num.c \

			LIB/my_str_to_word_array.c \
			LIB/signed_int_to_str.c \
			LIB/split_string.c \
			LIB/is_existing.c \
			LIB/my_strncat.c \
			LIB/my_strncpy.c \
			LIB/my_strncmp.c \
			LIB/my_strcat.c \
			LIB/my_strcmp.c \
			LIB/my_strcpy.c \
			LIB/my_strlen.c \
			LIB/my_getnbr.c \
			LIB/array_tok.c \
			LIB/exitError.c \
			LIB/free_arr.c \
			LIB/is_alpha.c \
			LIB/arrlen.c \
			LIB/putarr.c \

OBJ		=	$(SRC:.o=.c)

all :
	@gcc -c -g -o $(NAME) $(SRC) -I./INCLUDE/

	@echo -e "                                                                                                   \n\n\n"
	@echo -e "_________________________________________________________________________________________________________"
	@echo -e "                                                                                                       \n"
	@echo -e "_________                       .__.__          __  .__                  ________                        "
	@echo -e "\_   ___ \  ____   _____ ______ |__|  | _____ _/  |_|__| ____   ____     \_____  \   ____   ____   ____  "
	@echo -e "/    \  \/ /  _ \ /     \\____ \|  |  | \__  \\   __\  |/  _ \ /    \     |    \  \ /  _ \ /    \_/ __ \ "
	@echo -e "\     \___|  <_> |  Y Y  \  |_> >  |  |__/ __ \|  | |  |  <_> |   |  \    |     `  |  <_> |   |  \  ___/ "
	@echo -e " \______  /\____/|__|_|  /   __/|__|____|____  /__| |__|\____/|___|  /   /_______  /\____/|___|  /\___  >"
	@echo -e "        \/             \/|__|                \/                    \/            \/            \/     \/ "
	@echo -e "_________________________________________________________________________________________________________"
	@echo -e                                                                                                     \n\n\n"

clean :
	@rm -rf $(OBJ)

	@echo -e "                                                                                                   \n\n\n"
	@echo -e "_________________________________________________________________________________________________________"
	@echo -e "                                                                                                       \n"
	@echo -e "__________                   __               __      _________ .__                                  .___"
	@echo -e "\______   \_______  ____    |__| ____   _____/  |_    \_   ___ \|  |   ____ _____    ____   ____   __| _/"
	@echo -e " |     ___/\_  __ \/  _ \   |  |/ __ \_/ ___\   __\   /    \  \/|  | _/ __ \\__  \  /    \_/ __ \ / __ | "
	@echo -e " |    |     |  | \|  <_> |  |  \  ___/\  \___|  |     \     \___|  |_\  ___/ / __ \|   |  \  ___// /_/ | "
	@echo -e " |____|     |__|   \____/\__|  |\___  >\___  >__|      \______  /____/\___  >____  /___|  /\___  >____ | "
	@echo -e "                        \______|    \/     \/                 \/          \/     \/     \/     \/     \/ "
	@echo -e "_________________________________________________________________________________________________________"
	@echo -e                                                                                                     \n\n\n"

fclean : clean
	@rm -rf $(NAME)
	@rm -rf vgcore.*
	@rm -rf coding-style-reports.log

	@echo -e "                                                                            \n\n\n"
	@echo -e "__________________________________________________________________________________"
	@echo -e "                                                                                \n"
	@echo -e "__________      .__.__       .___   ___________                               .___"
	@echo -e "\______   \__ __|__|  |    __| _/   \_   _____/___________    ______ ____   __| _/"
	@echo -e " |   __  _/  |  \  |  |   / __ |     |    __|_\_  __ \__  \  /  ___// __ \ / __ | "
	@echo -e " |  |__\  \  |  /  |  |__/ /_/ |     |        \|  | \// __ \_\___ \\  ___// /_/ | "
	@echo -e " |______  /____/|__|____/\____ |    /_______  /|__|  |____  /____  >\___  >____ | "
	@echo -e "        \/                    \/            \/            \/     \/     \/     \/ "
	@echo -e "__________________________________________________________________________________"
	@echo -e                                                                              \n\n\n"

re : fclean all

	@echo -e "                                                                                                           \n\n\n"
	@echo -e "_________________________________________________________________________________________________________________"
	@echo -e "                                                                                                               \n"
	@echo -e "__________      .__.__       .___  __________                                                 __             .___"
	@ech  -e "\______   \__ __|__|  |    __| _/  \______   \ ____   ____  ____   ____   ____   ____   _____/  |_  ____   __| _/"
	@echo -e " |  __   _/  |  \  |  |   / __ |    |       _// __ \_/ ___\/  _ \ /    \ /    \_/ __ \_/ ___\   __\/ __ \ / __ | "
	@echo -e " | |__\   \  |  /  |  |__/ /_/ |    |    |   \  ___/\  \__|  <_> |   |  \   |  \  ___/\  \___|  | \  ___// /_/ | "
	@echo -e " |______  /____/|__|____/\____ |    |____|_  /\___  >\___  >____/|___|  /___|  /\___  >\___  >__|  \___  >____ | "
	@echo -e "        \/                    \/           \/     \/     \/           \/     \/     \/     \/          \/     \/ "
	@echo -e "_________________________________________________________________________________________________________________"
	@echo -e                                                                                                             \n\n\n"

.PHONY : all clean fclean