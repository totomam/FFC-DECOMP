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

extern uint32_t ffc_arm9_0208c5ac(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void ffc_arm9_0207ee40(void *object);
extern uint16_t *ffc_arm9_02088a38(void *object);
extern void ffc_arm9_02035d7c(void *object);
extern void ffc_arm9_02035d34(void *object);
extern void ffc_arm9_02090448(void *object);
extern void *ffc_arm9_020812e8(void *object);
extern void *ffc_arm9_02081278(void *object);
extern void ffc_arm9_02056858(void *object);
extern void *ffc_arm9_0200d794(void *object);
extern void *ffc_arm9_02053f44(void *object);
extern uint32_t ffc_arm9_0205fbc8(void *object, uint32_t first, uint32_t second, uint32_t third);
extern void ffc_arm9_02060b30(void *object);
extern void *ffc_arm9_02068378(void *object);
extern void *ffc_arm9_020691f4(void *object);
extern void ffc_arm9_02060e80(void *object);
extern void ffc_arm9_0207e890(void *object);
extern uint32_t ffc_arm9_0207dd08(void *object, uint32_t selector);
extern uint32_t ffc_arm9_0203608c(void *object);
extern uint32_t ffc_arm9_0207eef0(void *object);
extern void ffc_arm9_02052c04(void *object);
extern uint8_t ffc_arm9_02035dac(const void *object);
extern void ffc_arm9_02052be0(void *object);
extern void ffc_arm9_02056844(void *object);
extern void ffc_arm9_020869d8(void *object);
extern uint32_t ffc_arm9_0207cb94(void *object, uint32_t value);
extern uint32_t ffc_arm9_0203b77c(void *object);
extern void *ffc_arm9_0204f7d4(void *object);
extern void *ffc_arm9_0204f7ec(void *object);
extern void *ffc_arm9_02052208(void *object);
extern uint32_t ffc_arm9_0207e0f4(void *object, uint32_t first, uint32_t second);
extern uint32_t ffc_arm9_0201d204(void *object, uint32_t field_48, uint32_t value);
extern uint32_t ffc_arm9_0201e920(const void *object);
extern void *ffc_arm9_02061504(void *object, uint32_t value);
extern uint32_t ffc_arm9_02060f6c(void *first, void *second, uint32_t third, uint32_t fourth);
extern uint32_t ffc_arm9_02061094(void *first, void *second, uint32_t third, uint32_t fourth);
extern uint8_t *ffc_arm9_020197b4(void *archive, uint32_t index);
extern void ffc_arm9_02060ac8(void *object);
extern void ffc_arm9_02061314(void *object);
extern uint8_t *ffc_arm9_02017dd8(void *archive, uint32_t index);
extern void ffc_arm9_0203760c(uint32_t mask);
extern void ffc_arm9_02037fac(void);
extern void ffc_arm9_0209d02c(void *object, uint32_t count, uint32_t size, uintptr_t initializer);
extern void *ffc_arm9_02057df8(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern uint32_t ffc_arm9_0205fc78(void *object, uint32_t field_40, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
extern void ffc_arm9_02091a24(void *object);
extern void ffc_arm9_020887cc(void *object);
extern uint32_t ffc_arm9_0208f42c(void);
extern void ffc_arm9_02009730(void *object, uint32_t value);
extern void ffc_arm9_020097b0(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_0200d608(void *object, uint32_t value);
extern void ffc_arm9_0200d688(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_02053ce0(void *object, uint32_t value);
extern void ffc_arm9_02053e28(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_02065a58(void *object, uint32_t value);
extern void ffc_arm9_02065ad8(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_020681ac(void *object, uint32_t value);
extern void ffc_arm9_0206822c(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_02069058(void *object, uint32_t value);
extern void ffc_arm9_020690d8(void *object, uint32_t enabled, uint32_t value);
extern void ffc_arm9_02005988(void *temporary, const void *descriptor);
extern void ffc_arm9_020161f4(void *object, void *temporary);
extern void ffc_arm9_02017654(void *object, void *temporary);
extern void ffc_arm9_02019ca0(void *object, void *temporary);
extern void *ffc_arm9_020581e4(void);
extern void *ffc_arm9_0205fac0(void);
extern uint32_t ffc_arm9_02055110(void *object, void *value);
extern uint32_t ffc_arm9_0208b4f4(void *object, uintptr_t callback, uint32_t *result);
extern uint32_t ffc_arm9_0208b548(void *object, uint32_t value, uintptr_t callback, uint32_t *result);
extern void ffc_arm9_0208b1cc(void);
extern void *ffc_arm9_0205681c(uint32_t size);
extern uint32_t ffc_arm9_0208823c(void);
extern uint64_t ffc_arm9_020882cc(uint32_t value);
extern void ffc_arm9_02056c9c(void *object, uint32_t value);
extern void ffc_arm9_02009954(void *object, uint32_t value, FfcByteValue result);
extern void ffc_arm9_02065bdc(void *object, uint32_t value, FfcByteValue result);
extern void ffc_arm9_02065cd0(void *object, uint32_t value, FfcByteValue result);
extern uint32_t ffc_arm9_02005f3c(void *object, uint32_t first, uint32_t second, uint32_t third);
extern uint32_t ffc_arm9_0200960c(void *object);
extern void ffc_arm9_020095b8(void *temporary);
extern void *ffc_arm9_020529ac(void *temporary);
extern void ffc_arm9_02035c18(void *object);
extern void ffc_arm9_020927bc(uint32_t value);
extern uint32_t ffc_arm9_0208f4b8(uint32_t value);
extern uint32_t ffc_arm9_02089218(uint32_t first, uint32_t second, uint32_t third);
extern void *ffc_arm9_02056830(uint32_t size);
extern void *ffc_arm9_0205f960(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth);
extern void ffc_arm9_020890f8(void);
extern void ffc_arm9_020891a8(uint32_t value, uintptr_t callback);
extern uint32_t ffc_arm9_02092864(uint32_t value);
extern uint32_t ffc_arm9_02030f24(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth);
extern void ffc_arm9_020358f8(void *object);
extern void ffc_arm9_0208763c(void *object);
extern void ffc_arm9_02087678(void *object);
extern const uint8_t ffc_arm9_020b1aec[];
extern void ffc_arm9_02090398(void *destination, const void *source, uint32_t size);
extern uint32_t ffc_arm9_0208b38c(const uint32_t *words, uint32_t count,
                                  uint32_t third, uint32_t fourth, uint32_t fifth);
extern int32_t ffc_arm9_0208f694(int32_t first, uint32_t second, uint32_t third,
                                 uint32_t fourth, int32_t fifth);
extern const uint8_t ffc_arm9_020b0c1c[];
extern void ffc_arm9_02052be0(void *object);
extern void ffc_arm9_02052c94(void *object, uint32_t value);
extern void ffc_arm9_020847b0(uint32_t index);
extern void ffc_arm9_0204f300(void *object);
extern void *ffc_arm9_0204f494(void *object);
extern uint8_t ffc_arm9_0213df10[];
extern uint8_t ffc_arm9_020b0ca4[];
extern uint8_t ffc_arm9_020b0cb8[];
extern uint32_t ffc_arm9_02141364[];
extern uint8_t ffc_arm9_020ae654[];
extern uint8_t ffc_arm9_020aadd0[];
extern uint8_t ffc_arm9_020b0660[];
extern uint8_t ffc_arm9_020b0674[];
extern void (*ffc_arm9_020a7b3c[])(void);
extern void *ffc_arm9_0207fd30(void *object);
extern void ffc_arm9_0207eb4c(void *object);
extern void ffc_arm9_02054680(void *object);

uint32_t ffc_arm9_02086b20(void *object, uint32_t first, uint32_t second, uint32_t third) {
    return ffc_arm9_0208c5ac(object, first, second, third);
}

uint32_t ffc_arm9_0207eee4(void *object) {
    ffc_arm9_0207ee40(object);
    return 1;
}

uint16_t ffc_arm9_02088a2c(void *object) { return *ffc_arm9_02088a38(object); }

void *ffc_arm9_02035e30(void *object) {
    ffc_arm9_02035d7c(object);
    return object;
}

void *ffc_arm9_020903cc(void *object) {
    ffc_arm9_02090448(object);
    return object;
}

void *ffc_arm9_02081210(void *object) {
    return ffc_arm9_02081278(ffc_arm9_020812e8(object));
}

void *ffc_arm9_0206c030(void *object) {
    ffc_arm9_02056858((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    return object;
}

void *ffc_arm9_0200d750(void *object) {
    FIELD(uint32_t, object, 4) = 0;
    ffc_arm9_0200d794(object);
    return object;
}

void *ffc_arm9_02053f00(void *object) {
    FIELD(uint32_t, object, 4) = 0;
    ffc_arm9_02053f44(object);
    return object;
}

uint32_t ffc_arm9_0205db1c(const void *object) {
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, object, 4),
        CONST_FIELD(uint32_t, object, 8));
    return CONST_FIELD(uint32_t, entry, 0x18);
}

uint32_t ffc_arm9_0205db2c(const void *object) {
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, object, 4),
        CONST_FIELD(uint32_t, object, 8));
    return CONST_FIELD(uint32_t, entry, 0x1C);
}

uint32_t ffc_arm9_0205fbb8(void *object, uint32_t second, uint32_t third) {
    return ffc_arm9_0205fbc8(object, FIELD(uint32_t, object, 0x40), second, third);
}

void *ffc_arm9_02060a54(void *object, uint32_t first, uint32_t second) {
    FIELD(uint32_t, object, 0) = first;
    FIELD(uint32_t, object, 4) = second;
    ffc_arm9_02060b30(object);
    return object;
}

uint32_t ffc_arm9_02063558(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0);
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, nested, 4),
        CONST_FIELD(uint32_t, nested, 8));
    return CONST_FIELD(uint32_t, entry, 4);
}

uint32_t ffc_arm9_02063568(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0);
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, nested, 4),
        CONST_FIELD(uint32_t, nested, 8));
    return CONST_FIELD(uint32_t, entry, 8);
}

uint32_t ffc_arm9_02063578(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0);
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, nested, 4),
        CONST_FIELD(uint32_t, nested, 8));
    return CONST_FIELD(uint32_t, entry, 0x10);
}

void *ffc_arm9_02068334(void *object) {
    FIELD(uint32_t, object, 4) = 0;
    ffc_arm9_02068378(object);
    return object;
}

void *ffc_arm9_020691b0(void *object) {
    FIELD(uint32_t, object, 4) = 0;
    ffc_arm9_020691f4(object);
    return object;
}

void *ffc_arm9_02060e6c(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0) = value;
    FIELD(uint32_t, object, 8) = 0;
    ffc_arm9_02060e80(object);
    return object;
}

void ffc_arm9_02052024(void *object) {
    ffc_arm9_0207e890((uint8_t *)object + 4);
    FIELD(uint8_t, object, 0x54) = 0;
    FIELD(uint8_t, object, 0x55) = 0;
}

uint32_t ffc_arm9_020366d4(void *object) { return ffc_arm9_0203608c(object) == 0x14; }

uint32_t ffc_arm9_02052698(void *object) { return ffc_arm9_0207eef0(object) != 0; }

void *ffc_arm9_02053290(void *object) {
    void *value = (void *)(uintptr_t)FIELD(uint32_t, object, 0);
    if (value) ffc_arm9_02052c04(value);
    return object;
}

uint32_t ffc_arm9_02035ff4(void *object) {
    return ffc_arm9_02035dac((uint8_t *)object + 4) != 0;
}

void *ffc_arm9_0205327c(void *destination, const void *source) {
    void *value = (void *)(uintptr_t)CONST_FIELD(uint32_t, source, 0);
    FIELD(uint32_t, destination, 0) = (uint32_t)(uintptr_t)value;
    if (value) ffc_arm9_02052be0(value);
    return destination;
}

void *ffc_arm9_020059cc(void *object) {
    if (((FfcActiveFlag *)object)->active_00) {
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 8));
    }
    return object;
}

void *ffc_arm9_0200a678(void *object) {
    if (((FfcActiveFlag *)object)->active_00) {
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 8));
    }
    return object;
}

uint32_t ffc_arm9_0205db04(const void *object) {
    void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, object, 4),
        CONST_FIELD(uint32_t, object, 8));
    return (CONST_FIELD(uint32_t, entry, 4) & 1) != 0;
}

uint32_t ffc_arm9_0207cb04(void *object) {
    ffc_arm9_020869d8(object);
    return ffc_arm9_0207cb94(object, 1);
}

uint32_t ffc_arm9_02015a38(void) {
    return ffc_arm9_0203b77c((void *)(uintptr_t)0x020ACD8C);
}

uint32_t ffc_arm9_0203c23c(void) {
    void *object = *(void **)(uintptr_t)0x0213DF18;
    return FIELD(uint32_t, ffc_arm9_0204f7d4(object), 0x24);
}

uint32_t ffc_arm9_0203c250(void) {
    void *object = *(void **)(uintptr_t)0x0213DF18;
    return FIELD(uint32_t, ffc_arm9_0204f7ec(object), 0x24);
}

void *ffc_arm9_0205208c(void *object) {
    FIELD(uint32_t, object, 0) = 0x020B04C8;
    ffc_arm9_02052208(object);
    return object;
}

uint32_t ffc_arm9_02086af0(void *object, uint32_t second, uint32_t third) {
    return ffc_arm9_02086b20(object, 0x7FFFFFFF, second, third);
}

uint32_t ffc_arm9_02063588(const void *object, uint32_t index) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0);
    uint8_t *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, nested, 4),
        CONST_FIELD(uint32_t, nested, 8));
    return (uint32_t)(uintptr_t)(entry + CONST_FIELD(uint32_t, entry, 0x14) + index * 16);
}

uint32_t ffc_arm9_0207ea98(void *object, uint32_t first, uint32_t second) {
    uint32_t pair[2];
    FIELD(uint32_t, object, 0x10) = (uint32_t)(uintptr_t)pair;
    pair[0] = first;
    pair[1] = second;
    return ffc_arm9_0207e0f4(object, 0x0E, 1);
}

uint32_t ffc_arm9_0201e9a8(void *object) {
    return ffc_arm9_0201d204(object, FIELD(uint32_t, object, 0x48), ffc_arm9_0201e920(object));
}

uint32_t ffc_arm9_0203c01c(void *object) {
    return ffc_arm9_02060f6c((void *)(uintptr_t)ffc_arm9_0203c23c(), object, 0, 0);
}

uint32_t ffc_arm9_0203c030(void *object) {
    return ffc_arm9_02060f6c((void *)(uintptr_t)ffc_arm9_0203c250(), object, 0, 0);
}

uint32_t ffc_arm9_0203c06c(void *object) {
    return ffc_arm9_02061094((void *)(uintptr_t)ffc_arm9_0203c23c(), object, 0, 0);
}

uint32_t ffc_arm9_0203c080(void *object) {
    return ffc_arm9_02061094((void *)(uintptr_t)ffc_arm9_0203c250(), object, 0, 0);
}

void *ffc_arm9_02061720(void *object, uint32_t value) {
    ffc_arm9_02061504(object, value);
    FIELD(uint32_t, object, 0) = 0x020B1460;
    FIELD(uint8_t, object, 0x24) = 0;
    return object;
}

void *ffc_arm9_0200d794(void *object) {
    if (FIELD(uint32_t, object, 0) != 0) {
        FIELD(uint32_t, object, 4) = 0;
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_02053d78(void *object) {
    if (FIELD(uint32_t, object, 0) != 0) {
        FIELD(uint32_t, object, 4) = 0;
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_02053f44(void *object) {
    if (FIELD(uint32_t, object, 0) != 0) {
        FIELD(uint32_t, object, 4) = 0;
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_02068378(void *object) {
    if (FIELD(uint32_t, object, 0) != 0) {
        FIELD(uint32_t, object, 4) = 0;
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_020691f4(void *object) {
    if (FIELD(uint32_t, object, 0) != 0) {
        FIELD(uint32_t, object, 4) = 0;
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

uint32_t ffc_arm9_020363bc(const void *object) {
    uint32_t index = CONST_FIELD(uint32_t, object, 0x58) & 0xFF;
    if (index == 0) return 0;
    return (uint32_t)(uintptr_t)ffc_arm9_02015ba4(*(void **)(uintptr_t)0x020B8E44, index);
}

uint32_t ffc_arm9_020363d8(const void *object) {
    void *entry;
    if ((CONST_FIELD(uint32_t, object, 0x58) & 0xFF) == 0) return 0;
    entry = (void *)(uintptr_t)ffc_arm9_020363bc(object);
    return CONST_FIELD(uint16_t, entry, 0x38) != 0;
}

uint32_t ffc_arm9_02035eb8(const void *object) {
    uint32_t index = ((const FfcLowTenBits *)((const uint8_t *)object + 8))->value_00;
    uint8_t *entry;
    if (index == 0) return 0;
    entry = ffc_arm9_020197b4(*(void **)(uintptr_t)0x020B8E44, index);
    return CONST_FIELD(uint8_t, entry, 9);
}

uint32_t ffc_arm9_02035ed8(const void *object) {
    uint32_t index = ((const FfcLowTenBits *)((const uint8_t *)object + 8))->value_00;
    uint8_t *entry;
    if (index == 0) return 0;
    entry = ffc_arm9_020197b4(*(void **)(uintptr_t)0x020B8E44, index);
    return CONST_FIELD(uint8_t, entry, 8);
}

uint32_t ffc_arm9_020522a8(void *object, uint32_t first, uint32_t second) {
    uint32_t value = ffc_arm9_0207ea98((uint8_t *)object + 4, first, second) != 0;
    FIELD(uint8_t, object, 0x54) = value;
    return FIELD(uint8_t, object, 0x54);
}

void ffc_arm9_02060b30(void *object) {
    FIELD(uint8_t, object, 8) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    FIELD(uint32_t, object, 0x10) = 0;
    FIELD(uint32_t, object, 0x14) = 0;
    FIELD(uint32_t, object, 0x18) = 0;
    if (FIELD(uint32_t, object, 4) != 2) ffc_arm9_02060ac8(object);
}

void *ffc_arm9_02061504(void *object, uint32_t value) {
    ffc_arm9_02061314(object);
    FIELD(uint32_t, object, 0) = 0x020B14D0;
    FIELD(uint32_t, object, 0x18) = value;
    FIELD(uint32_t, object, 0x1C) = 0;
    FIELD(uint32_t, object, 0x20) = 0;
    return object;
}

void *ffc_arm9_020617f4(void *object) {
    void *self = object;
    volatile uint32_t *range = (volatile uint32_t *)self;
    uint32_t zero = 0;
    ffc_arm9_02061314(self);
    FIELD(uint32_t, self, 0) = 0x020B13F0;
    FIELD(uint32_t, self, 0x18) = zero;
    range[7] = zero;
    range[8] = zero;
    FIELD(uint32_t, self, 0x24) = zero;
    FIELD(uint32_t, self, 0x28) = zero;
    FIELD(uint32_t, self, 0x2C) = 0x7FFFFFFF;
    FIELD(uint32_t, self, 0x30) = 0x7FFFFFFF;
    return self;
}

void ffc_arm9_0205db7c(int32_t *output, const void *descriptor) {
    const void *entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, descriptor, 4),
        CONST_FIELD(uint32_t, descriptor, 8));
    int32_t second = CONST_FIELD(int32_t, entry, 0x14);
    entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, descriptor, 4),
        CONST_FIELD(uint32_t, descriptor, 8));
    output[0] = CONST_FIELD(int32_t, entry, 0x10) >> 3;
    output[1] = second >> 3;
}

uint32_t ffc_arm9_0207e5d0(void *object, uint32_t first, uint32_t second) {
    void *self = object;
    uint32_t context[18];
    FIELD(uint32_t, self, 0x20) = first;
    FIELD(uint32_t, self, 0x24) = second;
    ffc_arm9_0207e890(context);
    context[2] = (uint32_t)(uintptr_t)self;
    ffc_arm9_0207dd08(context, 0x11);
    FIELD(uint32_t, self, 0x14) |= 2;
    return 1;
}

void ffc_arm9_020692a4(void *object) {
    typedef void (*Method)(void *, uint32_t);
    void *self = object;
    uint32_t zero = 0;
    if (FIELD(uint8_t, self, 0x84) != 0) {
        FIELD(uint8_t, self, 0x84) = zero;
        ((Method)(uintptr_t)CONST_FIELD(uint32_t,
            (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0), 0x20))(object, zero);
        if (FIELD(uint8_t, self, 0x85) != 0) {
            FIELD(uint8_t, self, 0x85) = zero;
            object = self;
            ((Method)(uintptr_t)CONST_FIELD(uint32_t,
                (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0), 0x1C))(object, zero);
        }
    }
}

void *ffc_arm9_02015ba4(void *unused, uint32_t index) {
    const void *catalog = (const void *)(uintptr_t)0x020B8E70;
    uint8_t *entry;
    uint8_t *table;
    (void)unused;
    entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, catalog, 0x70),
        CONST_FIELD(uint32_t, catalog, 0x74));
    table = entry + FIELD(uint32_t, entry, 0x24);
    return entry + *(uint32_t *)(table + index * 4);
}

void *ffc_arm9_02015c98(void *unused, uint32_t index) {
    const void *catalog = (const void *)(uintptr_t)0x020B8EF0;
    uint8_t *entry;
    uint8_t *table;
    (void)unused;
    entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, catalog, 0x10),
        CONST_FIELD(uint32_t, catalog, 0x14));
    table = entry + FIELD(uint32_t, entry, 0x0C);
    return entry + *(uint32_t *)(table + index * 4);
}

void *ffc_arm9_02017714(void *unused, const uint8_t *index) {
    const void *catalog = (const void *)(uintptr_t)0x020B8E70;
    uint32_t value = *index;
    uint8_t *entry;
    (void)unused;
    entry = ffc_mar_entry(
        (const FfcMarDecoded *)(uintptr_t)CONST_FIELD(uint32_t, catalog, 0x60),
        CONST_FIELD(uint32_t, catalog, 0x64));
    return entry + FIELD(uint32_t, entry, 0x0C) + (value - 1) * 12;
}

uint32_t ffc_arm9_02036134(const void *object) {
    uint32_t index = CONST_FIELD(uint32_t, object, 0x58) & 0xFF;
    uint8_t *entry = ffc_arm9_02017dd8(*(void **)(uintptr_t)0x020B8E44, index);
    return CONST_FIELD(uint16_t, entry + CONST_FIELD(uint32_t, entry, 8), 0x26);
}

void ffc_arm9_020375f4(uint32_t mask) {
    uint32_t value = *(uint32_t *)(uintptr_t)0x021395B0;
    if ((value | mask) != value) ffc_arm9_0203760c(mask);
}

void *ffc_arm9_02037f40(void *object) {
    ffc_arm9_0209d02c((uint8_t *)object + 0x14, 2, 0x160, 0x02037B91);
    return object;
}

uint32_t ffc_arm9_02037f98(void *object, uint32_t value) {
    FIELD(uint32_t, object, 4) = value;
    switch (value) {
    case 1:
        ffc_arm9_02037fac();
        break;
    case 2:
        break;
    }
    return 1;
}

uint32_t ffc_arm9_0205816c(
    void *first, uint32_t second, uint32_t third, uint32_t fourth,
    uint32_t fifth, uint32_t sixth, uint32_t seventh) {
    void *result = ffc_arm9_02057df8(first, second, third, fourth, fifth, sixth, seventh);
    return FIELD(uint32_t, result, 4);
}

uint32_t ffc_arm9_0205fc5c(
    void *object, uint32_t first, uint32_t second, uint32_t third, uint32_t fourth) {
    return ffc_arm9_0205fc78(object, FIELD(uint32_t, object, 0x40), first, second, third, fourth);
}

void *ffc_arm9_0205ff14(void *object, uint32_t index, uint32_t third) {
    void *result = ffc_arm9_02057df8(object, index * 8, third, 4, 0, 0, 0);
    FIELD(uint32_t, result, 0x10) = index;
    return result;
}

uint32_t ffc_arm9_020098e0(void) {
    ffc_arm9_02091a24((void *)(uintptr_t)0x020AAD94);
    return ffc_arm9_0208f42c();
}

void ffc_arm9_02009574(void *object, uint32_t value) {
    ffc_arm9_02009730(object, 1);
    ffc_arm9_020097b0(object, 1, value);
}

void ffc_arm9_0200d5d4(void *object, uint32_t value) {
    ffc_arm9_0200d608(object, 1);
    ffc_arm9_0200d688(object, 1, value);
}

void ffc_arm9_02053d60(void *object, uint32_t value) {
    ffc_arm9_02053ce0(object, 1);
    ffc_arm9_02053e28(object, 1, value);
}

void ffc_arm9_02065740(void *object, uint32_t value) {
    ffc_arm9_02065a58(object, 1);
    ffc_arm9_02065ad8(object, 1, value);
}

void ffc_arm9_02067f84(void *object, uint32_t value) {
    ffc_arm9_020681ac(object, 1);
    ffc_arm9_0206822c(object, 1, value);
}

void ffc_arm9_02069024(void *object, uint32_t value) {
    ffc_arm9_02069058(object, 1);
    ffc_arm9_020690d8(object, 1, value);
}

void ffc_arm9_020161cc(void *object) {
    uint32_t temporary[3];
    ffc_arm9_02005988(temporary, (const void *)(uintptr_t)0x020ACEE0);
    ffc_arm9_020161f4(object, temporary);
    ffc_arm9_020059cc(temporary);
}

void ffc_arm9_0201762c(void *object) {
    uint32_t temporary[3];
    ffc_arm9_02005988(temporary, (const void *)(uintptr_t)0x020AD110);
    ffc_arm9_02017654(object, temporary);
    ffc_arm9_020059cc(temporary);
}

void ffc_arm9_02019c78(void *object) {
    uint32_t temporary[3];
    ffc_arm9_02005988(temporary, (const void *)(uintptr_t)0x020AD478);
    ffc_arm9_02019ca0(object, temporary);
    ffc_arm9_020059cc(temporary);
}

uint32_t ffc_arm9_02058228(void) {
    return ffc_arm9_02055110(*(void **)(uintptr_t)0x0213E098, ffc_arm9_020581e4());
}

uint32_t ffc_arm9_0205fb50(void) {
    return ffc_arm9_02055110(*(void **)(uintptr_t)0x0213E098, ffc_arm9_0205fac0());
}

uint32_t ffc_arm9_0208b52c(void *object) {
    uint32_t result;
    uint32_t status = ffc_arm9_0208b4f4(object, 0x0208B221, &result);
    if (status == 0) {
        ffc_arm9_0208b1cc();
        status = result;
    }
    return status;
}

uint32_t ffc_arm9_0208b5a4(void *object, uint32_t value) {
    uint32_t result;
    uint32_t status = ffc_arm9_0208b548(object, value, 0x0208B221, &result);
    if (status == 0) {
        ffc_arm9_0208b1cc();
        status = result;
    }
    return status;
}

void *ffc_arm9_02056b10(void *owner) {
    void *object = ffc_arm9_0205681c(0x18);
    if (object) {
        FIELD(uint32_t, object, 0x0C) &= ~0xFFu;
        FIELD(uint32_t, object, 0) = 0x020B0B40;
        FIELD(uint32_t, object, 0x14) = (uint32_t)(uintptr_t)owner;
    }
    return object;
}

void *ffc_arm9_02062a30(void *owner) {
    void *object = ffc_arm9_0205681c(0x18);
    if (object) {
        FIELD(uint32_t, object, 0x0C) &= ~0xFFu;
        FIELD(uint32_t, object, 0) = 0x020B1588;
        FIELD(uint32_t, object, 0x14) = (uint32_t)(uintptr_t)owner;
    }
    return object;
}

void ffc_arm9_02005d8c(void *object) {
    uint64_t value = ffc_arm9_020882cc(ffc_arm9_0208823c());
    FIELD(uint32_t, object, 0x88) = (uint32_t)value;
    FIELD(uint32_t, object, 0x8C) = (uint32_t)(value >> 32);
    FIELD(uint8_t, object, 0x84) = 1;
}

void *ffc_arm9_02005d3c(void *object) {
    ffc_arm9_02056c9c(object, 0);
    FIELD(uint32_t, object, 0) = 0x020A7E94;
    FIELD(uint32_t, object, 0x80) = 0;
    FIELD(uint8_t, object, 0x84) = 0;
    FIELD(uint32_t, object, 0x88) = 0;
    FIELD(uint32_t, object, 0x8C) = 0;
    return object;
}

void *ffc_arm9_02009928(void *object) {
    if (FIELD(uint32_t, object, 0)) {
        FfcByteValue result = {0};
        ffc_arm9_02009954(object, FIELD(uint32_t, object, 4), result);
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_020659f8(void *object) {
    if (FIELD(uint32_t, object, 0)) {
        FfcByteValue result = {0};
        ffc_arm9_02065bdc(object, FIELD(uint32_t, object, 4), result);
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

void *ffc_arm9_02065ca4(void *object) {
    if (FIELD(uint32_t, object, 0)) {
        FfcByteValue result = {0};
        ffc_arm9_02065cd0(object, FIELD(uint32_t, object, 4), result);
        ffc_arm9_02056844((void *)(uintptr_t)FIELD(uint32_t, object, 0));
    }
    return object;
}

uint32_t ffc_arm9_02005f1c(void *object, uint32_t third) {
    uint32_t value;
    if (((const FfcActiveFlag *)object)->active_00 == 0) {
        value = ((const FfcActiveAndSeven *)object)->value_01;
    } else {
        value = FIELD(uint32_t, object, 4);
    }
    return ffc_arm9_02005f3c(object, 0, value, third);
}

uint32_t ffc_arm9_0201a3a0(void *object, const void *third) {
    uint32_t value;
    if (((const FfcActiveFlag *)object)->active_00 == 0) {
        value = ((const FfcActiveAndSeven *)object)->value_01;
    } else {
        value = FIELD(uint32_t, object, 4);
    }
    return ffc_arm9_02005f3c(object, value, 0, (uint32_t)(uintptr_t)third);
}

uint32_t ffc_arm9_02008f2c(void *object, FfcWordValue value) {
    (void)value;
    return ffc_arm9_0200960c(object);
}

void *ffc_arm9_0205323c(void *object) {
    uint32_t temporary[3];
    ffc_arm9_020095b8(temporary);
    FIELD(uint32_t, object, 0) = (uint32_t)(uintptr_t)ffc_arm9_020529ac(temporary);
    ffc_arm9_020059cc(temporary);
    return object;
}

void *ffc_arm9_02035fd0(void *object) {
    ffc_arm9_02035e30((uint8_t *)object + 0x24);
    ffc_arm9_0209d02c((uint8_t *)object + 4, 4, 8, 0x02035D6D);
    ffc_arm9_02035c18(object);
    return object;
}

uint32_t ffc_arm9_0208f42c(void) {
    void *global = (void *)(uintptr_t)0x021446D0;
    ffc_arm9_020927bc(1);
    FIELD(uint32_t, global, 0x0C) = 1;
    return ffc_arm9_0208f4b8(1);
}

uint32_t ffc_arm9_02062884(void *object) {
    uint32_t result[2];
    FfcVirtualPairTable *table = *(FfcVirtualPairTable **)object;
    table->call_18(result, object);
    return result[0];
}

void ffc_arm9_020867dc(uint32_t value) {
    while (ffc_arm9_02089218(0x0C, value << 8, 0) != 0) {
    }
}

void ffc_arm9_020528d0(void) {
    void *global = (void *)(uintptr_t)0x0213DFDC;
    FIELD(uint32_t, global, 4) = (uint32_t)(uintptr_t)ffc_arm9_02056830(0x2004);
    FIELD(uint32_t, global, 8) = (uint32_t)(uintptr_t)ffc_arm9_02056830(0x2004);
}

uint32_t ffc_arm9_0205fa1c(
    uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth) {
    return ffc_arm9_02055110(
        *(void **)(uintptr_t)0x0213E098,
        ffc_arm9_0205f960(first, second, third, fourth, fifth));
}

void ffc_arm9_0207da90(void) {
    void *global = (void *)(uintptr_t)0x021410C0;
    ffc_arm9_020890f8();
    FIELD(uint32_t, global, 0) = 0;
    FIELD(uint32_t, global, 4) = 0;
    ffc_arm9_020891a8(0x0E, 0x0207DAB5);
    FIELD(uint32_t, global, 8) = 0;
}

uint32_t ffc_arm9_02030f9c(uint32_t first, uint32_t second, uint32_t third) {
    return ffc_arm9_02030f24(first, second, third, ffc_arm9_02092864(second));
}

uint32_t ffc_arm9_020356d8(uint32_t index, void *object) {
    const void * const *table = (const void * const *)(uintptr_t)0x020AE5B8;
    ffc_arm9_0201a3a0(object, (const void *)(uintptr_t)0x020AE60C);
    return ffc_arm9_0201a3a0(object, table[index]);
}

void *ffc_arm9_020358c8(void *object) {
    uint32_t *table = (uint32_t *)(uintptr_t)0x02139508;
    uint32_t index;
    FIELD(uint32_t, object, 0) = 0x020AE478;
    FIELD(uint32_t, object, 4) = 0;
    FIELD(uint32_t, object, 8) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    ffc_arm9_020358f8(object);
    for (index = 0; index < 0x15; index++) table[index] = 0;
    return object;
}

void ffc_arm9_02056bc0(void *object, void *node) {
    uint8_t guarded = FIELD(uint8_t, object, 0x12);
    void *guard = (uint8_t *)object + 0x1C;

    if (guarded != 0) {
        ffc_arm9_0208763c(guard);
    }
    *(void **)(uintptr_t)FIELD(uint32_t, object, 0x18) = node;
    FIELD(uint32_t, object, 0x18) = (uint32_t)(uintptr_t)((uint8_t *)node + 4);
    FIELD(uint32_t, node, 4) = 0;
    if (guarded != 0) {
        ffc_arm9_02087678(guard);
    }
}

void ffc_arm9_0201506c(void *object, void *const *source, uint32_t value) {
    void *owned = *source;
    FIELD(uint32_t, object, 0) = (uint32_t)(uintptr_t)owned;
    FIELD(uint32_t, object, 4) = value;
    FIELD(uint8_t, object, 8) = 0;
    if (owned != 0) {
        ffc_arm9_02052be0(owned);
        if (FIELD(uint8_t, object, 8) != 0) {
            ffc_arm9_02052c94((void *)(uintptr_t)FIELD(uint32_t, object, 0),
                              FIELD(uint32_t, object, 4));
        }
    }
}

uint32_t ffc_arm9_02064390(void *object, uint32_t first, uint32_t second) {
    FfcWordPair pair;
    FfcVirtualWordPairTable *table = *(FfcVirtualWordPairTable **)object;
    pair.value_00 = first;
    pair.value_04 = second;
    return table->call_0c(object, pair);
}

uint32_t ffc_arm9_0206687c(void *object, uint32_t first, uint32_t second) {
    FfcWordPair pair;
    FfcVirtualWordPairTable *table = *(FfcVirtualWordPairTable **)object;
    pair.value_00 = first;
    pair.value_04 = second;
    return table->call_0c(object, pair);
}

void ffc_arm9_02069288(void *object) {
    typedef void (*Method)(void *);
    typedef struct {
        Method *table;
        uint8_t unknown_04[0x80];
        uint8_t active_84;
    } Object;
    Object *self = (Object *)object;
    if (self->active_84 == 0) {
        self->active_84 = 1;
        self->table[8](object);
    }
}

void ffc_arm9_02084800(void) {
    ffc_arm9_020847b0(0);
    ffc_arm9_020847b0(1);
    ffc_arm9_020847b0(2);
    ffc_arm9_020847b0(3);
}

void ffc_arm9_0204f474(void) {
    typedef struct {
        uint8_t unknown_00[8];
        void *value_08;
    } Global;
    void *value = ffc_arm9_0205681c(0x98);
    if (value != 0) {
        value = ffc_arm9_0204f494(value);
    }
    ((Global *)ffc_arm9_0213df10)->value_08 = value;
    ffc_arm9_0204f300(value);
}

void *ffc_arm9_020578c0(void *object, uint32_t value) {
    uint32_t zero = 0;
    void *self = object;
    ffc_arm9_020548b4(self, value, zero);
    FIELD(uint8_t, self, 0x1D) = zero;
    FIELD(uint32_t, self, 0) = (uint32_t)(uintptr_t)ffc_arm9_020b0ca4;
    FIELD(uint32_t, self, 0x14) = (uint32_t)(uintptr_t)ffc_arm9_020b0cb8;
    return self;
}

void ffc_arm9_0207fe54(void *object) {
    if (ffc_arm9_02141364[0] == 0) {
        ffc_arm9_02141364[0] = 1;
        ffc_arm9_0207eb4c(ffc_arm9_0207fd30(object));
    }
}

void ffc_arm9_0208b6e4(uint32_t value) {
    while (ffc_arm9_02089218(8, value, 0) != 0) {
    }
}

void ffc_arm9_0208bbd0(void *node) {
    typedef void (*Callback)(void *);
    typedef struct Node {
        Callback callback_00;
        void *argument_04;
        uint32_t unknown_08;
        struct Node *next_0c;
    } Node;
    Node *current = (Node *)node;
    while (current != 0) {
        current->callback_00(current->argument_04);
        current = current->next_0c;
    }
}

void *ffc_arm9_02035e10(void *object) {
    ffc_arm9_02035d34(object);
    FIELD(uint32_t, object, 0) = (uint32_t)(uintptr_t)ffc_arm9_020ae654;
    FIELD(uint32_t, object, 8) &= 0xFFFFFC00;
    return object;
}

void *ffc_arm9_020548b4(void *object, uint32_t first, uint32_t second) {
    typedef struct {
        uint32_t type_00;
        uint8_t unknown_04[8];
        uint32_t low_flags_0c : 8;
        uint32_t high_flags_0d : 24;
        uint8_t unknown_10[4];
        uint32_t nested_type_14;
    } Object;
    Object *self = (Object *)object;
    (void)first;
    (void)second;
    self->type_00 = (uint32_t)(uintptr_t)ffc_arm9_020aadd0;
    self->low_flags_0c = 0;
    ffc_arm9_02054680(&self->nested_type_14);
    self->type_00 = (uint32_t)(uintptr_t)ffc_arm9_020b0660;
    self->nested_type_14 = (uint32_t)(uintptr_t)ffc_arm9_020b0674;
    return self;
}

void ffc_arm9_0209cc90(void) {
    void (**current)(void) = ffc_arm9_020a7b3c;
    while (current != 0 && *current != 0) {
        (*current)();
        current++;
    }
}

void ffc_arm9_020886bc(void *node) {
    typedef struct Node {
        uint8_t unknown_00[0x14];
        struct Node *previous_14;
        struct Node *next_18;
    } Node;
    typedef struct {
        uint8_t unknown_00[0x0C];
        Node *head_0c;
        Node *tail_10;
    } Global;
    Global *global = (Global *)(uintptr_t)0x02141874;
    uintptr_t zero = 0;
    Node *previous = global->tail_10;
    Node *self = (Node *)node;
    self->previous_14 = previous;
    self->next_18 = (Node *)zero;
    global->tail_10 = self;
    if (previous != 0) {
        previous->next_18 = self;
        return;
    }
    global->head_0c = self;
    ffc_arm9_020887cc(self);
}

uint32_t ffc_arm9_0207e96c(void *object, uint32_t second, uint32_t third,
                           uint32_t fourth, uint32_t fifth) {
    uint32_t arguments[4];
    FIELD(uint32_t, object, 0x08) = second;
    FIELD(uint32_t, object, 0x10) = (uint32_t)(uintptr_t)arguments;
    arguments[1] = third;
    arguments[0] = fifth;
    arguments[3] = 0;
    arguments[2] = fourth;
    return ffc_arm9_0207e0f4(object, 7, 1);
}

void *ffc_arm9_02069210(void *object) {
    void *self = object;
    uint32_t zero = 0;
    ffc_arm9_02056c9c(self, 0);
    FIELD(uint32_t, self, 0) = (uint32_t)(uintptr_t)ffc_arm9_020b1aec;
    FIELD(uint32_t, self, 0x80) = zero;
    FIELD(uint8_t, self, 0x84) = 1;
    FIELD(uint8_t, self, 0x85) = zero;
    FIELD(uint8_t, self, 0x86) = zero;
    FIELD(uint8_t, self, 0x87) = zero;
    FIELD(uint8_t, self, 0x88) = zero;
    FIELD(uint32_t, self, 0x8C) = zero;
    FIELD(int32_t, self, 0x90) = -1;
    return self;
}

void *ffc_arm9_0205ffac(void *object, uint32_t index, uint32_t third) {
    void *result = ffc_arm9_02057df8(object, index << 5, third, 4, 0, 0, 0);
    FIELD(uint32_t, result, 0x10) =
        (CONST_FIELD(uint32_t, result, 4) - CONST_FIELD(uint32_t, object, 4)) >> 5;
    return result;
}

void *ffc_arm9_020487a0(void *container, void *position) {
    uint8_t *end = (uint8_t *)(uintptr_t)CONST_FIELD(uint32_t, container, 0) +
                   CONST_FIELD(uint32_t, container, 4) * 4;
    int32_t count = ((int32_t)(end - (uint8_t *)position) / 4) - 1;
    ffc_arm9_02090398(position, (uint8_t *)position + 4, count * 4);
    FIELD(uint32_t, container, 4)--;
    return position;
}

uint32_t ffc_arm9_0208b4a4(uint32_t first, uint32_t second, uint32_t third,
                           uint32_t fourth, uint32_t fifth) {
    uint32_t words[2];
    words[0] = 0x02006100U | (first & 0xFF);
    words[1] = 0x01010000U | (second & 0xFFFF);
    return ffc_arm9_0208b38c(words, 2, third, fourth, fifth);
}

void *ffc_arm9_02057148(void *object, int32_t second, uint32_t third,
                        uint32_t fourth) {
    void *self = object;
    uint32_t zero = 0;
    int32_t invalid = -1;
    FIELD(uint32_t, self, 0x0C) &= ~0xFFU;
    FIELD(int32_t, self, 0x1C) = invalid;
    FIELD(int32_t, self, 0x24) = invalid;
    FIELD(uint8_t, self, 0x13) = zero;
    FIELD(uint32_t, self, 0) = (uint32_t)(uintptr_t)ffc_arm9_020b0c1c;
    FIELD(uint8_t, self, 0x14) = zero;
    FIELD(uint8_t, self, 0x15) = zero;
    FIELD(uint32_t, self, 0x2C) = 1;
    FIELD(uint32_t, self, 0x30) = zero;
    FIELD(int32_t, self, 0x38) = second;
    FIELD(uint32_t, self, 0x3C) = third;
    FIELD(int32_t, self, 0x1C) =
        ffc_arm9_0208f694(second - (int32_t)third, 0, third, fourth, invalid) + 1;
    FIELD(int32_t, self, 0x40) = second < (int32_t)third ? invalid : 1;
    return self;
}
