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
    int32_t *cnt;
    int32_t i;
    uint8_t *src;
    uint8_t *dst;
    uint8_t c;

    if (o == 0) {
        return;
    }
    cnt = &data_ov001_021955f8;
    *cnt = 0;
    i = 0;
    do {
        src = o->recs[i];
        if (src == 0) {
            return;
        }
        c = src[0];
        dst = data_ov001_021955fc + i * 4;
        i++;
        dst[0] = c;
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        *cnt = i;
    } while (i < 5);
}
