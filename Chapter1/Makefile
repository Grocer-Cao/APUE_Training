
all: myls mycp

clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;

myls:
	gcc -o myls myls.c -l apue

mycp:
	gcc -o mycp mycp.c -l apue
