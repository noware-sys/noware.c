#pragma once

#include <stdbool.h>

struct array
{
	//content;
};

// Initialize an array structure:
const bool array_init (const array *);
// Finalize an array structure:
const bool array_fin (const array *);

// Getters:
const void * array_get (const array *, const char *);
const bool array_exist (const array *);
const unsigned int array_size (const array *);
const bool array_empty (const array *);
const bool array_full (const array *);
// Setters:
const bool array_set (const array *, const const char *, void *);
const bool array_remove (const array *);
const bool array_clear (const array *);
