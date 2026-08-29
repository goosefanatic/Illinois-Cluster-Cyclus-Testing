
#line 1 "/workspaces/congenial-waddle/cyclus/agents/null_region.h"
#ifndef CYCLUS_AGENTS_NULL_REGION_H_
#define CYCLUS_AGENTS_NULL_REGION_H_

#include <string>

#include "cyclus.h"

namespace cyclus {

class NullRegion : public cyclus::Region {
 public:
  NullRegion(cyclus::Context* ctx);
  virtual ~NullRegion();

  void EnterNotify();

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::NullRegion* m) {
    cyclus::Region::InitFrom(m);
    int rawcycpp_shape_corporate_income_tax_rate[1] = {-1};
    cycpp_shape_corporate_income_tax_rate = std::vector<int>(rawcycpp_shape_corporate_income_tax_rate, rawcycpp_shape_corporate_income_tax_rate + 1);
    corporate_income_tax_rate = m->corporate_income_tax_rate;
  };
#line 18 "/workspaces/congenial-waddle/cyclus/agents/null_region.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Region::InitFrom(b);
    int rawcycpp_shape_corporate_income_tax_rate[1] = {-1};
    cycpp_shape_corporate_income_tax_rate = std::vector<int>(rawcycpp_shape_corporate_income_tax_rate, rawcycpp_shape_corporate_income_tax_rate + 1);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    corporate_income_tax_rate = qr.GetVal<double>("corporate_income_tax_rate");
  };
#line 20 "/workspaces/congenial-waddle/cyclus/agents/null_region.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Region::InfileToDb(tree, di);
    int rawcycpp_shape_corporate_income_tax_rate[1] = {-1};
    cycpp_shape_corporate_income_tax_rate = std::vector<int>(rawcycpp_shape_corporate_income_tax_rate, rawcycpp_shape_corporate_income_tax_rate + 1);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    if (sub->NMatches("corporate_income_tax_rate") > 0) {
      {
        double corporate_income_tax_rate_val = cyclus::Query<double>(sub, "corporate_income_tax_rate");
        corporate_income_tax_rate = corporate_income_tax_rate_val;
      }
    } else {
      double corporate_income_tax_rate_tmp = 0.0;
      corporate_income_tax_rate = corporate_income_tax_rate_tmp;
    }
    di.NewDatum("Info")
    ->AddVal("corporate_income_tax_rate", corporate_income_tax_rate, &cycpp_shape_corporate_income_tax_rate)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::NullRegion* m = new cyclus::NullRegion(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <optional>\n"
      "        <element name=\"corporate_income_tax_rate\">\n"
      "            <a:documentation>Income Tax Rate for all facilities belonging to this region as decimal (1% --&gt; 0.01)</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "</interleave>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::NullRegion\",\"entity\":\"region\",\"pa"
      "rents\":[\"cyclus::Region\"],\"all_parents\":[\"Economic"
      "Entity\",\"cyclus::Agent\",\"cyclus::Ider\",\"cyclus::Re"
      "gion\",\"cyclus::StateWrangler\",\"cyclus::TimeListene"
      "r\"],\"vars\":{\"corporate_income_tax_rate\":{\"default\""
      ":0.0,\"uilabel\":\"Corporate Income Tax Rate as "
      "decimal\",\"range\":[0.0,1.0],\"doc\":\"Income Tax Rate "
      "for all facilities belonging to this region as "
      "decimal (1% --> 0.01)\",\"units\":\"Dimensionless\",\"ty"
      "pe\":\"double\",\"index\":0,\"shape\":[-"
      "1],\"alias\":\"corporate_income_tax_rate\",\"tooltip\":\""
      "corporate_income_tax_rate\"}},\"doc\":\"A region that "
      "owns the simulation's institutions but exhibits "
      "null behavior. No parameters are given when using "
      "the null region.\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::NullRegion.");
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
    ->AddVal("corporate_income_tax_rate", corporate_income_tax_rate, &cycpp_shape_corporate_income_tax_rate)
    ->Record();
  };

  #pragma cyclus note {"doc": "A region that owns the simulation's "                               "institutions but exhibits null behavior. "                               "No parameters are given when using the "                               "null region."}
#line 25 "/workspaces/congenial-waddle/cyclus/agents/null_region.h"

  private:
  #include "toolkit/region_cost.cycpp.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_NULL_REGION_H_