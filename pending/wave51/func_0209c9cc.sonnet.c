/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"
extern "C" {
extern void func_0209ccf4(void *frame);
extern void func_0209cce4(void);
extern uint32_t func_0209bfdc(uint32_t a, void *b);
extern uint32_t func_0209bf7c(void *p);
extern int func_0209c980(void *a, void *b);
extern void func_0209d27d_unk(void);
extern void func_0209d245_unk(void *obj, void *vt, void *fn, void *arg);
extern void func_0209cc64(void *p);
extern void func_0209ca4c(void);
extern char data_020b37e8[];
extern char data_020b37dc[];
extern char data_020b3800[];
void func_0209c9cc(uint32_t *self);
}
void func_0209c9cc(uint32_t *self) {
    uint32_t frame[11];
    uint32_t r4 = self[5];
    try {
        func_0209ccf4(frame);
    } catch (...) {
        func_0209bfdc(r4 + 1, &frame[7]);
        func_0209bfdc(frame[8], &frame[8]);
        frame[9] = func_0209bf7c(&frame[9]);
        if (func_0209c980((void *)self[2], &frame[7]) != 0) func_0209d27d_unk();
        if (func_0209c980(data_020b37e8, &frame[7]) != 0) {
            frame[0] = (uint32_t)data_020b37dc;
            func_0209d245_unk(data_020b3800, data_020b37dc, (void*)func_0209ca4c, &frame[0]);
        }
        func_0209cc64(&frame[1]);
    }
    func_0209cce4();
}
