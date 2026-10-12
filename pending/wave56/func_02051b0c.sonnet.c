/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void);
extern uint32_t func_02030f9c(uint32_t first, uint32_t second, uint32_t third);
extern void func_020095b8(uint32_t a, uint32_t b);
extern void func_02087678(void *p);
extern uint32_t func_02008f2c(void *object, void *value, uint32_t x, uint32_t y);
extern void func_02033014(uint32_t a, void *b, uint32_t c);
extern void *func_020059cc(void *object);
extern uint8_t data_0213dfac[];
extern uint8_t data_020b04f0[];
extern uint8_t data_0213df88[];
}
struct Guard {
    void *ptr; uint8_t flag;
    Guard(void *p) { ptr = p; flag = 1; if (flag) func_0208763c(); }
    ~Guard() { if (flag) func_02087678(ptr); }
};
struct Hdr { uint32_t big0 : 1; uint32_t rest : 31; };
extern "C" void func_02051b0c(uint32_t a, uint8_t *b) {
    Guard g(data_0213dfac);
    uint32_t buf[3];
    if (func_02030f9c((uint32_t)b, (uint32_t)data_020b04f0, 0) != 0xffffffffu) {
        func_020095b8(a, (uint32_t)b);
        return;
    }
    int8_t *s;
    if (((Hdr *)b)->big0 == 0) s = (int8_t *)(b + 1); else s = *(int8_t **)(b + 8);
    if (*s == 0x2f) {
        func_02008f2c(buf, data_0213df88, 0, 4);
        func_02033014(a, buf, (uint32_t)b);
        func_020059cc(buf);
        return;
    }
    func_02033014(a, data_0213df88, (uint32_t)b);
}
