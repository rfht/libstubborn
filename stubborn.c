#include <stddef.h>

/* int return value */
int int_zero() {
	return 0;
}
int int_one() {
	return 1;
}

/* string return value */
char *string_empty() {
	return "";
}

/* pointer return value */
void *ptr_null() {
	return NULL;
}

/* Celeste */
int int_celeste_event(void *a, char *b, int c, int *d) {
	b = "\0";
	*d = 1;
	return 0;
}
