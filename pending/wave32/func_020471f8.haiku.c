#include "ffc/types.h"

extern void *func_0204723c(void *self, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219f11c(void *obj, void *p, uint32_t flag, void *x);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020afc48[2];

void *func_020471f8(uint8_t *param) {
    uint32_t *p = data_020afc48;
    uint8_t *r4 = param;
    uint32_t a = *p++;
    uint32_t b = *p++;
    void *r6 = func_0204723c(param, a, b);
    void *r5 = func_0205681c(0x9c);
    if (r5 != 0) {
        r5 = func_ov007_0219f11c(r5, r4 + 0x94, 1, *(void **)(r4 + 0x98));
    }
    void *r4b = func_0203b688();
    func_02056bc0(r4b, r5);
    func_02056bc0(r4b, r6);
    return r4b;
}
