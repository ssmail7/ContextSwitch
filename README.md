# ContextSwitch

For a detailed description of this project, please refer to Project 1 - Syscalls Measurement.pdf

HOW TO COMPILE

A. To compile programs using Makefile (from Terminal):
	From the directory containing Makefile, system_call.c, & context_switch.c:
		Type "make"
	(** Makefile will compile BOTH system_call.c & context_switch.c **)

B. To compile programs manually (from Terminal):

	For system_call.c:
		Type "gcc -o runsc system_call.c"

	For context_switch.c:
		Type "gcc -o runcs context_switch.c"


HOW TO RUN

Once the files have been compiled,

	For runsc:
		Type "./runsc"

	For runcs:
		Type "./runcs"


HOW TO CLEAN (Remove runsc & runcs)

	From the directory containing Makefile, runsc, & runcs:
		Type "make clean"
	(** Makefile will remove BOTH runsc & runcs **)
