#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(void);
extern int func_ov006_021a6524(void);
extern void func_ov006_021ae194(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern int func_ov006_021a6540(int a);
extern void func_ov006_021a3d68(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ae22c(void);

extern int8_t data_ov006_021bc7b4[];
extern int8_t data_ov006_021b8828[];
extern uint8_t data_ov006_021b88a8[];
extern uint8_t data_ov006_021b88ac[];
extern uint8_t data_ov006_021b88aa[];
extern uint8_t data_ov006_021b88ae[];

void func_ov006_021ae0c4(void)
{
    uint8_t *p = func_ov006_021afd28();
    int idx;
    int off;
    int v5, v4, v6, v3;

    data_ov006_021bc7b4[2] = 0;
    if (data_ov006_021bc7b4[0] == 0) {
        data_ov006_021bc7b4[0] = 1;
    }
    if (func_ov006_021a6524() != 0) {
        if (data_ov006_021bc7b4[1] == 2) {
            data_ov006_021bc7b4[1] = 0;
        }
        if (data_ov006_021bc7b4[0] == 2) {
            data_ov006_021bc7b4[0] = 1;
        }
    }
    func_ov006_021ae194();
    func_ov006_021a3eb8();
    idx = func_ov006_021a6524();
    func_ov006_021a3aa0(50, data_ov006_021b8828[idx], p[0xf4] + 1);
    func_ov006_021a3bb0(1);
    v5 = func_ov006_021a6540(1);
    v4 = func_ov006_021a6540(1);
    v6 = func_ov006_021a6540(1);
    v3 = func_ov006_021a6540(1);
    off = data_ov006_021bc7b4[1] << 3;
    func_ov006_021a3d68(
        *(uint16_t *)(data_ov006_021b88a8 + (v5 << 5) + off),
        *(uint16_t *)(data_ov006_021b88ac + (v4 << 5) + off),
        *(uint16_t *)(data_ov006_021b88aa + (v6 << 5) + off),
        *(uint16_t *)(data_ov006_021b88ae + (v3 << 5) + off));
    func_ov006_021a64c8(func_ov006_021ae22c);
}
