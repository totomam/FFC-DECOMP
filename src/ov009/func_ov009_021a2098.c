#include "ffc/types.h"

extern uint32_t func_02035ff4(void *object);
extern void func_02021338(uint32_t arg);
extern void *func_02021610(uint32_t arg0, uint32_t arg1);
extern void *func_0203b72c(void);
extern void *func_02021638(uint32_t arg0, uint32_t arg1);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov009_021a0a50(void *object, uint32_t arg);
typedef struct { uint32_t a, b; } S;
extern S data_ov009_021b06b8;

void func_ov009_021a2098(uint8_t *p)
{
    void *r6;
    void *r7;
    void *r1;
    uint8_t *q;

    if (func_02035ff4(p + 0x88) != 0) {
        func_02021338(0x24);
        goto tail;
    }
    r6 = func_02021610(0x24, 0);
    r7 = func_0203b72c();
    r1 = func_02021638(0x24, 5);
    q = p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);

tail:
    r1 = func_ov009_021a0a50(p, 0);
    func_02056bc0(p + 0x14, r1);

    *(S *)(p + 0x80) = data_ov009_021b06b8;
}
