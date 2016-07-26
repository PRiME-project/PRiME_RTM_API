#ifndef PRIME_T_H
#define PRIME_T_H

#include <limits.h>
#include <math.h>

// These are system-wide type definitions

// Numeric types
typedef signed int prime_disc_t;
typedef float prime_cont_t;

// Min and max limits
static const prime_disc_t PRIME_DISC_MIN = INT_MIN;
static const prime_disc_t PRIME_DISC_MAX = INT_MAX;
static const prime_cont_t PRIME_CONT_MIN = -INFINITY;
static const prime_cont_t PRIME_CONT_MAX = INFINITY;

#endif
