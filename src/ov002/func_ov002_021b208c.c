/* cflags:  */
/* From arcnid/ffc-decomp src/battle/phase_pair_dispatch_021B208C.c, externs renamed. */
/* Matched: 0x021B208C  size 0xE6 (230)  -O4,p
   Phase dispatch: gated on global<=1; sets byte-status |1 at s+0x5A / s+0x26; chained ctor+register;
   switch on *(s+0xA4): cases 4/5/6 store distinct global Pair to s+0x80 (whole-Pair copy), 0-3 extra call. */
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


typedef struct { u32 x, y; } Pair;

extern s32 data_ov002_021d7954;
extern Pair data_ov002_021d5990;
extern Pair data_ov002_021d5998;
extern Pair data_ov002_021d59a0;
extern Pair data_ov002_021d59a8;
extern Pair data_ov002_021d59b0;

extern void* func_0203c2f4(void);
extern void func_020591f4(void* a, u32 b);
extern void* func_ov002_021b2170(void* s, Pair p, u32 f);
extern void func_02056bc0(void* a, void* b);
extern void* func_02021610(u32 a, u32 b);

void func_ov002_021b208c(u8* s)
{
    u8* a;
    u8* b;
    void* r;
    u32 phase;

    if (data_ov002_021d7954 > 1) {
        return;
    }
    a = s + 0x48;
    *(u8*)(a + 0x12) = (*(u8*)(a + 0x12) & ~0xFF) | 1;
    b = s + 0x14;
    *(u8*)(b + 0x12) = (*(u8*)(b + 0x12) & ~0xFF) | 1;
    func_020591f4(func_0203c2f4(), 5);
    r = func_ov002_021b2170(s, data_ov002_021d5990, 1);
    func_02056bc0(s + 0x14, r);
    phase = *(u32*)(s + 0xA4);
    switch (phase) {
    case 4:
        *(Pair*)(s + 0x80) = data_ov002_021d5998;
        return;
    case 5:
        *(Pair*)(s + 0x80) = data_ov002_021d59a0;
        return;
    case 6:
        *(Pair*)(s + 0x80) = data_ov002_021d59a8;
        return;
    case 0: case 1: case 2: case 3:
        r = func_02021610(0x42C, 0);
        func_02056bc0(s + 0x14, r);
        *(Pair*)(s + 0x80) = data_ov002_021d59b0;
        break;
    }
}
