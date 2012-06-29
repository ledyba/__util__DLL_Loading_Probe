all: probe.exe

probe.exe:
	gcc -o probe.exe -g3 -O0 probe.c
