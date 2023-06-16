# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bianca <bianca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:50:27 by bmuni             #+#    #+#              #
#    Updated: 2023/06/16 14:55:41 by bianca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PhoneBook

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 PhoneBook.cpp main.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re
