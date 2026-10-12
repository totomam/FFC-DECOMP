#include "ffc/types.h"

extern void *func_ov003_0214649c(void *self);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0203b8bc(void *a);
extern void func_0202bde4(void *obj, void *data, uint32_t a, uint32_t b, uint32_t c);
extern void func_02024db0(void *obj, uint32_t v);
extern void func_02023e54(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov003_0217a198[];

void func_ov003_02157a44(uint8_t *self)
{
    uint8_t *a8 = *(uint8_t **)(self + 0xa8);
    if (a8[9] != 0) {
        uint8_t *x = (uint8_t *)func_ov003_0214649c(*(void **)(self + 0x108));
        void *m = func_02052d90(*(void **)(x + 0xe4), *(uint32_t *)(x + 0xe8));
        if (((uint8_t *)m)[8] != 0) {
            return;
        }
        {
            uint8_t *obj = (uint8_t *)func_0203b8bc(*(void **)(self + 0x10c));
            *(void **)(self + 0x11c) = obj;
            *(uint32_t *)(obj + 0x2c) = 0x21;
            func_0202bde4(*(void **)(self + 0x11c), data_ov003_0217a198, 0, 0, self[0x342]);
            func_02024db0(*(void **)(*(uint8_t **)(self + 0x11c) + 0x34), self[0x343]);
            func_02023e54(*(void **)(*(uint8_t **)(self + 0x11c) + 0x34), 1);
            func_02056bc0(*(void **)(self + 0x100), *(void **)(self + 0x11c));
        }
    }
}
