#include "ffc/types.h"

extern void func_ov001_021840ac(void);
extern void func_ov001_02186630(void);
extern void func_ov000_02163bd0(void);
extern void func_ov000_0215a3dc(void);
extern void func_ov001_0217f344(void);
extern void func_ov000_0215a3e8(void);
extern void func_ov001_02175910(void *p, int a, int b, int c);
extern void func_ov001_021758e8(void *p);
extern void func_ov001_021758d4(void *p);
extern void func_ov000_0215a67c(void);
extern void func_ov000_02159aec(void);
extern void func_ov000_0215e19c(void);
extern void func_ov000_021643ec(void);
extern void func_ov001_021805f0(void);
extern void func_ov000_021591a8(int a, void *p, int b);

extern uint32_t data_ov000_02170064[];

#define OBJ (*(uint8_t **)&data_ov000_02170064[1])

void func_ov000_0215ac68(void)
{
    if (OBJ == 0) {
        return;
    }
    if (*(uint32_t *)(OBJ + 0x360) != 0) {
        func_ov001_021840ac();
        *(uint32_t *)(OBJ + 0x360) = 0;
    }
    OBJ[0x39c] = 0;
    if (*(uint32_t *)(OBJ + 0x930) != 0) {
        func_ov001_02186630();
        *(uint32_t *)(OBJ + 0x930) = 0;
    }
    func_ov000_02163bd0();
    func_ov000_0215a3dc();
    func_ov001_0217f344();
    func_ov000_0215a3e8();
    if (*(uint32_t *)(OBJ + 0x1c) != 0) {
        func_ov001_02175910(OBJ + 0x1c, 0, 0, 0);
        func_ov001_02175910(OBJ + 0x1c, 3, 0, 0);
        func_ov001_02175910(OBJ + 0x1c, 1, 0, 0);
        func_ov001_02175910(OBJ + 0x1c, 2, 0, 0);
        func_ov001_021758e8(OBJ + 0x1c);
        func_ov001_021758d4(OBJ + 0x1c);
        *(uint32_t *)(OBJ + 0x1c) = 0;
    }
    func_ov000_0215a67c();
    func_ov000_02159aec();
    func_ov000_0215e19c();
    func_ov000_021643ec();
    if (*(uint32_t *)OBJ != 0) {
        func_ov001_021805f0();
        *(uint32_t *)OBJ = 0;
    }
    func_ov000_021591a8(4, OBJ, 0);
    data_ov000_02170064[1] = 0;
}
