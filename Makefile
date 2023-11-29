##
## EPITECH PROJECT, 2023
## my_ls
## File description:
## Makefile
##

BIN 	=	project_BIN

SRC		=	$(shell find ./ -name *.c)

OBJ		=	$(SRC:.c=.o)

MSG		=	""

CFLAGS	=  -I./$(INCLUDE_DIR) -Wall -Wextra -Werror -g -lm

INCLUDE_DIR = INCLUDE/

BUILD_DIR = BUILD/

all :
	@clear
	@gcc -o $(BIN) $(SRC) $(CFLAGS)
	@mkdir $(BUILD_DIR)
	@mv $(OBJ) ./$(BUILD_DIR)
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
	@rm -rf $(BUILD_DIR)
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
	@rm -rf $(BUILD_DIR)
	@rm $(BIN)
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
	@rm -rf $(BUILD_DIR)
	@rm $(BIN)
	@rm vgcore.*
	@rm coding-style-reports.log
	@gcc -o $(BIN) $(SRC) $(CFLAGS)
	@mkdir $(BUILD_DIR)
	@mv $(OBJ) ./$(BUILD_DIR)
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "          __________      .__.__       .___  __________                                                 __             .___"
	@echo -e "          \______   \__ __|__|  |    __| _/  \______   \ ____   ____  ____   ____   ____   ____   _____/  |_  ____   __| _/"
	@echo -e "           |  __   _/  |  \  |  |   / __ |    |       _// __ \_/ ___\/  _ \ /    \ /    \_/ __ \_/ ___\   __\/ __ \ / __ | "
	@echo -e "           | |__\   \  |  /  |  |__/ /_/ |    |    |   \  ___/\  \__|  <_> |   |  \   |  \  ___/\  \___|  | \  ___// /_/ | "
	@echo -e "           |______  /____/|__|____/\____ |    |____|_  /\___  >\___  >____/|___|  /___|  /\___  >\___  >__|  \___  >____ | "
	@echo -e "                  \/                    \/           \/     \/     \/           \/     \/     \/     \/          \/     \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n\n"

cs:
	@clear
	@rm -rf $(BUILD_DIR)
	@rm $(BIN)
	@rm vgcore.*
	@rm coding-style-reports.log
	@coding-style . . > /dev/null/
	@echo -e "\n\n\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n"
	@echo -e "                   _________            .___.__                             _________ __          .__          "
	@echo -e "                   \_   ___ \  ____   __| _/|__| ____    ____              /   _____//  |_ ___.__.|  |   ____  "
	@echo -e "                   /    \  \/ /  _ \ / __ | |  |/    \  / ___\    ______   \_____  \\   __<   |  ||  | _/ __ \ "
	@echo -e "                   \     \___|  <_> | /_/ | |  |   |  \/ /_/  >  /_____/   /        \|  |  \___  ||  |_\  ___/ "
	@echo -e "                    \______  /\____/\____ | |__|___|  /\___  /            /_______  /|__|  / ____||____/\___  >"
	@echo -e "                           \/            \/         \//_____/                     \/       \/               \/ "
	@echo -e "\n"
	@echo -e "_____________________________________________________________________________________________________________________________________"
	@echo -e "\n\n"
	@cat coding-style-reports.log
	@echo -e "\n\n"

commit:
	@rm -rf $(BUILD_DIR)
	@rm $(BIN)
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

.PHONY: all clean fclean re cs commit
