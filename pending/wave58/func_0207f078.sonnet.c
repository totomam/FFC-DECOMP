#include "ffc/types.h"

extern int32_t func_0207f4bc(void *ctx, int32_t mode, int32_t flag);
extern int32_t func_0207e810(char *s, int32_t n);
extern int32_t func_0207ef50(void *ctx, void *arg);

typedef struct { uint32_t a, b, c; } T3;
typedef struct {
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t fl;
    uint32_t ln;
    char name[128];
} Blk;

int32_t func_0207f078(uint8_t *ctx) {
    Blk b;
    uint32_t hasOut = *(uint32_t *)(ctx + 0x40);
    char *s = *(char **)(ctx + 0x3c);
    int32_t len, flag, diff; uint32_t i;
    uint32_t *out;

    func_0207f4bc(ctx, 2, 1);
    if (s[0] == 0) goto end;

loop:
    len = func_0207e810(s, 0);
    flag = 1;
    if (s[len] == 0 && hasOut == 0) flag = 0;
    if (len == 0) return 6;

    if (s[0] == '.') {
        if (len == 1) {
            s += 1;
            goto next;
        }
        if (len == 2 && s[1] == '.') {
            if (*(uint16_t *)(ctx + 0x24) != 0) {
                func_0207ef50(ctx, *(void **)(ctx + 0x2c));
            }
            s += 2;
            goto next;
        }
    } else if (s[0] == '*') {
        goto end;
    }

    if (len > 127) return 11;

    *(Blk **)(ctx + 0x30) = &b;
    *(uint32_t *)(ctx + 0x34) = 0;

    for (;;) {
        if (func_0207f4bc(ctx, 3, 1) != 0) return 11;
        if (flag != (int32_t)b.fl || len != (int32_t)b.ln) continue;
        i = 0;
        diff = 0;
        for (; i < (uint32_t)len; i++) {
            uint8_t c1 = (uint8_t)(s[i] - 0x41);
            uint8_t c2 = (uint8_t)(b.name[i] - 0x41);
            if (c1 <= 0x19) c1 += 0x20;
            if (c2 <= 0x19) c2 += 0x20;
            diff = c1 - c2;
            if (diff != 0) break;
        }
        if (diff == 0) break;
    }

    if (flag != 0) {
        *(T3 *)(ctx + 0x30) = *(T3 *)&b;
        func_0207f4bc(ctx, 2, 1);
        s += len;
        goto next;
    }

    if (hasOut != 0) return 11;
    out = *(uint32_t **)(ctx + 0x44);
    out[0] = b.p0;
    out[1] = b.p1;
    return 0;

next:
    if (*s != 0) s += 1;
    if (*s != 0) goto loop;

end:
    if (hasOut == 0) return 11;
    out = *(uint32_t **)(ctx + 0x44);
    *(T3 *)out = *(T3 *)(ctx + 0x20);
    return 0;
}
