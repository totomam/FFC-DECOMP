/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vecmath_021B3810.c, externs renamed. */
/* Matched: 0x021B3810  size 0x46  -O4,p */
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

extern void* func_ov002_021ae734(void*);
extern void* func_ov002_0219b850(void*);
extern s32 func_ov002_021ae5fc(void*);
extern s32 func_ov002_021ae5f4(void*);
extern void func_ov002_021b37c4(void*, void*, s32);
extern u8 data_ov002_021d59ec;
void func_ov002_021b3810(void* out, void* b) {
    struct { s32 lo, hi; } t;
    void* r7;
    s32 c;
    s32 vhi, vlo;
    r7 = func_ov002_0219b850(func_ov002_021ae734(b));
    c = func_ov002_021ae5fc(b);
    func_ov002_021b37c4(&t, r7, c + func_ov002_021ae5f4(b) * 4);
    vhi = *(s32*)((u8*)&data_ov002_021d59ec + 0x14) + t.hi;
    vlo = *(s32*)((u8*)&data_ov002_021d59ec + 0x10) + t.lo;
    *(s32*)out = vlo;
    *(s32*)((u8*)out + 4) = vhi;
}
