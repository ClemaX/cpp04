NAME	=	tests

HDIR	=	.
SDIR	=	.
SRCS	=	$(addprefix $(SDIR)/,\
	main.cpp\
	AWeapon.cpp\
	Character.cpp\
	Enemy.cpp\
	PlasmaRifle.cpp\
	PowerFist.cpp\
	RadScorpion.cpp\
	SuperMutant.cpp\
)

CXX		=	clang++
CXXFLAGS=	-Wall -Wextra -Werror -Wpedantic -std=c++98

TRUTH	=	ref.log
OUTPUT	=	my.log

all:		$(NAME)

$(NAME):	$(SRCS)
	$(CXX) $(CXXFLAGS) -I$(HDIR) $^ -o $@

re: fclean all

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

test: all
	./$(NAME) > $(OUTPUT)
	diff $(OUTPUT) $(TRUTH)
