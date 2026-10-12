#include "ffc/types.h"

extern uint8_t *func_0207a9b0(int idx);
extern int func_0207ac88(int a, uint32_t b, void *c, uint8_t *d, int e);
extern void func_0207bd2c(uint8_t *p);
extern void func_0207bf34(void);
extern uint8_t data_0213f080[];

int func_0207b788(int param) {
  int i;
  for (i = 0; i < 4; i++) {
    uint8_t *base = data_0213f080 + i * 0x17c;
    uint8_t *p = func_0207a9b0(i);
    if (p != 0) {
      int j;
      base[0x12c] = p[0];
      for (j = 0; j < p[0]; j++) {
        base[0x12e + j] = p[j + 1];
      }
      if (param != 0) {
        uint32_t n = base[0x12c] << 11;
        int res = func_0207ac88(param, n, (void *)func_0207bf34, base, 0);
        if (res == 0) {
          return 0;
        }
        func_0207bd2c(base);
        *(int *)(base + 0x134) = res;
        *(uint32_t *)(base + 0x138) = n;
      }
    }
  }
  return 1;
}
