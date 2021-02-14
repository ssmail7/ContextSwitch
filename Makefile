.PHONY: all runsc runcs clean

all: runsc runcs

runsc: system_call.c
	gcc -o runsc system_call.c

runcs: context_switch.c
	gcc -o runcs context_switch.c

clean:
	rm runsc runcs