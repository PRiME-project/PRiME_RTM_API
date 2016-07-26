#ifndev PRIME_DEV_H
#define PRIME_DEV_H

#include "prime_t.h"
#include "prime_dev_t.h"

// These are device functions that can be called by RTM

// Return number of device-level knobs, either discrete or continuous, that exist within this device
// Returns number of knobs
unsigned int prime_dev_knob_disc_size(void);
unsigned int prime_dev_knob_cont_size(void);

// Register all device-level knobs, either discrete or continuous, that exist within this device
// Returns array of knobs
prime_dev_knob_disc_t* prime_dev_knob_disc_reg(void);
prime_dev_knob_cont_t* prime_dev_knob_cont_reg(void);

// Return type (voltage, frequency, etc.), minimum value, maximum value or initial value of a device-level knob
// knob: knob
// Returns type, minimum allowed value, maximum allowed value or initial value
prime_dev_knob_type_t prime_dev_knob_disc_type(prime_dev_knob_disc_t* knob);
prime_disc_t prime_dev_knob_disc_min(prime_dev_knob_disc_t* knob);
prime_disc_t prime_dev_knob_disc_max(prime_dev_knob_disc_t* knob);
prime_disc_t prime_dev_knob_disc_init(prime_dev_knob_disc_t* knob);
prime_dev_knob_type_t prime_dev_knob_cont_type(prime_dev_knob_cont_t* knob);
prime_cont_t prime_dev_knob_cont_min(prime_dev_knob_cont_t* knob);
prime_cont_t prime_dev_knob_cont_max(prime_dev_knob_cont_t* knob);
prime_cont_t prime_dev_knob_cont_init(prime_dev_knob_cont_t* knob);

// Update the setting of a device-level knob
// knob: knob
// val: value
// Returns nothing
void prime_dev_knob_disc_set(prime_dev_knob_disc_t* knob, prime_disc_t val);
void prime_dev_knob_cont_set(prime_dev_knob_cont_t* knob, prime_cont_t val);

// Deregister all device-level knobs, either discrete or continuous, that exist within this device
// knobs: array of knobs
// Returns nothing
void prime_dev_knob_disc_dereg(prime_dev_knob_disc_t* knobs);
void prime_dev_knob_cont_dereg(prime_dev_knob_cont_t* knobs);

// Return number of device-level monitors, either discrete or continuous, that exist within this device
// Returns number of monitors
unsigned int prime_dev_mon_disc_size(void);
unsigned int prime_dev_mon_cont_size(void);

// Register all device-level monitors, either discrete or continuous, that exist within this device
// Returns array of monitors
prime_dev_mon_disc_t* prime_dev_mon_disc_reg(void);
prime_dev_mon_cont_t* prime_dev_mon_cont_reg(void);

// Return type (power, slack, etc.) of a device-level monitor
// mon: mon
// Returns type
prime_dev_mon_type_t prime_dev_mon_disc_type(prime_dev_mon_disc_t* mon);
prime_dev_mon_type_t prime_dev_mon_cont_type(prime_dev_mon_cont_t* mon);

// Fetch the setting of a device-level monitor
// mon: monitor
// Returns value
prime_disc_t prime_dev_mon_disc_get(prime_dev_mon_disc_t* mon);
prime_cont_t prime_dev_mon_cont_get(prime_dev_mon_cont_t* mon);

// Deregister all device-level monitors, either discrete or continuous, that exist within this device
// mons: array of monitors
// Returns nothing
void prime_dev_mon_disc_dereg(prime_dev_mon_disc_t* mons);
void prime_dev_mon_cont_dereg(prime_dev_mon_cont_t* mons);

#endif
