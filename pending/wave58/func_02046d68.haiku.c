#include "ffc/types.h"

extern uint32_t func_020424e0(void *p);
extern void func_ov003_02149768(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_ov003_02149850(void);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_02042b18(void *p, uint32_t v);
extern void func_02037544(void);
extern void func_0203755c(void);
extern void func_02037574(void);
extern void func_0203758c(void);
extern void func_02037550(void);
extern void func_02037568(void);
extern void func_02037580(void);
extern void func_02037598(void);
extern void func_020424d4(void *p, uint32_t v);
extern void func_02042c64(void *p, uint32_t a, uint32_t b);
extern uint32_t func_ov003_0214d454(void);

typedef struct Self {
    void **vtbl;
} Self;

void func_02046d68(uint8_t *obj)
{
    uint32_t s = *(uint32_t *)(obj + 0x88);
    *(uint32_t *)(obj + 0x88) = *(uint32_t *)(obj + 0x88) + 1;

    switch (s) {
    case 0:
        if (obj[0x8d] != 0) {
            uint32_t r5 = obj[0x8c] ? 1 : 3;
            uint32_t h = func_020424e0(*(void **)(obj + 0x80));
            func_ov003_02149768(h, r5, 0, 30, 0);
            func_020424e0(*(void **)(obj + 0x80));
            {
                uint32_t r = func_ov003_02149850();
                func_02056bc0(obj + 0x14, r);
            }
        }
        break;
    case 1:
        func_02042b18(*(void **)(obj + 0x80), 0);
        break;
    case 2:
        switch (*(uint32_t *)(obj + 0x84)) {
        case 2: func_02037544(); break;
        case 3: func_0203755c(); break;
        case 4: func_02037574(); break;
        case 5: func_0203758c(); break;
        default: break;
        }
        {
            uint32_t r = ((uint32_t (*)(void *))((Self *)obj)->vtbl[4])(obj);
            func_02056bc0(obj + 0x14, r);
        }
        break;
    case 3:
        switch (*(uint32_t *)(obj + 0x84)) {
        case 2: func_02037550(); break;
        case 3: func_02037568(); break;
        case 4: func_02037580(); break;
        case 5: func_02037598(); break;
        default: break;
        }
        if (*(uint32_t *)(obj + 0x90) == 1) {
            uint32_t *q;
            func_020424d4(*(void **)(obj + 0x80), 1);
            q = *(uint32_t **)(obj + 0x80);
            q[3] = (q[3] & ~0xffu) | 2u;
        } else {
            func_02042c64(*(void **)(obj + 0x80), 0, 0);
            if (obj[0x8d] != 0) {
                uint32_t r;
                func_020424e0(*(void **)(obj + 0x80));
                r = func_ov003_0214d454();
                func_02056bc0(obj + 0x14, r);
            } else {
                *(uint32_t *)(obj + 0x88) = *(uint32_t *)(obj + 0x88) + 1;
            }
        }
        break;
    case 4:
        {
            uint32_t r5 = obj[0x8c] ? 0 : 2;
            uint32_t h = func_020424e0(*(void **)(obj + 0x80));
            func_ov003_02149768(h, r5, 0, 30, 0);
            func_020424e0(*(void **)(obj + 0x80));
            {
                uint32_t r = func_ov003_02149850();
                func_02056bc0(obj + 0x14, r);
            }
        }
        break;
    case 5:
        *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2u;
        break;
    default:
        break;
    }
}
