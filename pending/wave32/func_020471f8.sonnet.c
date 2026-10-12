#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void *func_0204723c(void *self, S s);
extern S data_020afc48;
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219f11c(void *obj, void *p, uint32_t flag, void *x);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

void *func_020471f8(uint8_t *param) {
    uint8_t *r4 = param;
    void *r6 = func_0204723c(param, data_020afc48);
    void *r5 = func_0205681c(0x9c);
    if (r5 != 0) {
        r5 = func_ov007_0219f11c(r5, r4 + 0x94, 1, *(void **)(r4 + 0x98));
    }
    void *r4b = func_0203b688();
    func_02056bc0(r4b, r5);
    func_02056bc0(r4b, r6);
    return r4b;
}
