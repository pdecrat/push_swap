NAME = push_swap
FLAGS = -Werror -Wextra -Wall

SRC = main.c \
	  ft_init_piles.c \
	  ft_pile_new.c \
	  ft_pile_add.c \
	  ft_put_pile.c \
	  ft_swap.c \
	  ft_push.c \
	  ft_rotate.c \
	  ft_rev_rotate.c \
	  ft_solve.c \
	  ft_is_solved_a.c \
	  ft_is_solved_b.c \
	  ft_get_median.c \
	  ft_split.c \
	  ft_is_split.c \
	  ft_get_last.c \
	  ft_order.c \
	  ft_b_moves.c \
	  ft_a_moves.c \
	  ft_both_moves.c \
	ft_extremities.c

INCLUDES = push_swap.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	make -C ./libft
	gcc $(FLAGS) -c $(SRC) $(INCLUDES) -L ./libft/ -lft -I libft/
	gcc $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES) -L ./libft -lft -I libft/

clean :
	make -C ./libft clean
	rm -rf $(OBJ)

fclean : clean
	make -C ./libft fclean
	rm -rf $(NAME)

re : fclean all
