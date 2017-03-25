#pragma once

#include <stdbool.h>

// A textual string of characters:
struct text
{
	//text * this;
	//const text (* sub) (const text *, const int, const int);
	struct array content;
};

// Initialize a text structure:
const bool text_init (const text *);
// Finalize a text structure:
const bool text_fin (const text *);
// Substring:
const text text_sub (const text *, const int, const int);
