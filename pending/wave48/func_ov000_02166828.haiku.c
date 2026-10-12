#include "ffc/types.h"

typedef int (*FnA)(void *, uint32_t, uint8_t *, int, int, void *);
typedef int (*FnB)(void *, uint32_t, uint8_t *, int, int, void *);

typedef struct Ctx {
    int32_t pad0[2];
    void *handle;
    int32_t pad1[4];
    FnA fn1c;
    int32_t pad2[3];
    void *data2c;
} Ctx;

typedef struct Q {
    int32_t pad0[10];
    FnB fn28;
    int32_t pad1[3];
    void *data38;
} Q;

typedef struct Loc {
    uint8_t a[0x10];
    uint8_t b[0x10];
    uint8_t c[0x18];
} Loc;

extern void *func_ov000_02166414(void *a);
extern void *func_ov001_02180818(void *a);
extern uint32_t func_ov001_0218081c(void *a);
extern int func_ov001_021821ac(void *h, uint32_t t, uint8_t *buf);
extern void func_ov000_021652a8(int a, int b, int c, void *d, int e);
extern int func_ov000_0216888c(void *h, uint8_t *buf, void *cb, int z, int y);
extern Q *func_ov000_0216876c(void *h);
extern void func_ov000_02166434(void);
extern char data_ov000_0216b690[];
extern char data_ov000_0216b64c[];
extern char data_ov000_0216b674[];

int func_ov000_02166828(void *a, uint8_t *b, int c, int d) {
    Ctx *s;
    void *h;
    uint32_t t;
    int r;
    uint8_t buf1[0x18];
    Loc loc;
    int i;
    Q *q;

    s = (Ctx *)func_ov000_02166414(a);
    h = func_ov001_02180818(a);
    t = func_ov001_0218081c(a);
    r = func_ov001_021821ac(h, t, buf1);
    func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b690, r);

    if (c >= 0x10) {
        for (i = 0; i < 0x10; i++) {
            loc.b[i] = b[i];
        }
        r = 0;
        if (func_ov000_0216888c(s->handle, loc.a, (void *)func_ov000_02166434, 0, 0) != -1) {
            q = func_ov000_0216876c(s->handle);
            if (q->fn28 != 0) {
                func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b64c, r);
                h = func_ov001_02180818(a);
                t = func_ov001_0218081c(a);
                q->fn28(h, t, b + 0x10, c - 0x10, d, q->data38);
                return 0;
            }
        }
    }

    if (s->fn1c != 0) {
        func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b674, r);
        h = func_ov001_02180818(a);
        t = func_ov001_0218081c(a);
        s->fn1c(h, t, b, c, d, s->data2c);
    }
    return 0;
}
