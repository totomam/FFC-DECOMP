#include "ffc/types.h"

typedef uint8_t *va_list;
typedef struct { uint32_t pad[3]; uint32_t c; } Cnt;
typedef struct Inner { uint8_t pad[0x6c]; uint32_t v; } Inner;
typedef struct Outer { uint32_t pad; Inner *p; } Outer;

extern uint8_t data_020b2bfc[];
extern uint8_t data_02144870[];
extern Outer data_02141510;
extern Cnt data_021447e0;
extern Cnt data_02144804;

extern int32_t func_02093b30(void *obj, int32_t x);
extern int32_t func_020876c0(void *obj);
extern void func_0208763c(void *obj);
extern int32_t func_020919e0(void);
extern int32_t func_02091420(void *fn, void *obj, int32_t p, va_list ap, int32_t zero);
extern void func_02087678(void *obj);

int32_t func_02091a24(int32_t p0, ...)
{
    int32_t ret;

    if (func_02093b30(data_020b2bfc, -1) >= 0) {
        return -1;
    }

    if (func_020876c0(data_02144870) == 0) {
        data_021447e0.c = data_02141510.p->v;
        data_02144804.c = 1;
    } else if (data_021447e0.c == data_02141510.p->v) {
        data_02144804.c = data_02144804.c + 1;
    } else {
        func_0208763c(data_02144870);
        data_021447e0.c = data_02141510.p->v;
        data_02144804.c = 1;
    }

    ret = func_02091420((void *)func_020919e0, data_020b2bfc, p0,
                        (va_list)((((uint32_t)&p0) & ~3u) + 4), 0);

    data_02144804.c = data_02144804.c - 1;
    if (data_02144804.c == 0) {
        func_02087678(data_02144870);
    }
    return ret;
}
