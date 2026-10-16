#include "ffc/types.h"
extern uint32_t data_ov006_021ba49c[];
extern uint32_t func_ov006_0219ed24(int a, int b, int c, int d, void *e);
#define f func_ov006_0219ed24
uint8_t func_ov006_0219ecfc(int a, int b) { uint8_t r = f(-1,a,b,0,data_ov006_021ba49c); return r ^ 0xFF; }
