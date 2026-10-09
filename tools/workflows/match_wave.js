export const meta = {
  name: 'ffc-match-wave',
  description: 'Haiku match wave over queued FFC functions, Sonnet escalation for misses',
  phases: [{ title: 'Haiku' }, { title: 'Sonnet' }],
}
// args: array of function names (from tools/mkwave.py --names)
const SCHEMA = { type: 'object', properties: {
  matched: { type: 'boolean' }, best_pct: { type: 'number' }, file: { type: 'string' }, note: { type: 'string' } },
  required: ['matched', 'best_pct', 'file', 'note'] }
const task = (f, tier) => `Working directory: /home/user/FFC-DECOMP — \`cd\` there before every command.
Run \`tools/prompt ${f} ${tier}\` once: it prints your full task (target asm, rules, attempt cap). Follow it exactly.`
const out = await pipeline(args,
  f => agent(task(f, 'haiku'), { label: `haiku:${f}`, phase: 'Haiku', agentType: 'fn-matcher', model: 'haiku', schema: SCHEMA })
    .then(r => ({ func: f, haiku: r })),
  async (r, f) => {
    if (r.haiku && r.haiku.matched) return { ...r, tier: 'haiku' }
    const h = r.haiku
    const p = task(f, 'sonnet') + (h ? `\nA Haiku worker's best attempt (${h.best_pct}%): ${h.file} — note: ${h.note}. You may start from it.` : '')
    const s = await agent(p, { label: `sonnet:${f}`, phase: 'Sonnet', agentType: 'fn-matcher', model: 'sonnet', schema: SCHEMA })
    return { ...r, sonnet: s, tier: s && s.matched ? 'sonnet' : 'fail' }
  })
return out
