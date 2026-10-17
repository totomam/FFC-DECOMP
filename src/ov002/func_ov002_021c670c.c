/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_std_021C6680.c, externs renamed. */
/* Matched: 0x021C6680  size 0x3E  -O4 */
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

extern u32 data_ov002_021d74e8;
extern void func_02056c4c(void*);
extern s32 func_ov002_021bf7e0(void*);
extern void func_02021380(s32);
extern void func_02035c18(void*);
extern void func_02056db0(void*);
void* func_ov002_021c670c(void* self) {
    void* p;
    s32 r;
    *(u32*)self = (u32)&data_ov002_021d74e8;
    func_02056c4c((u8*)self + 0x14);
    p = *(void**)((u8*)self + 0x80);
    r = 0;
    if (p != 0) r = func_ov002_021bf7e0(p);
    if (r != 0) func_02021380(0);
    func_02035c18((u8*)self + 0xac);
    func_02056db0(self);
    return self;
}
