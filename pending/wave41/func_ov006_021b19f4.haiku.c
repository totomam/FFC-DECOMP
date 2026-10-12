#include "ffc/types.h"

extern void func_0207e890(void *object);
extern void func_0207ea0c(void *object);
extern int func_0207eb28(void *object, void *arg);
extern int func_ov006_0219a3ac(void *object);
extern int func_ov006_0219a404(void *object, uint32_t flags);
extern int func_ov006_0219a808(void *a, void *b);
extern uint8_t *data_ov006_021bc7fc;

int func_ov006_021b19f4(void **p)
{
    uint8_t buf[0x48];
    void *o;
    uint8_t *base;
    int ret = 0;
    uint32_t off = 0x1b144;

    if (*p == 0) {
        o = 0;
    } else {
        func_0207e890(buf);
        if (func_0207eb28(buf, *p) == 0) {
            return 0;
        }
        o = buf;
    }

    if (func_ov006_0219a3ac(o)) {
        base = data_ov006_021bc7fc;
        *(uint8_t **)(base + off) = base + 0x2c;
        if (*(void **)(data_ov006_021bc7fc + off) != 0) {
            if (func_ov006_0219a404(o, 1u << 16)) {
                if (func_ov006_0219a808(p, *(void **)(data_ov006_021bc7fc + off))) {
                    ret = 1;
                }
            }
        }
    }

    if (o == buf) {
        func_0207ea0c(buf);
    }
    return ret;
}
