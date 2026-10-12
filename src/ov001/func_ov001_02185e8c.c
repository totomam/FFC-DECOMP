#include "ffc/types.h"

extern int32_t func_02092948(const char *a, const void *b);
extern int32_t func_ov001_02186368(void *p);
extern char *func_ov001_02185e54(void *p, const char *s, int32_t flag);
extern int32_t func_02093b18(const char *s);
extern uint8_t data_ov001_02194234[];
extern uint16_t data_020a6254[];

int32_t func_ov001_02185e8c(void *p, const char *s, int32_t def)
{
    char *r;
    const char *q;
    uint32_t c;
    uint32_t flag;

    if (p == 0) {
        return def;
    }
    if (func_02092948(s, data_ov001_02194234) == 0) {
        return func_ov001_02186368(p);
    }
    r = func_ov001_02185e54(p, s, 0);
    if (r == 0) {
        return def;
    }
    q = (r[0] != '-') ? r : r + 1;
    c = (uint8_t)*q;
    if (c >= 0x80) {
        flag = 0;
    } else {
        flag = data_020a6254[c] & 8;
    }
    if (flag == 0) {
        return def;
    }
    return func_02093b18(r);
}
