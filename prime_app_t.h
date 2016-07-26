#ifndef PRIME_APP_T_H
#define PRIME_APP_T_H

#include "prime_t.h"

// These are application-level type definitions

// Application-level discrete knob container
typedef struct prime_app_knob_disc_t {
	unsigned int id;
	prime_disc_t min;
	prime_disc_t max;
	prime_disc_t val;
} prime_app_knob_disc_t;

// Application-level continuous knob container
typedef struct prime_app_knob_cont_t {
	unsigned int id;
	prime_cont_t min;
	prime_cont_t max;
	prime_cont_t val;
} prime_app_knob_cont_t;

// Application-level discrete monitor container
typedef struct prime_app_mon_disc_t {
	unsigned int id;
	prime_disc_t min;
	prime_disc_t max;
	prime_disc_t val;
	prime_cont_t weight;
} prime_app_mon_disc_t;

// Application-level continuous monitor container
typedef struct prime_app_mon_cont_t {
	unsigned int id;
	prime_cont_t min;
	prime_cont_t max;
	prime_cont_t val;
	prime_cont_t weight;
} prime_app_mon_cont_t;

#endif
