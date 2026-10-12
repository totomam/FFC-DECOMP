#include "ffc/types.h"

typedef struct {
    uint8_t *base;
    uint32_t pad4;
    int32_t len;
    int32_t off;
} S_ov001_02178804;

extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t n);
extern int32_t func_ov001_0217ed8c(uint8_t *base, uint8_t *fmt, uint8_t *buf, uint32_t n);
extern uint32_t func_02093b18(uint8_t *buf);
extern uint8_t data_ov001_02190690[];
extern uint8_t data_ov001_02190698[];
extern uint8_t data_ov001_0219069c[];

int func_ov001_02178804(int a0, S_ov001_02178804 *s, uint32_t *outp, uint32_t *v1, uint32_t *v2)
{
    uint8_t buf[16];
    uint8_t *p;
    uint32_t val;
    uint32_t pos;

    *outp = 0;
    if (s->len < 5) {
        return 0;
    }
    p = func_02092a2c(s->base, 10);
    if (p != 0) {
        if (func_02092a04(p - 5, data_ov001_02190690, 5) != 0) {
            return 3;
        }
        *p = 0;
        if (func_ov001_0217ed8c(s->base, data_ov001_02190698, buf, 16) == 0) {
            return 3;
        }
        *v1 = func_02093b18(buf);
        if (func_ov001_0217ed8c(s->base, data_ov001_0219069c, buf, 16) == 0) {
            return 3;
        }
        val = func_02093b18(buf);
        pos = val + 1;
        if (s->len > (int32_t)(pos + (uint32_t)(p - s->base))) {
            if (*(int8_t *)(p + pos) != 0) {
                return 3;
            }
            *outp = (uint32_t)(p + 1);
            *v2 = val;
            s->off = (int32_t)(p - s->base) + (int32_t)pos + 1;
        } else {
            *p = 10;
        }
    }
    return 0;
}
