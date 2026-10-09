/* cflags: -nointerworking */
#include "ffc/nonleaf.h"
#include "ffc/mar.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
typedef struct {
    uint32_t active_00 : 1;
} FfcActiveFlag;
typedef struct {
    uint32_t value_00 : 10;
} FfcLowTenBits;
typedef struct {
    uint32_t active_00 : 1;
    uint32_t value_01 : 7;
} FfcActiveAndSeven;
typedef void (*FfcVirtualPairCall)(uint32_t *result, void *object);
typedef struct {
    uint8_t unknown_00[0x18];
    FfcVirtualPairCall call_18;
} FfcVirtualPairTable;
typedef uint32_t (*FfcVirtualWordPairCall)(void *object, FfcWordPair pair);
typedef struct {
    uint8_t unknown_00[0x0C];
    FfcVirtualWordPairCall call_0c;
} FfcVirtualWordPairTable;
extern uint32_t func_0208c5ac(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void func_0207ee40(void *object);
extern uint16_t *func_02088a38(void *object);
extern void func_0209720c(void *object);
extern void func_02035d34(void *object);
extern void func_02090448(void *object);
extern void *func_020812e8(void *object);
extern void *func_02081278(void *object);
extern void func_02056858(void *object);
extern void *func_0200d794(void *object);
extern void *func_02053f44(void *object);
extern uint32_t func_0205fbc8(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void func_02060b30(void *object);
extern void *func_02068378(void *object);
extern void *func_020691f4(void *object);
extern void func_02060e80(void *object);
extern void func_0207e890(void *object);
extern uint32_t func_0207dd08(void *object, uint32_t selector);
extern uint32_t func_0203608c(void *object);
extern uint32_t func_0207eef0(void *object);
extern void func_02052c04(void *object);
extern uint8_t func_02035dac(const void *object);
extern void func_02052be0(void *object);
extern void func_02056844(void *object);
extern void func_020869d8(void *object);
extern uint32_t func_0207cb94(void *object, uint32_t value);
extern uint32_t func_0203b77c(void *object);
extern void *func_0204f7d4(void *object);
extern void *func_0204f7ec(void *object);
extern void *func_02052208(void *object);
extern uint32_t func_0207e0f4(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0201d204(void *object, uint32_t field_48, uint32_t value);
extern uint32_t func_0201e920(const void *object);
extern void *func_02061504(void *object, uint32_t value);
extern uint32_t func_02060f6c(void *first, void *second, uint32_t third, uint32_t fourth);
extern uint32_t func_02061094(void *first, void *second, uint32_t third, uint32_t fourth);
extern uint8_t *func_020197b4(void *archive, uint32_t index);
extern void func_02060ac8(void *object);
extern void func_02061314(void *object);
extern uint8_t *func_02017dd8(void *archive, uint32_t index);
extern void func_0203760c(uint32_t mask);
extern void func_02037fac(void);
extern void func_0209d02c(void *object, uint32_t count, uint32_t size, uintptr_t initializer);
extern void *func_02057df8(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern uint32_t func_0205fc78(void *object, uint32_t field_40, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
extern void func_02091a24(void *object);
extern void func_020887cc(void *object);
extern uint32_t func_0208f42c(void);
extern void func_02009730(void *object, uint32_t value);
extern void func_020097b0(void *object, uint32_t enabled, uint32_t value);
extern void func_0200d608(void *object, uint32_t value);
extern void func_0200d688(void *object, uint32_t enabled, uint32_t value);
extern void func_02053ce0(void *object, uint32_t value);
extern void func_02053e28(void *object, uint32_t enabled, uint32_t value);
extern void func_02065a58(void *object, uint32_t value);
extern void func_02065ad8(void *object, uint32_t enabled, uint32_t value);
extern void func_020681ac(void *object, uint32_t value);
extern void func_0206822c(void *object, uint32_t enabled, uint32_t value);
extern void func_02069058(void *object, uint32_t value);
extern void func_020690d8(void *object, uint32_t enabled, uint32_t value);
extern void func_02005988(void *temporary, const void *descriptor);
extern void func_020161f4(void *object, void *temporary);
extern void func_02017654(void *object, void *temporary);
extern void func_02019ca0(void *object, void *temporary);
extern void *func_020581e4(void);
extern void *func_0205fac0(void);
extern uint32_t func_02055110(void *object, void *value);
extern uint32_t func_0208b4f4(void *object, uintptr_t callback, uint32_t *result);
extern uint32_t func_0208b548(void *object, uint32_t value, uintptr_t callback, uint32_t *result);
extern void func_0208b1cc(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0208823c(void);
extern uint64_t func_020882cc(uint32_t value);
extern void func_02056c9c(void *object, uint32_t value);
extern void func_02009954(void *object, uint32_t value, FfcByteValue result);
extern void func_02065bdc(void *object, uint32_t value, FfcByteValue result);
extern void func_02065cd0(void *object, uint32_t value, FfcByteValue result);
extern uint32_t func_02005f3c(void *object, uint32_t first, uint32_t second, uint32_t third);
extern uint32_t func_0200960c(void *object);
extern void func_020095b8(void *temporary);
extern void *func_020529ac(void *temporary);
extern void func_02035c18(void *object);
extern void func_020927bc(uint32_t value);
extern uint32_t func_0208f4b8(uint32_t value);
extern uint32_t func_02089218(uint32_t first, uint32_t second, uint32_t third);
extern void *func_02056830(uint32_t size);
extern void *func_0205f960(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth);
extern void func_020890f8(void);
extern void func_020891a8(uint32_t value, uintptr_t callback);
extern uint32_t func_02092864(uint32_t value);
extern uint32_t func_02030f24(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
extern void func_020358f8(void *object);
extern void func_0208763c(void *object);
extern void func_02087678(void *object);
extern const uint8_t func_020b1aec[];
extern void func_02090398(void *destination, const void *source, uint32_t size);
extern uint32_t func_0208b38c(const uint32_t *words, uint32_t count,
                                  uint32_t third, uint32_t fourth, uint32_t fifth);
extern int32_t func_0208f694(int32_t first, uint32_t second, uint32_t third,
                                 uint32_t fourth, int32_t fifth);
extern const uint8_t func_020b0c1c[];
extern void func_02052be0(void *object);
extern void func_02052c94(void *object, uint32_t value);
extern void func_020847b0(uint32_t index);
extern void func_0204f300(void *object);
extern void *func_0204f494(void *object);
extern uint8_t func_0213df10[];
extern uint8_t func_020b0ca4[];
extern uint8_t func_020b0cb8[];
extern uint32_t func_02141364[];
extern uint8_t func_020ae654[];
extern uint8_t func_020aadd0[];
extern uint8_t func_020b0660[];
extern uint8_t func_020b0674[];
extern void (*func_020a7b3c[])(void);
extern void *func_0207fd30(void *object);
extern void func_0207eb4c(void *object);
extern void func_02054680(void *object);

void *func_020974ec(void *object) {
    func_0209720c(object);
    return object;
}
