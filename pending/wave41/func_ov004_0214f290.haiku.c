#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;

extern uint32_t data_ov004_02159da0;
extern int32_t data_ov004_021583ec;
extern int32_t data_ov004_021583f4;
extern int32_t data_ov004_021583fc;
extern int32_t data_ov004_02158404;
extern int32_t data_ov004_0215840c;
extern int32_t data_ov004_02158414;
extern int32_t data_ov004_0215841c;
extern int32_t data_ov004_02158424;
extern int32_t data_ov004_0215842c;
extern int32_t data_ov004_02158434;
extern int32_t data_ov004_0215843c;
extern int32_t data_ov004_02158444;

Vec2 func_ov004_0214f290(int32_t a, int32_t b, int32_t idx, ...)
{
    int32_t *t;
    uint32_t d = data_ov004_02159da0;

    if ((d & 1) == 0) {
        data_ov004_021583ec = 1;
        ((int32_t *)&data_ov004_021583ec)[1] = 0;
        data_ov004_021583f4 = 0;
        ((int32_t *)&data_ov004_021583f4)[1] = 1;
        data_ov004_021583fc = -1;
        ((int32_t *)&data_ov004_021583fc)[1] = 1;
        data_ov004_02158404 = -1;
        ((int32_t *)&data_ov004_02158404)[1] = 0;
        data_ov004_0215840c = -1;
        ((int32_t *)&data_ov004_0215840c)[1] = -1;
        data_ov004_02158414 = 0;
        ((int32_t *)&data_ov004_02158414)[1] = -1;
        data_ov004_0215841c = 1;
        ((int32_t *)&data_ov004_0215841c)[1] = 0;
        data_ov004_02158424 = 1;
        ((int32_t *)&data_ov004_02158424)[1] = 1;
        data_ov004_0215842c = 0;
        ((int32_t *)&data_ov004_0215842c)[1] = 1;
        data_ov004_02158434 = -1;
        ((int32_t *)&data_ov004_02158434)[1] = 0;
        data_ov004_0215843c = 0;
        ((int32_t *)&data_ov004_0215843c)[1] = -1;
        data_ov004_02158444 = 1;
        ((int32_t *)&data_ov004_02158444)[1] = -1;
        data_ov004_02159da0 = d | 1;
    }

    t = (int32_t *)((char *)&data_ov004_021583ec + (b & 1) * 0x30 + idx * 8);
    return (Vec2){ a + t[0], b + t[1] };
}
