#include "ffc/types.h"

extern void *func_0204de50(void *p);
extern void *func_0204de78(void *p);
extern void *func_0204b2fc(void *p);
extern uint32_t func_0204aca8(void *p);
extern int func_0204c19c(void *p, void *q, uint32_t n);
extern void func_0204b098(void *p);
extern uint8_t data_020b029c[];
extern uint8_t data_020b022c[];

int func_0204c558(void *p) {
    uint8_t *r6;
    uint8_t *r4;
    uint32_t n;
    int res;

    {
        void *t = func_0204de50(p);
        uint8_t *u = *(uint8_t **)func_0204de78(t);
        r6 = *(uint8_t **)(u + 0xc);
    }
    r4 = func_0204b2fc(r6 + 0x30);
    if (r4 != 0) {
        do {
            n = func_0204aca8(*(void **)(r4 + 8));
            res = func_0204c19c(p, *(void **)(r4 + 8), n);
            if (res != 0) {
                return res;
            }
            res = func_0204c19c(p, data_020b029c, 2);
            if (res != 0) {
                return res;
            }
            n = func_0204aca8(*(void **)(r4 + 0xc));
            res = func_0204c19c(p, *(void **)(r4 + 0xc), n);
            if (res != 0) {
                return res;
            }
            res = func_0204c19c(p, data_020b022c, 2);
            if (res != 0) {
                return res;
            }
            func_0204b098(r4);
            r4 = func_0204b2fc(r6 + 0x30);
        } while (r4 != 0);
    }
    return 0;
}
