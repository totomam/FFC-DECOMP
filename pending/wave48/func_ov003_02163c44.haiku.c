#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void func_02056bf4(void *obj);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern char data_ov003_0217a608[];

#define SELF_FIELD(T, off) (*(T *)((uint8_t *)self + (off)))
#define VSLOT(obj, idx) ((*(void ***)(obj))[idx])

void func_ov003_02163c44(void *self) {
    int8_t buf[8];
    S args;
    char tmp[0x44];
    int changed = 0;
    uint32_t i;
    uint32_t count;
    void *obj;

    ((void (*)(void *, void *))VSLOT(self, 4))(self, buf);

    count = SELF_FIELD(uint32_t, 0x8c);
    for (i = 0; i < count; i++) {
        int8_t *cur = (int8_t *)self + i;
        if (buf[i] != cur[0x9c]) {
            changed = 1;
            cur[0x9c] = buf[i];
            if (SELF_FIELD(void *, 0xb0 + i * 4) != 0) {
                func_02056bf4(SELF_FIELD(void *, 0xa8));
                obj = SELF_FIELD(void *, 0xb0 + i * 4);
                if (obj != 0) {
                    ((void (*)(void *))VSLOT(obj, 1))(obj);
                    SELF_FIELD(void *, 0xb0 + i * 4) = 0;
                }
            }
            if (cur[0x9c] == 0x20) {
                SELF_FIELD(void *, 0xb0 + i * 4) = 0;
            } else {
                func_02091b10(tmp + 1, (uint32_t)data_ov003_0217a608, cur[0x9c] - 0x30);
                SELF_FIELD(void *, 0xb0 + i * 4) =
                    func_0203b95c(tmp + 1, SELF_FIELD(void *, 0xd0), 0, 1);
                args.a = i * 8 + 0xd;
                args.b = 0x10;
                obj = SELF_FIELD(void *, 0xb0 + i * 4);
                ((void (*)(void *, S))VSLOT(obj, 3))(obj, args);
                obj = SELF_FIELD(void *, 0xb0 + i * 4);
                ((void (*)(void *))VSLOT(obj, 10))(obj);
                obj = SELF_FIELD(void *, 0xb0 + i * 4);
                ((void (*)(void *, uint32_t, uint32_t))VSLOT(obj, 14))(obj, 2, 0);
                func_02056bc0(SELF_FIELD(void *, 0xa8), SELF_FIELD(void *, 0xb0 + i * 4));
            }
        }
        count = SELF_FIELD(uint32_t, 0x8c);
    }

    if (changed) {
        uint32_t h = SELF_FIELD(uint32_t, 0x94);
        if (h != 0xFFFFFFFFu) {
            func_02021338(h);
        }
    }
}
