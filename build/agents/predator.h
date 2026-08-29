
#line 1 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
#ifndef CYCLUS_AGENTS_PREDATOR_H_
#define CYCLUS_AGENTS_PREDATOR_H_

#include <string>
#include <sstream>

#include "cyclus.h"

namespace cyclus {

/// @class Predator
/// This Predator facility simulates hunters on preys.
class Predator : public cyclus::Facility  {
 public:
  /// Smallest first!
  static inline bool SortById(cyclus::Bid<cyclus::Product>* l,
                              cyclus::Bid<cyclus::Product>* r) {
    return l->bidder()->manager()->id() < r->bidder()->manager()->id();
  }

  Predator(cyclus::Context* ctx);
  virtual ~Predator() {}

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::Predator* m) {
    cyclus::Facility::InitFrom(m);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_prey[1] = {-1};
    cycpp_shape_prey = std::vector<int>(rawcycpp_shape_prey, rawcycpp_shape_prey + 1);
    int rawcycpp_shape_full[1] = {-1};
    cycpp_shape_full = std::vector<int>(rawcycpp_shape_full, rawcycpp_shape_full + 1);
    int rawcycpp_shape_hunt_freq[1] = {-1};
    cycpp_shape_hunt_freq = std::vector<int>(rawcycpp_shape_hunt_freq, rawcycpp_shape_hunt_freq + 1);
    int rawcycpp_shape_hunt_cap[1] = {-1};
    cycpp_shape_hunt_cap = std::vector<int>(rawcycpp_shape_hunt_cap, rawcycpp_shape_hunt_cap + 1);
    int rawcycpp_shape_success[1] = {-1};
    cycpp_shape_success = std::vector<int>(rawcycpp_shape_success, rawcycpp_shape_success + 1);
    int rawcycpp_shape_consumed[1] = {-1};
    cycpp_shape_consumed = std::vector<int>(rawcycpp_shape_consumed, rawcycpp_shape_consumed + 1);
    int rawcycpp_shape_hunt_factor[1] = {-1};
    cycpp_shape_hunt_factor = std::vector<int>(rawcycpp_shape_hunt_factor, rawcycpp_shape_hunt_factor + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_lifespan[1] = {-1};
    cycpp_shape_lifespan = std::vector<int>(rawcycpp_shape_lifespan, rawcycpp_shape_lifespan + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    commod = m->commod;
    prey = m->prey;
    full = m->full;
    hunt_freq = m->hunt_freq;
    hunt_cap = m->hunt_cap;
    success = m->success;
    consumed = m->consumed;
    hunt_factor = m->hunt_factor;
    age = m->age;
    lifespan = m->lifespan;
    dead = m->dead;
    nchildren = m->nchildren;
    birth_and_death = m->birth_and_death;
  };
#line 25 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Facility::InitFrom(b);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_prey[1] = {-1};
    cycpp_shape_prey = std::vector<int>(rawcycpp_shape_prey, rawcycpp_shape_prey + 1);
    int rawcycpp_shape_full[1] = {-1};
    cycpp_shape_full = std::vector<int>(rawcycpp_shape_full, rawcycpp_shape_full + 1);
    int rawcycpp_shape_hunt_freq[1] = {-1};
    cycpp_shape_hunt_freq = std::vector<int>(rawcycpp_shape_hunt_freq, rawcycpp_shape_hunt_freq + 1);
    int rawcycpp_shape_hunt_cap[1] = {-1};
    cycpp_shape_hunt_cap = std::vector<int>(rawcycpp_shape_hunt_cap, rawcycpp_shape_hunt_cap + 1);
    int rawcycpp_shape_success[1] = {-1};
    cycpp_shape_success = std::vector<int>(rawcycpp_shape_success, rawcycpp_shape_success + 1);
    int rawcycpp_shape_consumed[1] = {-1};
    cycpp_shape_consumed = std::vector<int>(rawcycpp_shape_consumed, rawcycpp_shape_consumed + 1);
    int rawcycpp_shape_hunt_factor[1] = {-1};
    cycpp_shape_hunt_factor = std::vector<int>(rawcycpp_shape_hunt_factor, rawcycpp_shape_hunt_factor + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_lifespan[1] = {-1};
    cycpp_shape_lifespan = std::vector<int>(rawcycpp_shape_lifespan, rawcycpp_shape_lifespan + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    commod = qr.GetVal<std::string>("commod");
    prey = qr.GetVal<std::string>("prey");
    full = qr.GetVal<double>("full");
    hunt_freq = qr.GetVal<int>("hunt_freq");
    hunt_cap = qr.GetVal<double>("hunt_cap");
    success = qr.GetVal<double>("success");
    consumed = qr.GetVal<double>("consumed");
    hunt_factor = qr.GetVal<bool>("hunt_factor");
    age = qr.GetVal<int>("age");
    lifespan = qr.GetVal<int>("lifespan");
    dead = qr.GetVal<bool>("dead");
    nchildren = qr.GetVal<double>("nchildren");
    birth_and_death = qr.GetVal<bool>("birth_and_death");
  };
#line 27 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Facility::InfileToDb(tree, di);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_prey[1] = {-1};
    cycpp_shape_prey = std::vector<int>(rawcycpp_shape_prey, rawcycpp_shape_prey + 1);
    int rawcycpp_shape_full[1] = {-1};
    cycpp_shape_full = std::vector<int>(rawcycpp_shape_full, rawcycpp_shape_full + 1);
    int rawcycpp_shape_hunt_freq[1] = {-1};
    cycpp_shape_hunt_freq = std::vector<int>(rawcycpp_shape_hunt_freq, rawcycpp_shape_hunt_freq + 1);
    int rawcycpp_shape_hunt_cap[1] = {-1};
    cycpp_shape_hunt_cap = std::vector<int>(rawcycpp_shape_hunt_cap, rawcycpp_shape_hunt_cap + 1);
    int rawcycpp_shape_success[1] = {-1};
    cycpp_shape_success = std::vector<int>(rawcycpp_shape_success, rawcycpp_shape_success + 1);
    int rawcycpp_shape_consumed[1] = {-1};
    cycpp_shape_consumed = std::vector<int>(rawcycpp_shape_consumed, rawcycpp_shape_consumed + 1);
    int rawcycpp_shape_hunt_factor[1] = {-1};
    cycpp_shape_hunt_factor = std::vector<int>(rawcycpp_shape_hunt_factor, rawcycpp_shape_hunt_factor + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_lifespan[1] = {-1};
    cycpp_shape_lifespan = std::vector<int>(rawcycpp_shape_lifespan, rawcycpp_shape_lifespan + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    {
      std::string commod_val = cyclus::Query<std::string>(sub, "commod");
      commod = commod_val;
    }
    {
      std::string prey_val = cyclus::Query<std::string>(sub, "prey");
      prey = prey_val;
    }
    if (sub->NMatches("full") > 0) {
      {
        double full_val = cyclus::Query<double>(sub, "full");
        full = full_val;
      }
    } else {
      double full_tmp = 1;
      full = full_tmp;
    }
    if (sub->NMatches("hunt_freq") > 0) {
      {
        int hunt_freq_val = cyclus::Query<int>(sub, "hunt_freq");
        hunt_freq = hunt_freq_val;
      }
    } else {
      int hunt_freq_tmp = 1;
      hunt_freq = hunt_freq_tmp;
    }
    if (sub->NMatches("hunt_cap") > 0) {
      {
        double hunt_cap_val = cyclus::Query<double>(sub, "hunt_cap");
        hunt_cap = hunt_cap_val;
      }
    } else {
      double hunt_cap_tmp = 1;
      hunt_cap = hunt_cap_tmp;
    }
    if (sub->NMatches("success") > 0) {
      {
        double success_val = cyclus::Query<double>(sub, "success");
        success = success_val;
      }
    } else {
      double success_tmp = 1;
      success = success_tmp;
    }
    if (sub->NMatches("consumed") > 0) {
      {
        double consumed_val = cyclus::Query<double>(sub, "consumed");
        consumed = consumed_val;
      }
    } else {
      double consumed_tmp = 0;
      consumed = consumed_tmp;
    }
    if (sub->NMatches("hunt_factor") > 0) {
      {
        bool hunt_factor_val = cyclus::Query<bool>(sub, "hunt_factor");
        hunt_factor = hunt_factor_val;
      }
    } else {
      bool hunt_factor_tmp = false;
      hunt_factor = hunt_factor_tmp;
    }
    if (sub->NMatches("age") > 0) {
      {
        int age_val = cyclus::Query<int>(sub, "age");
        age = age_val;
      }
    } else {
      int age_tmp = 0;
      age = age_tmp;
    }
    if (sub->NMatches("lifespan") > 0) {
      {
        int lifespan_val = cyclus::Query<int>(sub, "lifespan");
        lifespan = lifespan_val;
      }
    } else {
      int lifespan_tmp = 1;
      lifespan = lifespan_tmp;
    }
    if (sub->NMatches("dead") > 0) {
      {
        bool dead_val = cyclus::Query<bool>(sub, "dead");
        dead = dead_val;
      }
    } else {
      bool dead_tmp = false;
      dead = dead_tmp;
    }
    if (sub->NMatches("nchildren") > 0) {
      {
        double nchildren_val = cyclus::Query<double>(sub, "nchildren");
        nchildren = nchildren_val;
      }
    } else {
      double nchildren_tmp = 1;
      nchildren = nchildren_tmp;
    }
    if (sub->NMatches("birth_and_death") > 0) {
      {
        bool birth_and_death_val = cyclus::Query<bool>(sub, "birth_and_death");
        birth_and_death = birth_and_death_val;
      }
    } else {
      bool birth_and_death_tmp = false;
      birth_and_death = birth_and_death_tmp;
    }
    di.NewDatum("Info")
    ->AddVal("commod", commod, &cycpp_shape_commod)
    ->AddVal("prey", prey, &cycpp_shape_prey)
    ->AddVal("full", full, &cycpp_shape_full)
    ->AddVal("hunt_freq", hunt_freq, &cycpp_shape_hunt_freq)
    ->AddVal("hunt_cap", hunt_cap, &cycpp_shape_hunt_cap)
    ->AddVal("success", success, &cycpp_shape_success)
    ->AddVal("consumed", consumed, &cycpp_shape_consumed)
    ->AddVal("hunt_factor", hunt_factor, &cycpp_shape_hunt_factor)
    ->AddVal("age", age, &cycpp_shape_age)
    ->AddVal("lifespan", lifespan, &cycpp_shape_lifespan)
    ->AddVal("dead", dead, &cycpp_shape_dead)
    ->AddVal("nchildren", nchildren, &cycpp_shape_nchildren)
    ->AddVal("birth_and_death", birth_and_death, &cycpp_shape_birth_and_death)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::Predator* m = new cyclus::Predator(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <element name=\"commod\">\n"
      "        <a:documentation>commodity that the predator supplies</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <element name=\"prey\">\n"
      "        <a:documentation>prey that the predator hunts</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <optional>\n"
      "        <element name=\"full\">\n"
      "            <a:documentation>how many units of prey a predator consumes until it is satisfied</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"hunt_freq\">\n"
      "            <a:documentation>how often a predator needs to hunt</a:documentation>\n"
      "            <data type=\"int\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"hunt_cap\">\n"
      "            <a:documentation>how many units of prey a predator can catch during a hunt</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"success\">\n"
      "            <a:documentation>fraction of hunting success on a scale from 0 to 1</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"consumed\">\n"
      "            <a:documentation>how many units of prey consumed per time step</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"hunt_factor\">\n"
      "            <a:documentation>whether or not to base hunting success on relative predator/prey populations</a:documentation>\n"
      "            <data type=\"boolean\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"age\">\n"
      "            <a:documentation>age of predator at beginning of simulation</a:documentation>\n"
      "            <data type=\"int\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"lifespan\">\n"
      "            <a:documentation>how long a predator lives</a:documentation>\n"
      "            <data type=\"int\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"dead\">\n"
      "            <a:documentation>flag for whether predator is currently dead</a:documentation>\n"
      "            <data type=\"boolean\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"nchildren\">\n"
      "            <a:documentation>number of predator children born at each birthing instance</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"birth_and_death\">\n"
      "            <a:documentation>whether or not simultaneous birth and death are allowed (i.e., can a facility give birth and die in the same time step?)</a:documentation>\n"
      "            <data type=\"boolean\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "</interleave>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::Predator\",\"entity\":\"facility\",\"pa"
      "rents\":[\"cyclus::Facility\"],\"all_parents\":[\"Econom"
      "icEntity\",\"cyclus::Agent\",\"cyclus::Facility\",\"cycl"
      "us::Ider\",\"cyclus::StateWrangler\",\"cyclus::TimeLis"
      "tener\",\"cyclus::Trader\"],\"vars\":{\"commod\":{\"toolti"
      "p\":\"predator commodity\",\"doc\":\"commodity that the "
      "predator "
      "supplies\",\"schematype\":\"token\",\"uilabel\":\"Predator"
      " Commodity\",\"uitype\":\"outcommodity\",\"type\":\"std::s"
      "tring\",\"index\":0,\"shape\":[-"
      "1],\"alias\":\"commod\"},\"prey\":{\"tooltip\":\"predator's"
      " prey\",\"doc\":\"prey that the predator "
      "hunts\",\"schematype\":\"token\",\"uilabel\":\"Prey Commod"
      "ity\",\"uitype\":\"incommodity\",\"type\":\"std::string\",\""
      "index\":1,\"shape\":[-"
      "1],\"alias\":\"prey\"},\"full\":{\"default\":1,\"tooltip\":\""
      "feast size\",\"doc\":\"how many units of prey a "
      "predator consumes until it is "
      "satisfied\",\"uilabel\":\"Feast Size\",\"type\":\"double\","
      "\"index\":2,\"shape\":[-"
      "1],\"alias\":\"full\"},\"hunt_freq\":{\"default\":1,\"toolt"
      "ip\":\"hunting frequency\",\"doc\":\"how often a "
      "predator needs to hunt\",\"uilabel\":\"Hunting Frequen"
      "cy\",\"type\":\"int\",\"index\":3,\"shape\":[-"
      "1],\"alias\":\"hunt_freq\"},\"hunt_cap\":{\"default\":1,\"t"
      "ooltip\":\"hunting yield\",\"doc\":\"how many units of "
      "prey a predator can catch during a "
      "hunt\",\"uilabel\":\"Hunting Yield\",\"type\":\"double\",\"i"
      "ndex\":4,\"shape\":[-"
      "1],\"alias\":\"hunt_cap\"},\"success\":{\"default\":1,\"too"
      "ltip\":\"hunting success fraction\",\"doc\":\"fraction "
      "of hunting success on a scale from 0 to "
      "1\",\"uilabel\":\"Hunting Success Fraction\",\"type\":\"do"
      "uble\",\"index\":5,\"shape\":[-"
      "1],\"alias\":\"success\"},\"consumed\":{\"default\":0,\"too"
      "ltip\":\"prey consumed\",\"doc\":\"how many units of "
      "prey consumed per time step\",\"uilabel\":\"Prey Consu"
      "med\",\"type\":\"double\",\"index\":6,\"shape\":[-"
      "1],\"alias\":\"consumed\"},\"hunt_factor\":{\"default\":0,"
      "\"tooltip\":\"hunting success factor\",\"doc\":\"whether "
      "or not to base hunting success on relative "
      "predator/prey populations\",\"uilabel\":\"Hunting "
      "Success Factor\",\"type\":\"bool\",\"index\":7,\"shape\":[-"
      "1],\"alias\":\"hunt_factor\"},\"age\":{\"default\":0,\"tool"
      "tip\":\"predator age\",\"doc\":\"age of predator at "
      "beginning of simulation\",\"uilabel\":\"Predator Age\","
      "\"type\":\"int\",\"index\":8,\"shape\":[-"
      "1],\"alias\":\"age\"},\"lifespan\":{\"default\":1,\"tooltip"
      "\":\"predator lifespan\",\"doc\":\"how long a predator "
      "lives\",\"uilabel\":\"Predator Lifespan\",\"type\":\"int\","
      "\"index\":9,\"shape\":[-"
      "1],\"alias\":\"lifespan\"},\"dead\":{\"default\":0,\"toolti"
      "p\":\"dead?\",\"doc\":\"flag for whether predator is "
      "currently dead\",\"uilabel\":\"Predator Dead?\",\"type\":"
      "\"bool\",\"index\":10,\"shape\":[-"
      "1],\"alias\":\"dead\"},\"nchildren\":{\"default\":1,\"toolt"
      "ip\":\"number of children\",\"doc\":\"number of predator"
      " children born at each birthing "
      "instance\",\"uilabel\":\"Number Predator Children\",\"ty"
      "pe\":\"double\",\"index\":11,\"shape\":[-"
      "1],\"alias\":\"nchildren\"},\"birth_and_death\":{\"defaul"
      "t\":0,\"tooltip\":\"simultaneous birth and "
      "death?\",\"doc\":\"whether or not simultaneous birth "
      "and death are allowed (i.e., can a facility give "
      "birth and die in the same time "
      "step?)\",\"uilabel\":\"Simultaneous Birth and Death?\","
      "\"type\":\"bool\",\"index\":12,\"shape\":[-"
      "1],\"alias\":\"birth_and_death\"}},\"doc\":\"A facility "
      "that represents predators in the Lotka-Volterra "
      "integration tests\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::Predator.");
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
    ->AddVal("commod", commod, &cycpp_shape_commod)
    ->AddVal("prey", prey, &cycpp_shape_prey)
    ->AddVal("full", full, &cycpp_shape_full)
    ->AddVal("hunt_freq", hunt_freq, &cycpp_shape_hunt_freq)
    ->AddVal("hunt_cap", hunt_cap, &cycpp_shape_hunt_cap)
    ->AddVal("success", success, &cycpp_shape_success)
    ->AddVal("consumed", consumed, &cycpp_shape_consumed)
    ->AddVal("hunt_factor", hunt_factor, &cycpp_shape_hunt_factor)
    ->AddVal("age", age, &cycpp_shape_age)
    ->AddVal("lifespan", lifespan, &cycpp_shape_lifespan)
    ->AddVal("dead", dead, &cycpp_shape_dead)
    ->AddVal("nchildren", nchildren, &cycpp_shape_nchildren)
    ->AddVal("birth_and_death", birth_and_death, &cycpp_shape_birth_and_death)
    ->Record();
  };

  #pragma cyclus note {"doc": "A facility that represents predators "                               "in the Lotka-Volterra integration tests"}
#line 30 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  virtual void EnterNotify();
  virtual void Decommission();
  virtual void Tick();
  virtual void Tock();

  /// @brief Predator request Product of their given
  /// commodity. Note that it is assumed the Predator operates on a single
  /// resource type!
  virtual std::set<cyclus::RequestPortfolio<cyclus::Product>::Ptr>
      GetProductRequests();

  virtual void AdjustProductPrefs(cyclus::PrefMap<cyclus::Product>::type& prefs);

  /// @brief Predator place accepted trade Materials in their Inventory
  virtual void AcceptProductTrades(
      const std::vector< std::pair<cyclus::Trade<cyclus::Product>,
                                   cyclus::Product::Ptr> >& responses);

  inline std::string name() {
    std::stringstream ss;
    ss << prototype() << "_" << id();
    return ss.str();
  }

  void GiveBirth();

 private:
  #pragma cyclus var {     "tooltip": "predator commodity",				         "doc": "commodity that the predator supplies",		         "schematype": "token",					         "uilabel": "Predator Commodity",				         "uitype": "outcommodity"   }
#line 65 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  std::string commod;
  std::vector<int> cycpp_shape_commod;
#line 66 "/workspaces/congenial-waddle/cyclus/agents/predator.h"


  #pragma cyclus var {     "tooltip": "predator's prey",			         "doc": "prey that the predator hunts",		         "schematype": "token",					         "uilabel": "Prey Commodity",				         "uitype": "incommodity"   }
#line 74 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  std::string prey;
  std::vector<int> cycpp_shape_prey;

#line 75 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// How many prey until we're full
  #pragma cyclus var {     'default': 1,						      "tooltip": "feast size",						    "doc": "how many units of prey a predator consumes until it is satisfied",    "uilabel": "Feast Size" 						  }
#line 83 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  double full;
  std::vector<int> cycpp_shape_full;

#line 84 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// How often we hunt
  #pragma cyclus var {    'default': 1,				     "tooltip": "hunting frequency",		     "doc": "how often a predator needs to hunt",     "uilabel": "Hunting Frequency"                 }
#line 92 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  int hunt_freq;
  std::vector<int> cycpp_shape_hunt_freq;

#line 93 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// How many prey we can catch on the hunt
  #pragma cyclus var {     'default': 1,     "tooltip": "hunting yield",					      "doc": "how many units of prey a predator can catch during a hunt",     "uilabel": "Hunting Yield" 					  }
#line 101 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  double hunt_cap;
  std::vector<int> cycpp_shape_hunt_cap;

#line 102 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// Hunting success on a scale from 0 to 1
  #pragma cyclus var {    'default': 1,						           "tooltip": "hunting success fraction",			           "doc": "fraction of hunting success on a scale from 0 to 1",          "uilabel": "Hunting Success Fraction" 		  }
#line 110 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  double success;
  std::vector<int> cycpp_shape_success;

#line 111 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// Consumption this time step
  #pragma cyclus var {    'default': 0,     "tooltip": "prey consumed",						    "doc": "how many units of prey consumed per time step",     "uilabel": "Prey Consumed" 			         }
#line 119 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  double consumed;
  std::vector<int> cycpp_shape_consumed;

#line 120 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// Whether or not to base hunt succes on relative prey/predator populations
  #pragma cyclus var {     'default': 0,     "tooltip": "hunting success factor",				    "doc": "whether or not to base hunting success on "			           "relative predator/prey populations",     "uilabel": "Hunting Success Factor" 	  }  // false
#line 129 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  bool hunt_factor;
  std::vector<int> cycpp_shape_hunt_factor;

#line 130 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// Age of a predator
  #pragma cyclus var {    'default': 0,     "tooltip": "predator age",						    "doc": "age of predator at beginning of simulation",     "uilabel": "Predator Age"   }
#line 138 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  int age;
  std::vector<int> cycpp_shape_age;
#line 139 "/workspaces/congenial-waddle/cyclus/agents/predator.h"


  #pragma cyclus var {     'default': 1,     "tooltip": "predator lifespan",	    "doc": "how long a predator lives",		    "uilabel": "Predator Lifespan" 	  }
#line 146 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  int lifespan;
  std::vector<int> cycpp_shape_lifespan;
#line 147 "/workspaces/congenial-waddle/cyclus/agents/predator.h"


  #pragma cyclus var {     'default': 0,     "tooltip": "dead?",							    "doc": "flag for whether predator is currently dead",     "uilabel": "Predator Dead?"				    }
#line 154 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  bool dead;
  std::vector<int> cycpp_shape_dead;
#line 155 "/workspaces/congenial-waddle/cyclus/agents/predator.h"


  #pragma cyclus var {				    'default': 1,     "tooltip": "number of children",				        "doc": "number of predator children born at each birthing instance",     "uilabel": "Number Predator Children"				  }
#line 162 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  double nchildren;
  std::vector<int> cycpp_shape_nchildren;

#line 163 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

  /// Whether or not an agent can give birth and die in the same timestep
  #pragma cyclus var {     'default': 0,     "tooltip": "simultaneous birth and death?",				    "doc": "whether or not simultaneous birth and death are allowed "	           "(i.e., can a facility give birth and die in the same time step?)",     "uilabel": "Simultaneous Birth and Death?" 			         }  // false
#line 172 "/workspaces/congenial-waddle/cyclus/agents/predator.h"
  bool birth_and_death;
  std::vector<int> cycpp_shape_birth_and_death;

#line 173 "/workspaces/congenial-waddle/cyclus/agents/predator.h"

};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_PREDATOR_H_