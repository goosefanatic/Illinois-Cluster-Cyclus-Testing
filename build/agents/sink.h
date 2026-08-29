
#line 1 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
#ifndef CYCLUS_AGENTS_SINK_H_
#define CYCLUS_AGENTS_SINK_H_

#include <string>

#include "cyclus.h"

#pragma cyclus exec from sidecar import CY_LARGE_DOUBLE, CY_LARGE_INT, CY_NEAR_ZERO

namespace cyclus {

/// @class Sink
/// This sink facility accepts specified amount of commodity.
/// This sink facility is similar to Sink provided in cycamore, but it
/// has minimum implementation to run integration tests.
/// Some parts of the code is directrly copied from cycamore Sink.
class Sink : public cyclus::Facility  {
 public:
  Sink(cyclus::Context* ctx);
  virtual ~Sink() {}

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::Sink* m) {
    cyclus::Facility::InitFrom(m);
    int rawcycpp_shape_in_commods[2] = {-1, -1};
    cycpp_shape_in_commods = std::vector<int>(rawcycpp_shape_in_commods, rawcycpp_shape_in_commods + 2);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    in_commods = m->in_commods;
    recipe_name = m->recipe_name;
    max_inv_size = m->max_inv_size;
    capacity = m->capacity;
    inventory.capacity(m->inventory.capacity());
  };
#line 23 "/workspaces/congenial-waddle/cyclus/agents/sink.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Facility::InitFrom(b);
    int rawcycpp_shape_in_commods[2] = {-1, -1};
    cycpp_shape_in_commods = std::vector<int>(rawcycpp_shape_in_commods, rawcycpp_shape_in_commods + 2);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    in_commods = qr.GetVal<std::vector< std::string > >("in_commods");
    recipe_name = qr.GetVal<std::string>("recipe_name");
    max_inv_size = qr.GetVal<double>("max_inv_size");
    capacity = qr.GetVal<double>("capacity");
    inventory.capacity(max_inv_size);
  };
#line 25 "/workspaces/congenial-waddle/cyclus/agents/sink.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Facility::InfileToDb(tree, di);
    int rawcycpp_shape_in_commods[2] = {-1, -1};
    cycpp_shape_in_commods = std::vector<int>(rawcycpp_shape_in_commods, rawcycpp_shape_in_commods + 2);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    {
      cyclus::InfileTree* bub = sub->SubTree("in_commods", 0);
      cyclus::InfileTree* sub = bub;
      int n1 = sub->NMatches("val");
      std::vector< std::string > in_commods_val;
      in_commods_val.resize(n1);
      for (int i1 = 0; i1 < n1; ++i1) {
        std::string elem;
        {
          std::string elem_in = cyclus::Query<std::string>(sub, "val", i1);
          elem = elem_in;
        }
        in_commods_val[i1] = elem;
      }
      in_commods = in_commods_val;
    }
    if (sub->NMatches("recipe_name") > 0) {
      {
        std::string recipe_name_val = cyclus::Query<std::string>(sub, "recipe_name");
        recipe_name = recipe_name_val;
      }
    } else {
      std::string recipe_name_tmp("");
      recipe_name = recipe_name_tmp;
    }
    if (sub->NMatches("max_inv_size") > 0) {
      {
        double max_inv_size_val = cyclus::Query<double>(sub, "max_inv_size");
        max_inv_size = max_inv_size_val;
      }
    } else {
      double max_inv_size_tmp = 1e+299;
      max_inv_size = max_inv_size_tmp;
    }
    {
      double capacity_val = cyclus::Query<double>(sub, "capacity");
      capacity = capacity_val;
    }
    di.NewDatum("Info")
    ->AddVal("in_commods", in_commods, &cycpp_shape_in_commods)
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("max_inv_size", max_inv_size, &cycpp_shape_max_inv_size)
    ->AddVal("capacity", capacity, &cycpp_shape_capacity)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::Sink* m = new cyclus::Sink(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <element name=\"in_commods\">\n"
      "        <a:documentation>commodities that the sink facility accepts </a:documentation>\n"
      "        <oneOrMore>\n"
      "            <element name=\"val\">\n"
      "                <data type=\"string\"/>\n"
      "            </element>\n"
      "        </oneOrMore>\n"
      "    </element>\n"
      "    <optional>\n"
      "        <element name=\"recipe_name\">\n"
      "            <a:documentation>Name of recipe to request. If empty, sink requests material no particular composition.</a:documentation>\n"
      "            <data type=\"string\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"max_inv_size\">\n"
      "            <a:documentation>total maximum inventory size of sink facility</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <element name=\"capacity\">\n"
      "        <a:documentation>capacity the sink facility can accept at each time step</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "</interleave>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::Sink\",\"entity\":\"facility\",\"parent"
      "s\":[\"cyclus::Facility\"],\"all_parents\":[\"EconomicEn"
      "tity\",\"cyclus::Agent\",\"cyclus::Facility\",\"cyclus::"
      "Ider\",\"cyclus::StateWrangler\",\"cyclus::TimeListene"
      "r\",\"cyclus::Trader\"],\"vars\":{\"in_commods\":{\"doc\":\""
      "commodities that the sink facility accepts "
      "\",\"tooltip\":[\"input commodities for the "
      "sink\",\"\"],\"uilabel\":[\"List of Input Commodities\",\""
      "\"],\"uitype\":[\"oneormore\",\"incommodity\"],\"type\":[\"s"
      "td::vector\",\"std::string\"],\"index\":0,\"shape\":[-1,-"
      "1],\"alias\":[\"in_commods\",\"val\"]},\"recipe_name\":{\"t"
      "ooltip\":\"input/request recipe name\",\"doc\":\"Name of"
      " recipe to request. If empty, sink requests "
      "material no particular "
      "composition.\",\"default\":\"\",\"uilabel\":\"Input Recipe"
      "\",\"uitype\":\"recipe\",\"type\":\"std::string\",\"index\":1"
      ",\"shape\":[-"
      "1],\"alias\":\"recipe_name\"},\"max_inv_size\":{\"default"
      "\":1e+299,\"doc\":\"total maximum inventory size of "
      "sink facility\",\"uilabel\":\"Maximum "
      "Inventory\",\"tooltip\":\"sink maximum inventory size\""
      ",\"type\":\"double\",\"index\":2,\"shape\":[-"
      "1],\"alias\":\"max_inv_size\"},\"capacity\":{\"doc\":\"capa"
      "city the sink facility can accept at each time "
      "step\",\"uilabel\":\"Maximum Throughput\",\"uitype\":\"ran"
      "ge\",\"range\":[0.0,1e+299],\"tooltip\":\"sink capacity\""
      ",\"type\":\"double\",\"index\":3,\"shape\":[-"
      "1],\"alias\":\"capacity\"},\"inventory\":{\"capacity\":\"ma"
      "x_inv_size\",\"type\":[\"cyclus::toolkit::ResBuf\",\"cyc"
      "lus::Resource\"],\"index\":4,\"shape\":[-1,-"
      "1]}},\"doc\":\"A minimum implementation sink facility"
      " that accepts specified amounts of commodities "
      "from other agents\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::Sink.");
    }
    return root;
  };

  virtual void InitInv(cyclus::Inventories& inv) {
    inventory.Push(inv["inventory"]);
    
  };

  virtual cyclus::Inventories SnapshotInv() {
    cyclus::Inventories invs;
    invs["inventory"] = inventory.PopNRes(inventory.count());
    inventory.Push(invs["inventory"]);
    return invs;
  };

  virtual void Snapshot(cyclus::DbInit di) {
    di.NewDatum("Info")
    ->AddVal("in_commods", in_commods, &cycpp_shape_in_commods)
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("max_inv_size", max_inv_size, &cycpp_shape_max_inv_size)
    ->AddVal("capacity", capacity, &cycpp_shape_capacity)
    ->Record();
  };

  #pragma cyclus note {"doc": "A minimum implementation sink "                               "facility that accepts specified "                               "amounts of commodities from "                               "other agents"}
#line 30 "/workspaces/congenial-waddle/cyclus/agents/sink.h"

  virtual std::string str();

  virtual void Tick();

  virtual void Tock();

  /// @brief Sink request Materials of their given commodity. Note
  /// that it is assumed the Sink operates on a single resource type!
  virtual std::set<cyclus::RequestPortfolio<cyclus::Material>::Ptr>
      GetMatlRequests();

  /// @brief Sink request Product of their given
  /// commodity. Note that it is assumed the Sink operates on a single
  /// resource type!
  virtual std::set<cyclus::RequestPortfolio<cyclus::Product>::Ptr>
      GetProductRequests();

  /// @brief Sink place accepted trade Materials in their Inventory
  virtual void AcceptMatlTrades(
      const std::vector< std::pair<cyclus::Trade<cyclus::Material>,
                                   cyclus::Material::Ptr> >& responses);

  /// @brief Sink place accepted trade Materials in their Inventory
  virtual void AcceptProductTrades(
      const std::vector< std::pair<cyclus::Trade<cyclus::Product>,
                                   cyclus::Product::Ptr> >& responses);

  /// @brief determines the amount to request
  inline double Capacity() const { return capacity; }

  inline void Capacity(double cap) { capacity = cap; }

  void AddIncommod(std::string commod) {in_commods.push_back(commod);};

  /// sets the name of the recipe to be requested
  inline void recipe(std::string name) { recipe_name = name; }

  /// the name of the input recipe to request
  inline std::string recipe() const { return recipe_name; }

  virtual void Build(cyclus::Agent* parent) {
    Facility::Build(parent);
    if (lifetime() >= 0) {
      context()->SchedDecom(this, exit_time());
    }
  }

 private:
  #pragma cyclus var {    "doc": "commodities that the sink facility accepts ",	       "tooltip": "input commodities for the sink",		       "uilabel": "List of Input Commodities",			       "uitype": ["oneormore", "incommodity"]			     }
#line 85 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
  std::vector<std::string> in_commods;
  std::vector<int> cycpp_shape_in_commods;
#line 86 "/workspaces/congenial-waddle/cyclus/agents/sink.h"


  #pragma cyclus var {     "tooltip": "input/request recipe name",     "doc": "Name of recipe to request. "            "If empty, sink requests material no particular composition.",     "default": "",     "uilabel": "Input Recipe",			    "uitype": "recipe",   }
#line 95 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
  std::string recipe_name;
  std::vector<int> cycpp_shape_recipe_name;
#line 96 "/workspaces/congenial-waddle/cyclus/agents/sink.h"


  #pragma cyclus var {    "default": CY_LARGE_DOUBLE,						    "doc": "total maximum inventory size of "			           "sink facility",						    "uilabel": "Maximum Inventory",				    "tooltip": "sink maximum inventory size"   }
#line 104 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
  double max_inv_size;
  std::vector<int> cycpp_shape_max_inv_size;
#line 105 "/workspaces/congenial-waddle/cyclus/agents/sink.h"


  #pragma cyclus var {     "doc": "capacity the sink facility can "            "accept at each time step",     "uilabel": "Maximum Throughput",     "uitype": "range",     "range": [0.0, CY_LARGE_DOUBLE],     "tooltip": "sink capacity"   }
#line 114 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
  double capacity;
  std::vector<int> cycpp_shape_capacity;

#line 115 "/workspaces/congenial-waddle/cyclus/agents/sink.h"

  #pragma cyclus var {'capacity': 'max_inv_size'}
  cyclus::toolkit::ResBuf<cyclus::Resource> inventory;
  std::vector<int> cycpp_shape_inventory;

#line 118 "/workspaces/congenial-waddle/cyclus/agents/sink.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_SINK_H_