
#line 1 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
#ifndef CYCLUS_AGENTS_PREY_H_
#define CYCLUS_AGENTS_PREY_H_

#include <set>
#include <string>
#include <sstream>
#include <vector>

#include "cyclus.h"

// superfluous include to make sure other archetypes build with this can still
// be compiled through possible cycpp regressions. Uncomment to use (breaks on
// OSX)
//#include "prettyprint.hpp"

namespace cyclus {

class Context;

/// @class Prey
/// This facility represents a Prey.
/// This facility is intended
/// to be used for Lotka-Volterra Cyclus integration tests
class Prey : public cyclus::Facility {
 public:
  Prey(cyclus::Context* ctx);
  virtual ~Prey() {}

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::Prey* m) {
    cyclus::Facility::InitFrom(m);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_freq[1] = {-1};
    cycpp_shape_birth_freq = std::vector<int>(rawcycpp_shape_birth_freq, rawcycpp_shape_birth_freq + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    commod = m->commod;
    age = m->age;
    dead = m->dead;
    nchildren = m->nchildren;
    birth_freq = m->birth_freq;
    birth_and_death = m->birth_and_death;
  };
#line 30 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Facility::InitFrom(b);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_freq[1] = {-1};
    cycpp_shape_birth_freq = std::vector<int>(rawcycpp_shape_birth_freq, rawcycpp_shape_birth_freq + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    commod = qr.GetVal<std::string>("commod");
    age = qr.GetVal<int>("age");
    dead = qr.GetVal<bool>("dead");
    nchildren = qr.GetVal<int>("nchildren");
    birth_freq = qr.GetVal<int>("birth_freq");
    birth_and_death = qr.GetVal<bool>("birth_and_death");
  };
#line 32 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Facility::InfileToDb(tree, di);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_age[1] = {-1};
    cycpp_shape_age = std::vector<int>(rawcycpp_shape_age, rawcycpp_shape_age + 1);
    int rawcycpp_shape_dead[1] = {-1};
    cycpp_shape_dead = std::vector<int>(rawcycpp_shape_dead, rawcycpp_shape_dead + 1);
    int rawcycpp_shape_nchildren[1] = {-1};
    cycpp_shape_nchildren = std::vector<int>(rawcycpp_shape_nchildren, rawcycpp_shape_nchildren + 1);
    int rawcycpp_shape_birth_freq[1] = {-1};
    cycpp_shape_birth_freq = std::vector<int>(rawcycpp_shape_birth_freq, rawcycpp_shape_birth_freq + 1);
    int rawcycpp_shape_birth_and_death[1] = {-1};
    cycpp_shape_birth_and_death = std::vector<int>(rawcycpp_shape_birth_and_death, rawcycpp_shape_birth_and_death + 1);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    {
      std::string commod_val = cyclus::Query<std::string>(sub, "commod");
      commod = commod_val;
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
        int nchildren_val = cyclus::Query<int>(sub, "nchildren");
        nchildren = nchildren_val;
      }
    } else {
      int nchildren_tmp = 1;
      nchildren = nchildren_tmp;
    }
    if (sub->NMatches("birth_freq") > 0) {
      {
        int birth_freq_val = cyclus::Query<int>(sub, "birth_freq");
        birth_freq = birth_freq_val;
      }
    } else {
      int birth_freq_tmp = 1;
      birth_freq = birth_freq_tmp;
    }
    if (sub->NMatches("birth_and_death") > 0) {
      {
        bool birth_and_death_val = cyclus::Query<bool>(sub, "birth_and_death");
        birth_and_death = birth_and_death_val;
      }
    } else {
      bool birth_and_death_tmp = true;
      birth_and_death = birth_and_death_tmp;
    }
    di.NewDatum("Info")
    ->AddVal("commod", commod, &cycpp_shape_commod)
    ->AddVal("age", age, &cycpp_shape_age)
    ->AddVal("dead", dead, &cycpp_shape_dead)
    ->AddVal("nchildren", nchildren, &cycpp_shape_nchildren)
    ->AddVal("birth_freq", birth_freq, &cycpp_shape_birth_freq)
    ->AddVal("birth_and_death", birth_and_death, &cycpp_shape_birth_and_death)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::Prey* m = new cyclus::Prey(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <element name=\"commod\">\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <optional>\n"
      "        <element name=\"age\">\n"
      "            <a:documentation>age of prey at start of simulation</a:documentation>\n"
      "            <data type=\"int\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"dead\">\n"
      "            <a:documentation>flag for whether prey is currently dead</a:documentation>\n"
      "            <data type=\"boolean\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"nchildren\">\n"
      "            <a:documentation>number of children born at each birthing instance</a:documentation>\n"
      "            <data type=\"int\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"birth_freq\">\n"
      "            <a:documentation>number of time steps between birth of children</a:documentation>\n"
      "            <data type=\"int\"/>\n"
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
      "{\"name\":\"cyclus::Prey\",\"entity\":\"facility\",\"parent"
      "s\":[\"cyclus::Facility\"],\"all_parents\":[\"EconomicEn"
      "tity\",\"cyclus::Agent\",\"cyclus::Facility\",\"cyclus::"
      "Ider\",\"cyclus::StateWrangler\",\"cyclus::TimeListene"
      "r\",\"cyclus::Trader\"],\"vars\":{\"commod\":{\"schematype"
      "\":\"token\",\"uilabel\":\"Prey Commodity\",\"uitype\":\"out"
      "commodity\",\"type\":\"std::string\",\"index\":0,\"shape\":"
      "[-"
      "1],\"alias\":\"commod\",\"tooltip\":\"commod\"},\"age\":{\"de"
      "fault\":0,\"tooltip\":\"prey age\",\"doc\":\"age of prey "
      "at start of simulation\",\"uilabel\":\"Prey Age\",\"type"
      "\":\"int\",\"index\":1,\"shape\":[-"
      "1],\"alias\":\"age\"},\"dead\":{\"default\":0,\"tooltip\":\"d"
      "ead?\",\"doc\":\"flag for whether prey is currently de"
      "ad\",\"uilabel\":\"Dead?\",\"type\":\"bool\",\"index\":2,\"sha"
      "pe\":[-"
      "1],\"alias\":\"dead\"},\"nchildren\":{\"default\":1,\"toolt"
      "ip\":\"number of children\",\"doc\":\"number of children"
      " born at each birthing instance\",\"uilabel\":\"Number"
      " of Children\",\"type\":\"int\",\"index\":3,\"shape\":[-"
      "1],\"alias\":\"nchildren\"},\"birth_freq\":{\"default\":1,"
      "\"tooltip\":\"birth frequency\",\"doc\":\"number of time "
      "steps between birth of children\",\"uilabel\":\"Birth "
      "Frequency\",\"type\":\"int\",\"index\":4,\"shape\":[-"
      "1],\"alias\":\"birth_freq\"},\"birth_and_death\":{\"defau"
      "lt\":1,\"tooltip\":\"simultaneous birth and "
      "death?\",\"doc\":\"whether or not simultaneous birth "
      "and death are allowed (i.e., can a facility give "
      "birth and die in the same time "
      "step?)\",\"uilabel\":\"Simultaneous Birth and Death?\","
      "\"type\":\"bool\",\"index\":5,\"shape\":[-"
      "1],\"alias\":\"birth_and_death\"}},\"doc\":\"A facility "
      "that represents prey in the Lotka-Volterra "
      "integration tests\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::Prey.");
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
    ->AddVal("age", age, &cycpp_shape_age)
    ->AddVal("dead", dead, &cycpp_shape_dead)
    ->AddVal("nchildren", nchildren, &cycpp_shape_nchildren)
    ->AddVal("birth_freq", birth_freq, &cycpp_shape_birth_freq)
    ->AddVal("birth_and_death", birth_and_death, &cycpp_shape_birth_and_death)
    ->Record();
  };

  #pragma cyclus note {"doc": "A facility that represents prey "                               "in the Lotka-Volterra integration "                               "tests"}
#line 36 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  virtual void EnterNotify();
  virtual void Decommission();
  virtual void Tick();
  virtual void Tock();

  virtual std::set<cyclus::BidPortfolio<cyclus::Product>::Ptr>
      GetProductBids(
          cyclus::CommodMap<cyclus::Product>::type& commod_requests);

  virtual void GetProductTrades(
      const std::vector< cyclus::Trade<cyclus::Product> >& trades,
      std::vector<std::pair<cyclus::Trade<cyclus::Product>,
                            cyclus::Product::Ptr> >& responses);

  inline std::string name() {
    std::stringstream ss;
    ss << prototype() << "_" << id();
    return ss.str();
  }

  void GiveBirth();

 private:
  #pragma cyclus var {     "schematype": "token",			    "uilabel": "Prey Commodity",		    "uitype": "outcommodity"			  }
#line 65 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  std::string commod;
  std::vector<int> cycpp_shape_commod;

#line 66 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

 /// Age of a prey
  #pragma cyclus var {     'default': 0,     "tooltip": "prey age",						    "doc": "age of prey at start of simulation",			    "uilabel": "Prey Age"						  }
#line 74 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  int age;
  std::vector<int> cycpp_shape_age;
#line 75 "/workspaces/congenial-waddle/cyclus/agents/prey.h"


  #pragma cyclus var {     'default': 0,     "tooltip": "dead?",							    "doc": "flag for whether prey is currently dead",     "uilabel": "Dead?"			        }
#line 82 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  bool dead;
  std::vector<int> cycpp_shape_dead;

#line 83 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  // Number of children
  #pragma cyclus var {     'default': 1,						    "tooltip": "number of children",				    "doc": "number of children born at each birthing instance",     "uilabel": "Number of Children"				  }
#line 91 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  int nchildren;
  std::vector<int> cycpp_shape_nchildren;

#line 92 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  /// Number of timsteps between having children
  #pragma cyclus var {     'default': 1,     "tooltip": "birth frequency",				       "doc": "number of time steps between birth of children",     "uilabel": "Birth Frequency"			       }
#line 100 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  int birth_freq;
  std::vector<int> cycpp_shape_birth_freq;

#line 101 "/workspaces/congenial-waddle/cyclus/agents/prey.h"

  /// Whether or not an agent can give birth and die in the same timestep
  #pragma cyclus var {     'default': 1,     "tooltip": "simultaneous birth and death?",     "doc": "whether or not simultaneous birth and death are allowed (i.e., "            "can a facility give birth and die in the same time step?)",     "uilabel": "Simultaneous Birth and Death?"			  }  // true
#line 110 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
  bool birth_and_death;
  std::vector<int> cycpp_shape_birth_and_death;

#line 111 "/workspaces/congenial-waddle/cyclus/agents/prey.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_PREY_H_