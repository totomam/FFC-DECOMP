#include "ffc/types.h"

typedef struct { uint8_t f; } Flag;

extern uint32_t func_ov002_021aa778(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern void func_0205f0d4(void *arr, void *pos, void *key, Flag v);
extern void func_02055ae8(void *object, uint32_t v);
extern void func_02056bc0(void *object, uint32_t node);

void func_ov002_021a3a2c(uint8_t *obj, uint32_t x, uint32_t b, uint32_t c)
{
    uint32_t *p = *(uint32_t **)(obj + 0x11C);
    uint32_t *end = p + *(uint32_t *)(obj + 0x120);
    int key = (int)(uint16_t)func_ov002_021aa778((const void *)x);

    while (p != end) {
        if (key < (int)(uint16_t)func_ov002_021aa778((const void *)*p)) {
            break;
        }
        p++;
    }

    uint32_t buf[3];
    Flag *fp = (Flag *)buf;
    fp->f = 0;
    func_0205f0d4(obj + 0x11C, p, &x, *fp);
    func_02055ae8(obj + 0xC4, x ? x + 0x80 : x);
    func_02056bc0(obj + 0x48, x);

    {
        uint32_t idx = func_ov002_021aa780((const void *)x);
        uint32_t v = func_ov002_021aa778((const void *)x);
        *(uint32_t *)(obj + 0x104 + idx * 4) = v;
    }
}
