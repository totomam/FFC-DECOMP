#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *b;
} FuncOv006Data;

extern FuncOv006Data data_ov006_021bc7d0;
extern void func_ov006_021af588(void);
extern void func_ov006_021b570c(int a, void *cb, int c, int d);

void func_ov006_021af56c(void *p)
{
    data_ov006_021bc7d0.b = p;
    func_ov006_021b570c(1, (void *)func_ov006_021af588, 0, 0x78);
}
