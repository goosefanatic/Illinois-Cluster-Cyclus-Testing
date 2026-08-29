
#line 1 "/workspaces/congenial-waddle/cyclus/agents/source.h"
#ifndef CYCLUS_AGENTS_SOURCE_H_
#define CYCLUS_AGENTS_SOURCE_H_

#include <set>
#include <string>
#include <vector>

#include "cyclus.h"

#pragma cyclus exec from sidecar import CY_LARGE_DOUBLE, CY_LARGE_INT, CY_NEAR_ZERO

namespace cyclus {

class Context;

/// @class Source
/// This facility is a source of some commodity with some capacity.
/// This facility is sort of reduced copy of cycamore's source facility.
/// A lot of implementation code is barrowed from cycamore's source facility
/// implementation files.
///
/// This Facility is intended
/// to be used for Cyclus integration tests as a basic source facility.
class Source : public cyclus::Facility {
 public:
  Source(cyclus::Context* ctx);
  virtual ~Source() {}

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::Source* m) {
    cyclus::Facility::InitFrom(m);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    commod = m->commod;
    recipe_name = m->recipe_name;
    capacity = m->capacity;
  };
#line 30 "/workspaces/congenial-waddle/cyclus/agents/source.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Facility::InitFrom(b);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    commod = qr.GetVal<std::string>("commod");
    recipe_name = qr.GetVal<std::string>("recipe_name");
    capacity = qr.GetVal<double>("capacity");
  };
#line 32 "/workspaces/congenial-waddle/cyclus/agents/source.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Facility::InfileToDb(tree, di);
    int rawcycpp_shape_commod[1] = {-1};
    cycpp_shape_commod = std::vector<int>(rawcycpp_shape_commod, rawcycpp_shape_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {-1};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_capacity[1] = {-1};
    cycpp_shape_capacity = std::vector<int>(rawcycpp_shape_capacity, rawcycpp_shape_capacity + 1);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    {
      std::string commod_val = cyclus::Query<std::string>(sub, "commod");
      commod = commod_val;
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
    {
      double capacity_val = cyclus::Query<double>(sub, "capacity");
      capacity = capacity_val;
    }
    di.NewDatum("Info")
    ->AddVal("commod", commod, &cycpp_shape_commod)
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("capacity", capacity, &cycpp_shape_capacity)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::Source* m = new cyclus::Source(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <element name=\"commod\">\n"
      "        <a:documentation>commodity that the source facility supplies</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <optional>\n"
      "        <element name=\"recipe_name\">\n"
      "            <a:documentation>Recipe name for source facility's commodity.If empty, source supplies material with requested compositions.</a:documentation>\n"
      "            <data type=\"token\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <element name=\"capacity\">\n"
      "        <a:documentation>amount of commodity that can be supplied at each time step</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "</interleave>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::Source\",\"entity\":\"facility\",\"pare"
      "nts\":[\"cyclus::Facility\"],\"all_parents\":[\"Economic"
      "Entity\",\"cyclus::Agent\",\"cyclus::Facility\",\"cyclus"
      "::Ider\",\"cyclus::StateWrangler\",\"cyclus::TimeListe"
      "ner\",\"cyclus::Trader\"],\"vars\":{\"commod\":{\"doc\":\"co"
      "mmodity that the source facility "
      "supplies\",\"tooltip\":\"source commodity\",\"schematype"
      "\":\"token\",\"uilabel\":\"Commodity\",\"uitype\":\"outcommo"
      "dity\",\"type\":\"std::string\",\"index\":0,\"shape\":[-"
      "1],\"alias\":\"commod\"},\"recipe_name\":{\"doc\":\"Recipe "
      "name for source facility's commodity.If empty, "
      "source supplies material with requested "
      "compositions.\",\"tooltip\":\"commodity recipe name\",\""
      "schematype\":\"token\",\"default\":\"\",\"uilabel\":\"Recipe"
      "\",\"uitype\":\"recipe\",\"type\":\"std::string\",\"index\":1"
      ",\"shape\":[-"
      "1],\"alias\":\"recipe_name\"},\"capacity\":{\"doc\":\"amoun"
      "t of commodity that can be supplied at each time "
      "step\",\"uilabel\":\"Maximum Throughput\",\"uitype\":\"ran"
      "ge\",\"range\":[0.0,1e+299],\"tooltip\":\"source capacit"
      "y\",\"type\":\"double\",\"index\":2,\"shape\":[-"
      "1],\"alias\":\"capacity\"}},\"doc\":\"A minimum "
      "implementation source facility that provides a "
      "commodity with a given capacity\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::Source.");
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
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("capacity", capacity, &cycpp_shape_capacity)
    ->Record();
  };

  #pragma cyclus note {"doc": "A minimum implementation source "                               "facility that provides a commodity "                               "with a given capacity"}
#line 36 "/workspaces/congenial-waddle/cyclus/agents/source.h"

  virtual std::string str();

  virtual void Tick();

  virtual void Tock();

  /// @brief Responds to each request for this source facility's commodity.
  /// If a given request is more than this facility's capacity, it will offer
  /// its capacity.
  virtual std::set<cyclus::BidPortfolio<cyclus::Material>::Ptr>
      GetMatlBids(cyclus::CommodMap<cyclus::Material>::type&
                  commod_requests);

  /// @brief respond to each trade with a material made from this facility's
  /// recipe
  ///
  /// @param trades all trades in which this trader is the supplier
  /// @param responses a container to populate with responses to each trade
  virtual void GetMatlTrades(
      const std::vector< cyclus::Trade<cyclus::Material> >& trades,
      std::vector<std::pair<cyclus::Trade<cyclus::Material>,
                            cyclus::Material::Ptr> >& responses);

  /// @brief creates a material object to offer to a requester
  /// @param target the material target a request desires
  cyclus::Material::Ptr GetOffer(const cyclus::Material::Ptr target) const;

  /// @brief sets the output commodity name
  /// @param name the commodity name
  inline void commodity(std::string name) { commod = name; }

  /// @return the output commodity
  inline std::string commodity() const { return commod; }

  /// @brief sets the capacity of a material generated at any given time step
  /// @param cap the production capacity
  inline void Capacity(double cap) { capacity = cap; }

  /// @return the production capacity at any given time step
  inline double Capacity() const { return capacity; }

  /// @brief sets the name of the recipe to be produced
  /// @param name the recipe name
  inline void recipe(std::string name) { recipe_name = name; }

  /// @return the name of the output recipe
  inline std::string recipe() const { return recipe_name; }

  virtual void Build(cyclus::Agent* parent) {
    Facility::Build(parent);
    if (lifetime() >= 0) {
      context()->SchedDecom(this, exit_time());
    }
  }

 private:
  #pragma cyclus var {     "doc": "commodity that the source facility supplies",	    "tooltip": "source commodity",			    "schematype": "token",				    "uilabel": "Commodity",			    "uitype": "outcommodity"   }
#line 100 "/workspaces/congenial-waddle/cyclus/agents/source.h"
  std::string commod;
  std::vector<int> cycpp_shape_commod;
#line 101 "/workspaces/congenial-waddle/cyclus/agents/source.h"


  #pragma cyclus var {     "doc": "Recipe name for source facility's commodity."            "If empty, source supplies material with requested compositions.",     "tooltip": "commodity recipe name",     "schematype": "token",     "default": "",     "uilabel": "Recipe",			   "uitype": "recipe",   }
#line 111 "/workspaces/congenial-waddle/cyclus/agents/source.h"
  std::string recipe_name;
  std::vector<int> cycpp_shape_recipe_name;

#line 112 "/workspaces/congenial-waddle/cyclus/agents/source.h"

  /// The capacity is defined in terms of the number of units of the
  /// recipe that can be provided each time step.  A very large number
  /// can be provided to represent infinte capacity.
  #pragma cyclus var {     "doc": "amount of commodity that can be supplied at each time step",     "uilabel": "Maximum Throughput",     "uitype": "range",     "range": [0.0, CY_LARGE_DOUBLE],     "tooltip": "source capacity"   }
#line 123 "/workspaces/congenial-waddle/cyclus/agents/source.h"
  double capacity;
  std::vector<int> cycpp_shape_capacity;

#line 124 "/workspaces/congenial-waddle/cyclus/agents/source.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_SOURCE_H_