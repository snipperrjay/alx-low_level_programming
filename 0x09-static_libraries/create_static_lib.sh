gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

ar -rc libmy.a *.o

ranlib libmy.a
