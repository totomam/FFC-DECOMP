#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Buf12;

extern void func_02056c4c(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *data, uint32_t idx);
extern void func_02005988(Buf12 *buf, uint32_t v);
extern void *func_02008d6c(void *q, Buf12 *buf);
extern void func_02056bc0(void *obj, void *node);
extern void *func_020059cc(Buf12 *buf);
extern void *data_020b8e44;

void func_ov010_021c90b4(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t v;
    int done;
    void *q0; void *q1; void *q2; void *q3; void *q4;
    Buf12 b0, b1, b2, b3, b4;

    v = (uint8_t)*(uint32_t *)(p + 0x114);
    if (p[0x118] == v) {
        return;
    }
    {
        p[0x118] = v;
        func_02056c4c(*(void **)(p + 0xf0));
        switch (p[0x118]) {
        case 0:
            done = 0;
            q0 = func_0205681c(0xc8);
            if (q0 != 0) {
                uint32_t t = func_020159c8(data_020b8e44, 0x204);
                func_02005988(&b0, t);
                done = 1;
                q0 = func_02008d6c(q0, &b0);
            }
            func_02056bc0(*(void **)(p + 0xf0), q0);
            if (done) {
                func_020059cc(&b0);
            }
            break;
        case 1:
            done = 0;
            q1 = func_0205681c(0xc8);
            if (q1 != 0) {
                uint32_t t = func_020159c8(data_020b8e44, 0x205);
                func_02005988(&b1, t);
                done = 1;
                q1 = func_02008d6c(q1, &b1);
            }
            func_02056bc0(*(void **)(p + 0xf0), q1);
            if (done) {
                func_020059cc(&b1);
            }
            break;
        case 2:
            done = 0;
            q2 = func_0205681c(0xc8);
            if (q2 != 0) {
                uint32_t t = func_020159c8(data_020b8e44, 0x206);
                func_02005988(&b2, t);
                done = 1;
                q2 = func_02008d6c(q2, &b2);
            }
            func_02056bc0(*(void **)(p + 0xf0), q2);
            if (done) {
                func_020059cc(&b2);
            }
            break;
        case 3:
            done = 0;
            q3 = func_0205681c(0xc8);
            if (q3 != 0) {
                uint32_t t = func_020159c8(data_020b8e44, 0x207);
                func_02005988(&b3, t);
                done = 1;
                q3 = func_02008d6c(q3, &b3);
            }
            func_02056bc0(*(void **)(p + 0xf0), q3);
            if (done) {
                func_020059cc(&b3);
            }
            break;
        case 4:
            done = 0;
            q4 = func_0205681c(0xc8);
            if (q4 != 0) {
                uint32_t t = func_020159c8(data_020b8e44, 0x208);
                func_02005988(&b4, t);
                done = 1;
                q4 = func_02008d6c(q4, &b4);
            }
            func_02056bc0(*(void **)(p + 0xf0), q4);
            if (done) {
                func_020059cc(&b4);
            }
            break;
        default:
            break;
        }
    }
}
