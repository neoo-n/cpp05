NAME	=	intern
SRCS	=	$(addprefix src/, main.cpp Bureaucrat.cpp AForm.cpp\
				PresidentialPardonForm.cpp RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp Intern.cpp)
OBJS	=	${SRCS:src/%.cpp=${OBJDIR}/%.o}
OBJDIR	=	obj
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

# Colors and style
END		:= \033[0m
WHITE	:= \033[1;37m
NC		:= \033[0m
RED		:= \033[0;31m
PINK	:= \033[1;35m
GREEN	:= \033[0;32m
BOLD	:= \033[1m
L_PURPLE:= \033[38;5;55m
YELLOW	:= \033[0;33m
BLUE	:= \033[34m

 # Rules
all:	${NAME} header

header:
	@echo "$(L_PURPLE)"
	@echo "   _     _      _     _      _     _ 05"
	@echo "  (c).-.(c)    (c).-.(c)    (c).-.(c)  "
	@echo "   / ._. \      / ._. \      / ._. \   "
	@echo " __\( Y )/__  __\( Y )/__  __\( Y )/__ "
	@echo "(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)"
	@echo "   || C ||      || P ||      || P ||   "
	@echo " _.' \`-' '._  _.' \`-' '._  _.' \`-' '._ "
	@echo "(.-./\`-'\.-.)(.-./\`-'\.-.)(.-./\`-'\.-.)"
	@echo " \`-'     \`-'  \`-'     \`-'  \`-'     \`-' "
	@echo "$(GREEN)"
	@echo "${NAME} is ready !"
	@echo "$(END)"	

${NAME}:	${OBJS}
	@echo -n "${BLUE}"
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo -n "${END}"

${OBJDIR}/%.o: src/%.cpp | ${OBJDIR}
	@echo -n "${BLUE}"
	${CC} ${CFLAGS} -c -o $@ $<
	@echo -n "${END}"

${OBJDIR}:
	mkdir -p ${OBJDIR}

clean:
	@echo -n "${RED}"
	rm -rf ${OBJDIR}
	@echo -n "${END}"

fclean: clean
	@echo -n "${RED}"
	rm -f ${NAME}
	@echo -n "${END}"

re: fclean all

.PHONY: all clean fclean re header