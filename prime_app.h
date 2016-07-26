#ifndef PRIME_APP_H
#define PRIME_APP_H

#include <sys/types.h>
#include "prime_t.h"
#include "prime_app_t.h"

// These are RTM functions that can be called by OpenCL applications

// Register an application with RTM
// proc_id: Process ID of calling application
// Returns nothing
void prime_app_reg(pid_t proc_id);

// Deregister an application with RTM
// proc_id: Process ID of calling application
// Returns nothing
void prime_app_dereg(pid_t proc_id);

// Register an application-level knob with RTM
// proc_id: Process ID of calling application
// init: initial value
// min: minimum allowed value
// max: maximum allowed value
// Returns knob
prime_app_knob_disc_t* prime_app_knob_disc_reg(pid_t proc_id, prime_disc_t min, prime_disc_t max, prime_disc_t init);
prime_app_knob_cont_t* prime_app_knob_cont_reg(pid_t proc_id, prime_cont_t min, prime_cont_t max, prime_cont_t init);

// Update the minimum or maximum value of an application-level knob
// knob: knob
// [min: minimum allowed value]
// [max: maximum allowed value]
// Returns nothing
void prime_app_knob_disc_min(prime_app_knob_disc_t* knob, prime_disc_t min);
void prime_app_knob_disc_max(prime_app_knob_disc_t* knob, prime_disc_t max);
void prime_app_knob_cont_min(prime_app_knob_cont_t* knob, prime_cont_t min);
void prime_app_knob_cont_max(prime_app_knob_cont_t* knob, prime_cont_t max);

// Fetch the setting of an application-level knob from RTM. Application then applies the setting
// knob: knob
// Returns current value
prime_disc_t prime_app_knob_disc_get(prime_app_knob_disc_t* knob);
prime_cont_t prime_app_knob_cont_get(prime_app_knob_cont_t* knob);

// Deregister an application-level knob with RTM
// knob: knob
// Returns nothing
void prime_app_knob_disc_dereg(prime_app_knob_disc_t* knob);
void prime_app_knob_cont_dereg(prime_app_knob_cont_t* knob);

// Register an application-level monitor with RTM
// proc_id: Process ID of calling application
// min: minimum desired value
// max: maximum desired value
// weight: importance in range [0.0, PRIME_CONT_MAX], default 1.0
// Returns monitor
prime_app_mon_disc_t* prime_app_mon_disc_reg(pid_t proc_id, prime_disc_t min, prime_disc_t max, prime_cont_t weight);
prime_app_mon_cont_t* prime_app_mon_cont_reg(pid_t proc_id, prime_cont_t min, prime_cont_t max, prime_cont_t weight);

// Update the minimum value, maximum value or relative importance of an application-level monitor
// mon: monitor
// [min: minimum desired value]
// [max: maximum desired value]
// [weight: importance in range [0, PRIME_CONT_MAX], default 1]
// Returns nothing
void prime_app_mon_disc_min(prime_app_mon_disc_t* mon, prime_disc_t min);
void prime_app_mon_disc_max(prime_app_mon_cont_t* mon, prime_disc_t max);
void prime_app_mon_disc_weight(prime_app_mon_disc_t* mon, prime_cont_t weight);
void prime_app_mon_cont_min(prime_app_mon_cont_t* mon, prime_cont_t min);
void prime_app_mon_cont_max(prime_app_mon_cont_t* mon, prime_cont_t max);
void prime_app_mon_cont_weight(prime_app_mon_cont_t* mon, prime_cont_t weight);

// Update the value of an application-level monitor that RTM sees. RTM's objective is to keep val within [min, max]
// mon: monitor
// val: current value
// Returns nothing
void prime_app_mon_disc_set(prime_app_mon_disc_t* mon, prime_disc_t val);
void prime_app_mon_cont_set(prime_app_mon_cont_t* mon, prime_cont_t val);

// Deregister an application-level monitor with RTM
// mon: monitor
// Returns nothing
void prime_app_mon_disc_dereg(prime_app_mon_disc_t* mon);
void prime_app_mon_cont_dereg(prime_app_mon_cont_t* mon);
	
#endif
