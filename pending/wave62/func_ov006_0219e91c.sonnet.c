#include "ffc/types.h"
extern void func_ov006_0219ef6c(void*, int, int);
extern void func_ov006_0219ef5c(void*, void*, int);
extern int func_ov006_0219f090(void*);
extern void func_ov006_0219ed94(void*, int, void*, int);
extern void func_ov006_0219ea68(void*, int, int, int, int, int, void*);
extern void func_ov006_0219eac0(void*, int, int, int);
typedef struct { uint32_t pad[5]; void *p; } G;
extern G data_ov006_021ba1dc;
extern uint8_t data_ov006_021b8b8c[];
int func_ov006_0219e91c(int a, uint8_t *b, int c) {
    void *o = data_ov006_021ba1dc.p;
    uint8_t buf[8];
    func_ov006_0219ef6c(o, 0, 0x5dc);
    func_ov006_0219ef5c(buf, b + 0x10, 8);
    func_ov006_0219ed94(buf, 8, data_ov006_021b8b8c, func_ov006_0219f090(data_ov006_021b8b8c));
    func_ov006_0219ea68(o, 0x3000, 0, 0, 0, 0x11, buf);
    func_ov006_0219eac0(o, 0x18, 0, c);
    return 0;
}
