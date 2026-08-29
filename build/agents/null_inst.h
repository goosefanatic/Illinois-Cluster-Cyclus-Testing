
#line 1 "/workspaces/congenial-waddle/cyclus/agents/null_inst.h"
#ifndef CYCLUS_AGENTS_NULL_INST_H_
#define CYCLUS_AGENTS_NULL_INST_H_

#include <string>

#include "cyclus.h"

namespace cyclus {

class NullInst : public cyclus::Institution {
 public:
  NullInst(cyclus::Context* ctx);
  virtual ~NullInst();

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::NullInst* m) {
    cyclus::Institution::InitFrom(m);
  };
#line 16 "/workspaces/congenial-waddle/cyclus/agents/null_inst.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Institution::InitFrom(b);
    cyclus::QueryResult qr = b->Query("Info", NULL);
  };
#line 18 "/workspaces/congenial-waddle/cyclus/agents/null_inst.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Institution::InfileToDb(tree, di);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    di.NewDatum("Info")
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::NullInst* m = new cyclus::NullInst(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<text/>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::NullInst\",\"entity\":\"institution\","
      "\"parents\":[\"cyclus::Institution\"],\"all_parents\":[\""
      "EconomicEntity\",\"cyclus::Agent\",\"cyclus::Ider\",\"cy"
      "clus::Institution\",\"cyclus::StateWrangler\",\"cyclus"
      "::TimeListener\"],\"vars\":{},\"doc\":\"An instition "
      "that owns facilities in the simulation but "
      "exhibits null behavior. No parameters are given "
      "when using the null institution.\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::NullInst.");
    }
    return root;
  };

  virtual void InitInv(cyclus::Inventories& inv) {
  };

  virtual cyclus::Inventories SnapshotInv() {
    cyclus::Inventories invs;
    return invs;
  };

  virtual void Snapshot(cyclus::DbInit di) {
    di.NewDatum("Info")
    ->Record();
  };

  #pragma cyclus note {"doc": "An instition that owns facilities in the "                               "simulation but exhibits null behavior. "                               "No parameters are given when using the "                               "null institution."}
#line 23 "/workspaces/congenial-waddle/cyclus/agents/null_inst.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_NULL_INST_H_