#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    void (*fn)(uint32_t);
    uint32_t a;
    uint32_t b;
    uint32_t pad2;
    void (*c)(void);
} S;

extern void func_ov001_0218892c(void);
extern void func_ov001_021898f4(void);
extern void func_ov001_02189934(void);
extern S data_ov001_02195798;

void func_ov001_02188c94(void) {
    func_ov001_0218892c();
    func_ov001_021898f4();
    func_ov001_02189934();
    data_ov001_02195798.fn(data_ov001_02195798.a);
    data_ov001_02195798.fn(data_ov001_02195798.b);
    data_ov001_02195798.c();
}
