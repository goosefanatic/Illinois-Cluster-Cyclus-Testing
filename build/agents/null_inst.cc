
#line 1 "/workspaces/congenial-waddle/cyclus/agents/null_inst.cc"
#include "null_inst.h"

namespace cyclus {

NullInst::NullInst(cyclus::Context* ctx) : cyclus::Institution(ctx) {}

NullInst::~NullInst() {}

extern "C" cyclus::Agent* ConstructNullInst(cyclus::Context* ctx) {
  return new NullInst(ctx);
}

}  // namespace cyclus