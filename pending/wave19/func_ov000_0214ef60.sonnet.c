#include "ffc/types.h"
extern uint32_t func_ov000_0214e984(void);
uint32_t func_ov000_0214ef60(void){ uint32_t x = func_ov000_0214e984(); uint32_t t = ((x >> 24) & 0xff) << 24; return (t >> 24) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | ((x << 24)&0xff000000); }
