#include <stddef.h>

/* int return value */
int int_0() { return 0; }
int int_1() { return 1; }

/* string return value */
char *string_empty() { return ""; }

/* pointer return value */
void *ptr_null() { return NULL; }

/* application-specific functions
 * Celeste */
int int_celeste_event(void *a, char *b, int c, int *d) {
	b = "\0";
	*d = 1;
	return 0;
}
/* Full Metal Furies */
int int_fmf_getversion(void *a, unsigned int *b) {
	// hex for 11002
	*b = 69634;
	return 0;
}
