# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:52:14 by bmuni             #+#    #+#              #
#    Updated: 2023/03/25 19:53:38 by bmuni            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re
