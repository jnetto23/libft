# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarque2 <jmarque2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 01:54:43 by jmarque2          #+#    #+#              #
#    Updated: 2021/08/30 03:19:40 by jmarque2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN = ./bin
OBJ = ./obj
SRC = ./src
TEST = ./test

FUNCTIONS = ft_isalpha.c
SRC_OBJECTS = $(FUNCTIONS:.c=.o)
TEST_OBJECTS = $(FUNCTIONS:.c=.test.o)

CC = clang
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

$(OBJ)/%.test.o: $(TEST)/%.test.c
	$(CC) $(CFLAGS) -c $< -I $(TEST)/*.h -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -I $(SRC)/*.h -o $@

all: mk_dir norma $(OBJ)/$(SRC_OBJECTS) $(OBJ)/$(TEST_OBJECTS)
	$(CC) $(CFLAGS) $(TEST)/main.c $(TEST)/test.c $(OBJ)/*.o -I $(TEST)/*.h -o $(BIN)/test

mk_dir:
	[ -d $(BIN) ] || mkdir $(BIN)
	[ -d $(OBJ) ] || mkdir $(OBJ)

norma:
	norminette $(SRC)/*.h $(SRC)/$(FUNCTIONS) \
	$(TEST)/*.h $(TEST)/$(FUNCTIONS:.c=.test.c) \
	$(TEST)/main.c $(TEST)/test.c

run:
	$(BIN)/test

clean:
	$(RM) $(BIN) $(OBJ)

re: clean all

.PHONY: all mk_dir norma run clean re
