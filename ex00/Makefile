# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 12:28:01 by lanton-m          #+#    #+#              #
#    Updated: 2026/04/21 12:28:01 by lanton-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = executable
CXX = c++
FLAGS = -Werror -Wextra -Wall -std=c++98
SRCS = Fixed.cpp main.cpp
HDRS = Fixed.hpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HDRS)
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all