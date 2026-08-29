
#line 1 "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_region.cc"
#include "test_region.h"

extern "C" cyclus::Agent* ConstructTestRegion(cyclus::Context* ctx) {
  return new TestRegion(ctx);
}

// required to get functionality in cyclus agent unit tests library
#ifndef CYCLUS_AGENT_TESTS_CONNECTED
int ConnectAgentTests();
static int cyclus_agent_tests_connected = ConnectAgentTests();
#define CYCLUS_AGENT_TESTS_CONNECTED cyclus_agent_tests_connected
#endif  // CYCLUS_AGENT_TESTS_CONNECTED