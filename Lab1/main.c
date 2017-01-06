#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void signalHandler(int  signo) {
	if (signo  ==  SIGALRM) {
		printf ("Alarm\n");
		alarm (2); // Set up the next alarm
		return;
	}

	if (signo  ==  SIGINT) {
		printf ("CTRL+C pressed!\n");
		return;
	}

	if (signo  ==  SIGTSTP) {
		printf ("CTRL+Z pressed!\n");
		exit(0);
	}
}

int main(void) {
	if (signal(SIGALRM, signalHandler) ==  SIG_ERR ||
	        signal(SIGINT, signalHandler) ==  SIG_ERR ||
	        signal(SIGTSTP, signalHandler) ==  SIG_ERR) { //  register  the  signal  handler
		printf ("Failed to register an alarm handler");
		exit (1);
	}

	alarm (2); // Fire off the initial alarm

	while (1)
		sleep (10); // Wait for a signal
}
