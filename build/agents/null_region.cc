
#line 1 "/workspaces/congenial-waddle/cyclus/agents/null_region.cc"
#include "null_region.h"

namespace cyclus {

NullRegion::NullRegion(cyclus::Context* ctx) : cyclus::Region(ctx) {}

NullRegion::~NullRegion() {}

void NullRegion::EnterNotify() {
  InitEconParameters();
}

extern "C" cyclus::Agent* ConstructNullRegion(cyclus::Context* ctx) {
  return new NullRegion(ctx);
}

}  // namespace cyclus