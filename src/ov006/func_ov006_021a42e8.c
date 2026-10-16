#include "ffc/types.h"
typedef struct { uint8_t pad[0x30]; uint32_t *p; uint8_t pad2[0xe9]; uint8_t b; } G;
extern G *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(int a, int b, int c);
extern void func_ov006_021b5770(void *a, void *b);
extern void func_ov006_021a4340(void);
void func_ov006_021a42e8(void *p) { volatile int pad[2]; (void)pad;
    int x = (uint8_t)*data_ov006_021bc6fc->p - 12;
    if (x > 0x51) {
        func_ov006_021a4b14(data_ov006_021bc6fc->b, 0, x);
        return;
    }
    func_ov006_021a4b14(data_ov006_021bc6fc->b, 0, 0x51);
    func_ov006_021a4b14(data_ov006_021bc6fc->b, 1, 0xc0);
    func_ov006_021b5770(p, (void*)func_ov006_021a4340);
}
