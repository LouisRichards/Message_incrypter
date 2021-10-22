#
# In order to execute this "Makefile" just type "make"
#

OBJS	= main.o cesar.o vigenere.o convertirAccent.o verificationAlphanumerique.o viderBuffer.o
SOURCE	= main.c cesar.c vigenere.c convertirAccent.c verificationAlphanumerique.c viderBuffer.c
HEADER	= cesar.h vigenere.h convertirAccent.h verificationAlphanumerique.h viderBuffer.h
OUT	= main
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 
# -g option enables debugging mode 
# -c flag generates object code for separate files


all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)


# create/compile the individual files >>separately<<
main.o: main.c
	$(CC) $(FLAGS) main.c 

cesar.o: cesar.c
	$(CC) $(FLAGS) cesar.c 

vigenere.o: vigenere.c
	$(CC) $(FLAGS) vigenere.c 

convertirAccent.o: convertirAccent.c
	$(CC) $(FLAGS) convertirAccent.c 

verificationAlphanumerique.o: verificationAlphanumerique.c
	$(CC) $(FLAGS) verificationAlphanumerique.c 

viderBuffer.o: viderBuffer.c
	$(CC) $(FLAGS) viderBuffer.c 


# clean house
clean:
	rm -f $(OBJS) resultat.txt $(OUT)