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

/* Celeste */
int int_celeste_event(void *a, char *b, int c, int *d) {
	b = "event:/env/amb/worldmap\0";
	*d = 24;
	return 0;
}
