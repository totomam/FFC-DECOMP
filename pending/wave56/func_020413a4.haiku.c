#include "ffc/types.h"

extern void func_02036490(void *object);
extern void *func_02036380(void *object);
extern uint32_t func_02035eb8(const void *object);
extern uint32_t func_020363d8(const void *object);
extern uint32_t func_020363f8(const void *object);
extern uint32_t func_020366e8(const void *object);
extern void *func_020363bc(const void *object);
extern void func_02036438(void *object, uint32_t value);
extern void func_02036574(void *object, uint32_t a, uint32_t b);
extern void func_020364ec(void *object, uint32_t value);
extern uint32_t func_02035ef8(const void *object);

void func_020413a4(void *obj)
{
    void *sub;
    void *p;
    uint32_t r5;

    func_02036490(obj);
    sub = func_02036380(obj);
    if (func_02035eb8(sub) == 3) {
        if (func_020363d8(obj) != 0) {
            return;
        }
        if (func_020363f8(obj) != 0) {
            r5 = func_020366e8(obj);
            p = func_020363bc(obj);
            func_02036438(obj, *(uint16_t *)((uint8_t *)p + 0x36));
            func_02036574(obj, 1, 1);
            if (r5 != 0) {
                func_020364ec(obj, 0);
            }
        } else {
            func_02036574(obj, 0, 1);
        }
        return;
    }
    sub = func_02036380(obj);
    if (func_02035eb8(sub) != 4) {
        return;
    }
    if (func_020363d8(obj) != 0) {
        r5 = func_020366e8(obj);
        p = func_020363bc(obj);
        func_02036438(obj, *(uint16_t *)((uint8_t *)p + 0x38));
        if (r5 != 0) {
            func_020364ec(obj, 0);
        }
    }
    sub = func_02036380(obj);
    func_02036574(obj, func_02035ef8(sub), 1);
}
