all: progTemp

progTemp: main.o temp_api.o
	gcc -o progTemp main.o temp_api.o
main.o: main.c temp_api.h
	gcc -c -o main.o main.c
temp_api.o: temp_api.c temp_api.h
	gcc -c -o temp_api.o temp_api.c
clean:
	rm -rf *.o progTemp