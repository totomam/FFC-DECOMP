/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_cleanup2_021C2A0C.c, externs renamed. */
/* Matched: 0x021C2A0C  size 0x3E  -O4 */
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

extern u32 data_ov002_021d70f8;
extern void func_02061344(void*);
extern void func_ov002_021c2f9c(void*);
extern void func_020059cc(void*);
extern void func_02056db0(void*);
extern void func_02056844(void*);
void* func_ov002_021c2a0c(void* self) {
    void* p;
    *(u32*)self = (u32)&data_ov002_021d70f8;
    p = *(void**)((u8*)self + 0xac);
    if (p != 0) {
        func_02061344(p);
        *(u32*)((u8*)self + 0xac) = 0;
    }
    func_ov002_021c2f9c((u8*)self + 0xa0);
    func_020059cc((u8*)self + 0x80);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
