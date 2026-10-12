#include "ffc/types.h"

extern int32_t func_ov001_02186e30(char *s, int32_t len);
extern int32_t func_ov001_02185448(char *s);
extern void func_ov001_02185df4(void *obj, char *name, char *value);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_02092864(const uint8_t *text);
extern char data_ov001_02194240[];

typedef struct {
    uint16_t n;
    uint8_t obj[0x82];
} Rec;

void func_ov001_0218603c(void *obj, char *s, int32_t len) {
    char *p = s;
    Rec rec;
    int32_t n;
    char *base;
    int32_t count;
    int32_t i, j, k;
    char *dp;
    int32_t r;

    if (*p != 0) {
        do {
            char *name;
            char *val;
            r = func_ov001_02186e30(p, len);
            if (r < 0) return;
            name = p;
            p += r;
            len -= r;
            r = func_ov001_02186e30(p, len);
            if (r < 0) return;
            val = p;
            p += r;
            len -= r;
            if (!func_ov001_02185448(name)) {
                func_ov001_02185df4(obj, name, val);
            }
        } while (*p != 0);
    }

    p += 1;
    len -= 1;
    for (i = 0; i < 2; i++) {
        uint8_t *up = (uint8_t *)p;
        uint8_t *rb;
        if (len < 2) return;
        {
            uint8_t b0 = up[0];
            rb = (uint8_t *)&rec;
            len -= 2;
            rb[0] = b0;
        }
        rb[1] = up[1];
        p += 2;
        base = p;
        { uint16_t hv = rec.n; rec.n = (uint16_t)(((hv >> 8) & 0xff) | ((hv << 8) & 0xff00)); }
        count = 0;
        while (*p != 0) {
            r = func_ov001_02186e30(p, len);
            if (r < 0) return;
            if (r > 100) return;
            p += r;
            count++;
            len -= r;
        }
        j = 0;
        n = rec.n;
        p += 1;
        len -= 1;
        for (; j < n; j++) {
            dp = base;
            for (k = 0; k < count; k++) {
                r = func_ov001_02186e30(p, len);
                if (r < 0) return;
                func_02086ad4(rec.obj, (uint32_t)data_ov001_02194240, dp, j);
                func_ov001_02185df4(obj, (char *)rec.obj, p);
                p += r;
                len -= r;
                dp += func_02092864((const uint8_t *)dp) + 1;
            }
        }
    }
}
