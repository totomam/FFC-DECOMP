#include "ffc/types.h"

extern uint32_t func_ov001_02186c70(void *p, uint32_t w, uint16_t h);
extern void func_ov001_02186ce4(void *p);

typedef struct {
    uint16_t h;
    uint32_t w;
} Pair;

uint32_t func_ov001_02187f88(void *p, uint8_t *src, int len) {
    Pair s;
    uint8_t *wb;
    uint8_t *hb;
    uint32_t r;

    if (len < 6) {
        return 4;
    }
    wb = (uint8_t *)&s.w;
    wb[0] = src[0];
    wb[1] = src[1];
    wb[2] = src[2];
    wb[3] = src[3];
    hb = (uint8_t *)&s.h;
    hb[0] = src[4];
    hb[1] = src[5];
    r = func_ov001_02186c70(p, s.w, s.h);
    if (r == 0xFFFFFFFF) {
        return 0;
    }
    func_ov001_02186ce4(p);
    return 0;
}
