
//#include "switches.h"
#include "basic_types.h"

typedef ullint_t pkey_t;     // peano keys
typedef double_t pos_t;     // used for positions
typedef double_t mass_t;     // used for masses
typedef int_t    integertime_t;

#if ( IDS == LONG_IDS )      // used for IDs
typedef ullint_t myid_t;     
#else
typedef uint_t myid_t;
#endif

typedef double_t dynamic_t;  // used fo dynamical quantities
			     // like velocity and acceleration
