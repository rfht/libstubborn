/*
 * Copyright (c) 2020 Thomas Frohwein
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <stddef.h>
#include <stdlib.h>

/* int return value */
int int_0() { return 0; }
int int_1() { return 1; }

/* string return value */
char *string_empty() { return ""; }

/* pointer return value */
void *ptr_null() { return NULL; }
void *ptr_zeroed() { return calloc(1024, sizeof(int)); }

/* Celeste */
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
