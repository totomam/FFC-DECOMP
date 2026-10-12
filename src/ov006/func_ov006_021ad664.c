#include "ffc/types.h"

typedef struct {
    uint8_t state;
    uint8_t pad;
    uint16_t cnt;
} G;

extern G data_ov006_021bc7a8;
extern void func_ov006_021b0644(void);
extern int func_ov006_021afb3c(void *out);
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ad840(void);
extern void func_ov006_021ad75c(void);

void func_ov006_021ad664(void)
{
    void *arr;
    int cnt;
    int i;

    data_ov006_021bc7a8.cnt++;
    if (data_ov006_021bc7a8.cnt < 300) {
        return;
    }
    func_ov006_021b0644();
    cnt = func_ov006_021afb3c(&arr);
    if (cnt == 0) {
        data_ov006_021bc7a8.state = 2;
        func_ov006_021b11fc(0xf, 1, 1, -1, 0);
        func_ov006_021b0600(0x12);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021ad840);
        return;
    }
    i = 0;
    if (cnt > 0) {
        do {
            if (((uint8_t *)arr)[i * 0x2a + 0x28] != 2) {
                break;
            }
            i++;
        } while (i < cnt);
    }
    if (i == cnt) {
        data_ov006_021bc7a8.state = 3;
        func_ov006_021b11fc(0xe, 1, 1, -1, 0);
        func_ov006_021b0600(0x12);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021ad840);
        return;
    }
    data_ov006_021bc7a8.state = 1;
    func_ov006_021b0600(0xf);
    func_ov006_021a64c8(func_ov006_021ad75c);
}
