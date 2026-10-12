#include "ffc/types.h"

extern void *func_0203b720(void *a);
extern void *func_02056bc0(void *object, void *node);
extern void func_020424e0(void *a);
extern void *func_ov003_0214d454(void);
extern void func_0204777c(void *a);
extern void func_0204778c(void *a);
extern uint32_t func_0201bd84(void *a, uint32_t b);
extern uint32_t func_02087460(void);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02039120(void *a);
extern void func_02039140(void *obj, void *buf, uint8_t a, uint8_t b);
extern void func_02039184(void *obj, void *b);
extern void func_02042c64(void *a, uint32_t b, uint32_t c);
extern void *func_02056aec(void *a);
extern void *data_02139d24;
extern void *data_020b93b8;
extern uint8_t data_020afc50[];
extern uint8_t data_020afc68[];

void func_020477c8(uint8_t *p) {
    uint32_t n = *(uint32_t *)(p + 0x8c);
    int32_t k = *(int32_t *)(p + 0x8c);
    uint8_t buf[0x80];
    *(uint32_t *)(p + 0x8c) = n + 1;
    switch (k) {
    case 0: {
        void *r;
        func_02056bc0(p + 0x14, func_0203b720(p));
        func_020424e0(*(void **)(p + 0x80));
        r = func_02056bc0(p + 0x14, func_ov003_0214d454());
        func_02056bc0(p + 0x14, func_0203b720(r));
        return;
    }
    case 1:
        func_0204777c(p);
        return;
    case 2:
        func_0204778c(p);
        return;
    case 3: {
        void *obj;
        uint32_t r;
        void *src;
        if (func_0201bd84(data_020b93b8, 1) == 0) {
            src = *(void **)(p + 0x84);
        } else {
            src = *(void **)(p + 0x88);
        }
        if (func_02087460()) {
            r = func_02091b10(buf, data_020afc50, src);
        } else {
            r = func_02091b10(buf, data_020afc68, src);
        }
        (void)r;
        if (data_02139d24 == 0) {
            obj = func_0205681c(0x48);
            if (obj != 0) {
                obj = func_02039120(obj);
            }
            data_02139d24 = obj;
        }
        func_02039140(data_02139d24, buf, *(uint8_t *)(p + 0x92), *(uint8_t *)(p + 0x90));
        if (data_02139d24 == 0) {
            obj = func_0205681c(0x48);
            if (obj != 0) {
                obj = func_02039120(obj);
            }
            data_02139d24 = obj;
        }
        func_02039184(data_02139d24, src);
        return;
    }
    case 4:
        if (*(uint8_t *)(p + 0x91) != 0) {
            return;
        }
        func_02042c64(*(void **)(p + 0x80), 1, 0);
        return;
    case 5: {
        void *r;
        if (*(uint8_t *)(p + 0x91) == 0) {
            func_020424e0(*(void **)(p + 0x80));
            r = func_ov003_0214d454();
            func_02056bc0(p + 0x14, r);
        }
        r = func_02056aec(p);
        func_02056bc0(p + 0x14, r);
        return;
    }
    default:
        return;
    }
}
