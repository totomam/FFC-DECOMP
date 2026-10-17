/* cflags:  */
/* From arcnid/ffc-decomp src/battle/dtor_fill_buf32_021C2870.c, externs renamed. */
/* 021C2870  size 0x70 (112B)  -O4,p
   Complete dtor: sets vtable, fills 0x20-byte global buffer (0x00 if field+0x18 < 0
   else 0x7F) and reconfigures channel object at +0x24 via three helper calls. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

extern u32 data_ov002_021d70b8;
extern u8 data_ov002_021d7994[];
extern void func_02022f5c(u32 obj, u32 a, u32 b, u32 c, u32 d);
extern void func_02022f84(u32 obj, u32 a, u32 b);
extern void func_02022f9c(u32 obj, u8* p);

void* func_ov002_021c2870(void* self) {
    u8* s = (u8*)self;
    *(u32*)s = (u32)&data_ov002_021d70b8;
    if (*(s32*)(s + 0x18) < 0) {
        s32 i;
        u8* p;
        i = 0;
        p = data_ov002_021d7994;
        do { i++; *p = 0; p++; } while (i < 0x20);
        func_02022f5c(*(u32*)(s + 0x24), 0, 0, 0, 0);
    } else {
        s32 i;
        u8* p;
        i = 0;
        p = data_ov002_021d7994;
        do { i++; *p = 0x7f; p++; } while (i < 0x20);
        func_02022f5c(*(u32*)(s + 0x24), 1, 0, 0, 0);
        func_02022f84(*(u32*)(s + 0x24), 0, 0x1f);
        func_02022f9c(*(u32*)(s + 0x24), data_ov002_021d7994);
    }
    return s;
}
