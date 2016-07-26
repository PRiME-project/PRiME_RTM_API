#ifndef PRIME_DEV_T_H
#define PRIME_DEV_T_H

#include "prime_t.h"

// These are device-level type definitions

// Available types of device-level knob
typedef enum prime_dev_knob_type_t {PRIME_VOLT, PRIME_FREQ};

// Available types of device-level monitor
typedef enum prime_dev_mon_type_t {PRIME_SLACK, PRIME_POW};

// Device-level continuous knob container
typedef struct prime_dev_knob_disc_t {
	unsigned int id;
	prime_dev_knob_type_t type;
	prime_disc_t min;
	prime_disc_t max;
	prime_disc_t val;
} prime_dev_knob_disc_t;

// Device-level continuous knob container
typedef struct prime_dev_knob_cont_t {
	unsigned int id;
	prime_dev_knob_type_t type;
	prime_cont_t min;
	prime_cont_t max;
	prime_cont_t val;
} prime_dev_knob_cont_t;

// Device-level discrete monitor container
typedef struct prime_dev_mon_disc_t {
	unsigned int id;
	prime_dev_mon_type_t type;
	prime_disc_t val;
} prime_dev_mon_disc_t;

// Device-level continuous monitor container
typedef struct prime_dev_mon_cont_t {
	unsigned int id;
	prime_dev_mon_type_t type;
	prime_cont_t val;
} prime_dev_mon_cont_t;

#endif
