
#line 1 "/workspaces/congenial-waddle/cyclus/tests/test_agents/test_inst.cc"
#include "test_inst.h"

extern "C" cyclus::Agent* ConstructTestInst(cyclus::Context* ctx) {
  return new TestInst(ctx);
}

// required to get functionality in cyclus agent unit tests library
#ifndef CYCLUS_AGENT_TESTS_CONNECTED
int ConnectAgentTests();
static int cyclus_agent_tests_connected = ConnectAgentTests();
#define CYCLUS_AGENT_TESTS_CONNECTED cyclus_agent_tests_connected
#endif  // CYCLUS_AGENT_TESTS_CONNECTED