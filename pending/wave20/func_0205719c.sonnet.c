#include "ffc/types.h"
extern uint8_t data_020b0c34[];
typedef struct { uint32_t a; uint32_t b; } S;
void func_0205719c(uint8_t *p, S s) {
  uint32_t *w = (uint32_t *)p;
  uint32_t z = 0;
  uint32_t v = w[3] & ~0xffu;
  w[7] = z - 1;
  w[9] = z - 1;
  w[0] = (uint32_t)data_020b0c34;
  w[3] = v;
  w[14] = s.a;
  p[0x15] = z;
  p[0x13] = z;
  p[0x14] = z;
  w[11] = 1;
  w[12] = z;
  w[15] = s.b;
  p[0x15] = 1;
}
