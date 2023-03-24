// Променете makefile-а от предходната задача така че да има два target-a:
// един по подразбиране, който компилира програмата в .exe и clean target,
// който изтрива .ехе файла.

all: default

default:
	gcc -o program.exe program.c

clean:
	rm -f program.exe