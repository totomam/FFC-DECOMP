#include "ffc/types.h"

extern uint32_t func_020972cc(void);
extern void func_02097f24(void *obj);
extern int data_02144c24;
extern void *data_02144cf4;
extern void *data_02144d30;
extern void *data_02144e20;
extern void *data_02144e5c;

typedef struct {
    uint32_t a;
    uint8_t b;
} Loc;

void *func_0209746c(void *p)
{
    volatile Loc loc;
    int *cnt = &data_02144c24;

    loc.a = func_020972cc();
    loc.b = 1;

    cnt[6] = cnt[6] - 1;
    if (cnt[6] == 0) {
        func_02097f24(&data_02144cf4);
        func_02097f24(&data_02144d30);
        func_02097f24(&data_02144e20);
        ((void (**)(void *))data_02144e5c)[0](&data_02144e5c);
        ((void (**)(void *))data_02144cf4)[0](&data_02144cf4);
        ((void (**)(void *))data_02144d30)[0](&data_02144d30);
        ((void (**)(void *))data_02144e20)[0](&data_02144e20);
    }
    return p;
}
