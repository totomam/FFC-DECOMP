#include "ffc/types.h"

typedef struct Inner { uint8_t pad[0x6c]; uint32_t f6c; } Inner;
typedef struct Outer { uint32_t pad; Inner *inner; } Outer;
typedef struct E { uint32_t w[6]; } E;

extern uint8_t data_020b2bb0[];
extern E data_02144828[];
extern Outer data_02141510;
extern uint32_t data_021447e0[];
extern int32_t data_02144804[];

extern int32_t func_020876c0(void *p);
extern void func_0208763c(void *p);
extern int32_t func_0208f9c4(int32_t a, int32_t b, int32_t c, void *d);
extern void func_02087678(void *p);

int32_t func_0208f918(int32_t a, int32_t b, int32_t c, void *d)
{
    int idx = 2;
    int32_t r;

    if (d != (void *)data_020b2bb0) {
        idx = 5;
    }

    if (func_020876c0(&data_02144828[idx]) == 0) {
        data_021447e0[idx] = data_02141510.inner->f6c;
        data_02144804[idx] = 1;
    } else {
      Inner *in = data_02141510.inner;
      uint32_t o = data_021447e0[idx];
      if (o == in->f6c) {
        data_02144804[idx]++;
      } else {
        func_0208763c(&data_02144828[idx]);
        data_021447e0[idx] = data_02141510.inner->f6c;
        data_02144804[idx] = 1;
      }
    }

    r = func_0208f9c4(a, b, c, d);

    if (--data_02144804[idx] == 0) {
        func_02087678(&data_02144828[idx]);
    }
    return r;
}
