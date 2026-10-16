/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vec_ctor_move_assign_021C59B4.c, externs renamed. */
/* Matched: 021C59B4 size 0xC4 (196 bytes, -O4,p).
   Ctor for an object with an embedded vector-like sub-object at self+0x10
   ({u32 f0; void* f4(data); u32 f8(count/cap); u8 fc(flag)}), plus a
   "data/size/flag" group at self+0x14/0x18/0x1c mirrored from a locally
   constructed temporary (Local). Shape:
     self[0]=vtable; self[4]=param1; self[8]=0; Init(self+0x10);
     (self+0x10)->f4=0; (self+0x10)->fc=0;
     if (param1) {
       LocalCtor(&local, data_020b8e44, param1);
       Op(self+0x10, &local);
       if (&local.f4 != &((Local*)(self+0x10))->f4) {   // SBO/self-ref guard (always false here, compiler can't disprove)
         free-old self->{0x14,0x18,0x1c} group (condfree_thunk idiom);
         move local's {f4,f8,fc} into self->{0x14,0x18,0x1c};
         if (f4v) { func_02052be0(f4v, fcv); if (self->0x1c) func_02052d10(self->0x14, self->0x18); }
       }
       free local itself (condfree_thunk idiom on &local, aliased via Local* ap
       to pin a callee-saved base reg for the mixed sp-relative/base-reg access);
       Fini(&local);
       self->0xc = 0; self->0xd = 1;
     } else {
       self->0xc = 1; self->0xd = 0;
     }
     return self;

   Key levers found:
   - vtable literal is an ADDRESS constant (single ldr[pc], no deref) — declare
     `extern u32 data_ov002_021d7474[1];` and assign `(u32)data_ov002_021d7474`, NOT a dereferenced global.
   - data_020b8e44 is a VALUE read through a global (double ldr: addr then deref) —
     matches the lockguard family's `extern u32 data_020b8e44;` used by value.
   - "sub" (self+0x10) must NOT be a function-wide cached variable: only the
     first block (Init + two zero-stores) keeps it in r6; the Op-call argument
     and the later SBO-guard pointer are each freshly recomputed from self (r5)
     via `(u8*)self + 0x10` repeated inline — caching in a named var persists
     it in r6 and desyncs the regalloc for the whole rest of the function.
   - The SBO-guard comparison must go through a typed `Local*` cast + `&p->f4`
     (struct field address), NOT raw `base + 4` pointer arithmetic — the latter
     constant-folds to a single `adds #0x14`, but the original keeps it as two
     adds (+0x10 then +4) via the struct-field address computation.
   - self's own heap fields (self+0x14/0x18/0x1c) are read via raw repeated
     `*(T*)((u8*)self+OFF)` expressions (dtor_condfree_thunk idiom, no caching)
     when used as the FreeA/FreeB guard — matches 021C9BB4's pattern exactly.
   - The locally-constructed temp's fields (local.f4/local.fc), when moved into
     self AND reused immediately after as call args, DO need named locals
     (f4v/fcv) to keep them live in registers instead of reloading from the
     stack struct for every occurrence.
   - func_02052d10 is NESTED inside `if (f4v != 0)` (not a sibling if) — the
     guard beq skips both calls together.
   - Final "free + Fini" on &local needs the alias-pointer idiom
     (`Local* ap = &local;` — direct `local.f4` for the sp-relative guard,
     `ap->` for the rest) to pin &local into a callee-saved reg (r4) matching
     the base-reg addressing the original uses for ldrb[r4,#0xc]/ldr[r4,#4]/
     ldr[r4,#8] and the final Fini(r4) call.
*/
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


typedef struct { u32 f0; void* f4; u32 f8; u8 fc; } Local;

extern u32 data_ov002_021d7474[1];
extern u32 data_020b8e44;
extern void func_02053234(void* sub);
extern void func_02019b9c(Local* out, u32 g, void* param1);
extern void func_020532a4(void* sub, Local* local);
extern void func_02052d3c(void* p, u32 n);
extern void func_02052c04(void* p);
extern void func_02053290(void* s);
extern void func_02052be0(void* p, u32 flag);
extern void func_02052d10(void* p, u32 n);

void* func_ov002_021c59b4(void* self, void* param1)
{
    u8* sub;
    Local local;

    *(u32*)self = (u32)data_ov002_021d7474;
    *(void**)((u8*)self + 4) = param1;
    *(u32*)((u8*)self + 8) = 0;
    sub = (u8*)self + 0x10;
    func_02053234(sub);
    *(u32*)(sub + 4) = 0;
    *(u8*)(sub + 0xc) = 0;
    if (param1 != 0) {
        func_02019b9c(&local, data_020b8e44, param1);
        func_020532a4((u8*)self + 0x10, &local);
        {
            Local* selfSub = (Local*)((u8*)self + 0x10);
            if (&local.f4 != &selfSub->f4) {
                if (*(void**)((u8*)self + 0x14) != 0) {
                    if (*(u8*)((u8*)self + 0x1c) != 0) {
                        func_02052d3c(*(void**)((u8*)self + 0x14), *(u32*)((u8*)self + 0x18));
                    }
                    func_02052c04(*(void**)((u8*)self + 0x14));
                }
                {
                    void* f4v = local.f4;
                    u8 fcv;
                    *(void**)((u8*)self + 0x14) = f4v;
                    *(u32*)((u8*)self + 0x18) = local.f8;
                    fcv = local.fc;
                    *(u8*)((u8*)self + 0x1c) = fcv;
                    if (f4v != 0) {
                        func_02052be0(f4v, fcv);
                        if (*(u8*)((u8*)self + 0x1c) != 0) {
                            func_02052d10(*(void**)((u8*)self + 0x14), *(u32*)((u8*)self + 0x18));
                        }
                    }
                }
            }
        }
        {
            Local* ap = &local;
            if (local.f4 != 0) {
                if (ap->fc != 0) {
                    func_02052d3c(ap->f4, ap->f8);
                }
                func_02052c04(ap->f4);
            }
            func_02053290(ap);
        }
        *(u8*)((u8*)self + 0xc) = 0;
        *(u8*)((u8*)self + 0xd) = 1;
    } else {
        *(u8*)((u8*)self + 0xc) = 1;
        *(u8*)((u8*)self + 0xd) = 0;
    }
    return self;
}
