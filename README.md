# PRiME_RTM_API

## Functions:

* RTM functions called by user/OS/supervisory process:

  See `prime_user.h`

* RTM functions called by applications:

  See `prime_app.h`
  
  `prime_app_t.h` contains associated type definitions

* Device functions called by RTM:

  See `prime_dev.h`
  
  `prime_dev_t.h` contains associated type definitions
  
`prime_t.h` contains system-wide type definitions

## Assumptions:

These APIs make the assumption that the RTM is a slave of the user and applications and that the devices are slaves of the RTM.
