#include "ffc/types.h"

extern void *func_0204de50(void *p);
extern void *func_0204de70(void);
extern void *func_0204de78(void *p);
extern int32_t func_0204de80(void *p);
extern int32_t func_0204c2b0(void *p);
extern int32_t func_0204c3fc(void *p);
extern int32_t func_0204aa9c(void *a, int32_t b, void *c, int32_t d);
extern int32_t func_0204b0b4(void *p);

int32_t func_0204ce30(uint8_t *p) {
    void *r4 = func_0204de50(p);
    void *r6 = func_0204de70();
    void **r7 = (void **)func_0204de78(r4);
    int32_t sp0 = func_0204de80(r4);
    uint8_t *cfg = *(uint8_t **)((uint8_t *)*r7 + 0xc);
    int32_t res;

    *(int32_t *)(p + 0x330) = 10;
    *(int32_t *)(p + 0x324) = 0;
    if (*(void **)(cfg + 8) != 0) {
        if (*(void **)(cfg + 0xc) != 0) {
            res = func_0204c2b0(p);
            if (res != 0) {
                return res;
            }
            if (func_0204c3fc(p) == 0) {
                return 1;
            }
            res = func_0204aa9c(r6, sp0, cfg, *(int32_t *)((uint8_t *)r6 + 0xc));
            if (res != 0) {
                if (res == -1004) {
                    if (func_0204b0b4(r6) != 0) {
                        *(int32_t *)(p + 0x330) = 0x10;
                    }
                    return 1;
                }
                if (res == -1005) {
                    if (func_0204b0b4(r6) != 0) {
                        *(int32_t *)(p + 0x330) = 0x11;
                    }
                    return 1;
                }
                if (func_0204b0b4(r6) != 0) {
                    *(int32_t *)(p + 0x330) = 0xe;
                }
                return 1;
            }
        }
    }
    return 0;
}
