#ifndef PRIME_USER_H
#define PRIME_USER_H

#include "prime_t.h"
#include "sys/types.h"

// These are RTM functions that can be called by user (supervisory process)

// Update the relative importance of an application
// proc_id: Process ID of application
// weight: importance in range [0, prime_pos_inf], default 1
void prime_user_weight(pid_t proc_id, prime_cont_t weight);

#endif
