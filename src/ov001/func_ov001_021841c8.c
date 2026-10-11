#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint8_t **recs;
} Owner;

extern Owner *func_ov000_02165744(void);
extern int32_t data_ov001_021955f8;
extern uint8_t data_ov001_021955fc[];

void func_ov001_021841c8(void) {
    Owner *o = func_ov000_02165744();
    int32_t i;
    if (o == 0) return;
    data_ov001_021955f8 = 0;
    i = 0;
    do {
        int32_t off = i * 4;
        uint8_t *src = *(uint8_t **)((uint8_t *)o->recs + off);
        uint8_t *dst;
        if (src == 0) return;
        dst = data_ov001_021955fc + off;
        i++;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        data_ov001_021955f8 = i;
    } while (i < 5);
}
