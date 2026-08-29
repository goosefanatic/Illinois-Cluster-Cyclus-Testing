
#line 1 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
#ifndef CYCLUS_AGENTS_K_FACILITY_H_
#define CYCLUS_AGENTS_K_FACILITY_H_

#include <set>
#include <string>
#include <vector>

#include "cyclus.h"

#pragma cyclus exec from sidecar import CY_LARGE_DOUBLE, CY_LARGE_INT, CY_NEAR_ZERO

namespace cyclus {

class Context;

/// @class KFacility
///
/// @section intro Introduction
/// The KFacility is a source and consumer of commodities.
/// The facility changes its request and offer amount according to a power law.
///
/// Amount = Capacity(T=0) * ConversionFactor ^ Time
///
/// This facility is intended to be used for Cyclus trivial and
/// minimal cycle integration tests.

/// @section params Parameters
/// The parameters relevant to simulation tests:
///   #. k_factor_in : a conversion factor for input commodity or request.
///   #. k_factor_out : a conversion factor for output commodity or bid.
///   #. in_capacity : an initial capacity for input commodity.
///   #. out_capacity : an initial capacity for output commodity.
class KFacility : public cyclus::Facility {
 public:
  /// @brief Constructor for KFacility Class
  /// @param ctx the cyclus context for access to simulation-wide parameters
  KFacility(cyclus::Context* ctx);
  virtual ~KFacility();

  virtual std::string version() { return cyclus::version::describe(); }
  virtual void InitFrom(cyclus::KFacility* m) {
    cyclus::Facility::InitFrom(m);
    int rawcycpp_shape_in_commod[1] = {-1};
    cycpp_shape_in_commod = std::vector<int>(rawcycpp_shape_in_commod, rawcycpp_shape_in_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {50};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_out_commod[1] = {-1};
    cycpp_shape_out_commod = std::vector<int>(rawcycpp_shape_out_commod, rawcycpp_shape_out_commod + 1);
    int rawcycpp_shape_in_capacity[1] = {-1};
    cycpp_shape_in_capacity = std::vector<int>(rawcycpp_shape_in_capacity, rawcycpp_shape_in_capacity + 1);
    int rawcycpp_shape_out_capacity[1] = {-1};
    cycpp_shape_out_capacity = std::vector<int>(rawcycpp_shape_out_capacity, rawcycpp_shape_out_capacity + 1);
    int rawcycpp_shape_current_capacity[1] = {-1};
    cycpp_shape_current_capacity = std::vector<int>(rawcycpp_shape_current_capacity, rawcycpp_shape_current_capacity + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    int rawcycpp_shape_k_factor_in[1] = {-1};
    cycpp_shape_k_factor_in = std::vector<int>(rawcycpp_shape_k_factor_in, rawcycpp_shape_k_factor_in + 1);
    int rawcycpp_shape_k_factor_out[1] = {-1};
    cycpp_shape_k_factor_out = std::vector<int>(rawcycpp_shape_k_factor_out, rawcycpp_shape_k_factor_out + 1);
    in_commod = m->in_commod;
    recipe_name = m->recipe_name;
    out_commod = m->out_commod;
    in_capacity = m->in_capacity;
    out_capacity = m->out_capacity;
    current_capacity = m->current_capacity;
    max_inv_size = m->max_inv_size;
    k_factor_in = m->k_factor_in;
    k_factor_out = m->k_factor_out;
    inventory.capacity(m->inventory.capacity());
  };
#line 41 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  virtual void InitFrom(cyclus::QueryableBackend* b) {
    cyclus::Facility::InitFrom(b);
    int rawcycpp_shape_in_commod[1] = {-1};
    cycpp_shape_in_commod = std::vector<int>(rawcycpp_shape_in_commod, rawcycpp_shape_in_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {50};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_out_commod[1] = {-1};
    cycpp_shape_out_commod = std::vector<int>(rawcycpp_shape_out_commod, rawcycpp_shape_out_commod + 1);
    int rawcycpp_shape_in_capacity[1] = {-1};
    cycpp_shape_in_capacity = std::vector<int>(rawcycpp_shape_in_capacity, rawcycpp_shape_in_capacity + 1);
    int rawcycpp_shape_out_capacity[1] = {-1};
    cycpp_shape_out_capacity = std::vector<int>(rawcycpp_shape_out_capacity, rawcycpp_shape_out_capacity + 1);
    int rawcycpp_shape_current_capacity[1] = {-1};
    cycpp_shape_current_capacity = std::vector<int>(rawcycpp_shape_current_capacity, rawcycpp_shape_current_capacity + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    int rawcycpp_shape_k_factor_in[1] = {-1};
    cycpp_shape_k_factor_in = std::vector<int>(rawcycpp_shape_k_factor_in, rawcycpp_shape_k_factor_in + 1);
    int rawcycpp_shape_k_factor_out[1] = {-1};
    cycpp_shape_k_factor_out = std::vector<int>(rawcycpp_shape_k_factor_out, rawcycpp_shape_k_factor_out + 1);
    cyclus::QueryResult qr = b->Query("Info", NULL);
    in_commod = qr.GetVal<std::string>("in_commod");
    recipe_name = qr.GetVal<std::string>("recipe_name");
    out_commod = qr.GetVal<std::string>("out_commod");
    in_capacity = qr.GetVal<double>("in_capacity");
    out_capacity = qr.GetVal<double>("out_capacity");
    current_capacity = qr.GetVal<double>("current_capacity");
    max_inv_size = qr.GetVal<double>("max_inv_size");
    k_factor_in = qr.GetVal<double>("k_factor_in");
    k_factor_out = qr.GetVal<double>("k_factor_out");
    inventory.capacity(max_inv_size);
  };
#line 43 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  virtual void InfileToDb(cyclus::InfileTree* tree, cyclus::DbInit di) {
    cyclus::Facility::InfileToDb(tree, di);
    int rawcycpp_shape_in_commod[1] = {-1};
    cycpp_shape_in_commod = std::vector<int>(rawcycpp_shape_in_commod, rawcycpp_shape_in_commod + 1);
    int rawcycpp_shape_recipe_name[1] = {50};
    cycpp_shape_recipe_name = std::vector<int>(rawcycpp_shape_recipe_name, rawcycpp_shape_recipe_name + 1);
    int rawcycpp_shape_out_commod[1] = {-1};
    cycpp_shape_out_commod = std::vector<int>(rawcycpp_shape_out_commod, rawcycpp_shape_out_commod + 1);
    int rawcycpp_shape_in_capacity[1] = {-1};
    cycpp_shape_in_capacity = std::vector<int>(rawcycpp_shape_in_capacity, rawcycpp_shape_in_capacity + 1);
    int rawcycpp_shape_out_capacity[1] = {-1};
    cycpp_shape_out_capacity = std::vector<int>(rawcycpp_shape_out_capacity, rawcycpp_shape_out_capacity + 1);
    int rawcycpp_shape_current_capacity[1] = {-1};
    cycpp_shape_current_capacity = std::vector<int>(rawcycpp_shape_current_capacity, rawcycpp_shape_current_capacity + 1);
    int rawcycpp_shape_max_inv_size[1] = {-1};
    cycpp_shape_max_inv_size = std::vector<int>(rawcycpp_shape_max_inv_size, rawcycpp_shape_max_inv_size + 1);
    int rawcycpp_shape_inventory[2] = {-1, -1};
    cycpp_shape_inventory = std::vector<int>(rawcycpp_shape_inventory, rawcycpp_shape_inventory + 2);
    int rawcycpp_shape_k_factor_in[1] = {-1};
    cycpp_shape_k_factor_in = std::vector<int>(rawcycpp_shape_k_factor_in, rawcycpp_shape_k_factor_in + 1);
    int rawcycpp_shape_k_factor_out[1] = {-1};
    cycpp_shape_k_factor_out = std::vector<int>(rawcycpp_shape_k_factor_out, rawcycpp_shape_k_factor_out + 1);
    cyclus::InfileTree* sub = tree->SubTree("config/*");
    int i;
    int n;
    {
      std::string in_commod_val = cyclus::Query<std::string>(sub, "in_commod");
      in_commod = in_commod_val;
    }
    {
      std::string recipe_name_val = cyclus::Query<std::string>(sub, "recipe_name");
      recipe_name = recipe_name_val;
    }
    {
      std::string out_commod_val = cyclus::Query<std::string>(sub, "out_commod");
      out_commod = out_commod_val;
    }
    {
      double in_capacity_val = cyclus::Query<double>(sub, "in_capacity");
      in_capacity = in_capacity_val;
    }
    {
      double out_capacity_val = cyclus::Query<double>(sub, "out_capacity");
      out_capacity = out_capacity_val;
    }
    if (sub->NMatches("current_capacity") > 0) {
      {
        double current_capacity_val = cyclus::Query<double>(sub, "current_capacity");
        current_capacity = current_capacity_val;
      }
    } else {
      double current_capacity_tmp = 0;
      current_capacity = current_capacity_tmp;
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
      double k_factor_in_val = cyclus::Query<double>(sub, "k_factor_in");
      k_factor_in = k_factor_in_val;
    }
    {
      double k_factor_out_val = cyclus::Query<double>(sub, "k_factor_out");
      k_factor_out = k_factor_out_val;
    }
    di.NewDatum("Info")
    ->AddVal("in_commod", in_commod, &cycpp_shape_in_commod)
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("out_commod", out_commod, &cycpp_shape_out_commod)
    ->AddVal("in_capacity", in_capacity, &cycpp_shape_in_capacity)
    ->AddVal("out_capacity", out_capacity, &cycpp_shape_out_capacity)
    ->AddVal("current_capacity", current_capacity, &cycpp_shape_current_capacity)
    ->AddVal("max_inv_size", max_inv_size, &cycpp_shape_max_inv_size)
    ->AddVal("k_factor_in", k_factor_in, &cycpp_shape_k_factor_in)
    ->AddVal("k_factor_out", k_factor_out, &cycpp_shape_k_factor_out)
    ->Record();
  };

  virtual cyclus::Agent* Clone() {
    cyclus::KFacility* m = new cyclus::KFacility(context());
    m->InitFrom(this);
    return m;
  };

  virtual std::string schema() {
    return ""
      "<interleave>\n"
      "    <element name=\"in_commod\">\n"
      "        <a:documentation>commodity that the k-facility consumes</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <element name=\"recipe_name\">\n"
      "        <a:documentation>recipe name for the k-facility's in-commodity</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <element name=\"out_commod\">\n"
      "        <a:documentation>commodity that the k-facility supplies</a:documentation>\n"
      "        <data type=\"token\"/>\n"
      "    </element>\n"
      "    <element name=\"in_capacity\">\n"
      "        <a:documentation>number of commodity units that can be taken at each timestep (infinite capacity can be represented by a very large number)</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "    <element name=\"out_capacity\">\n"
      "        <a:documentation>number of commodity units that can be supplied at each timestep (infinite capacity can be represented by a very large number)</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "    <optional>\n"
      "        <element name=\"current_capacity\">\n"
      "            <a:documentation>number of output commodity units that can be supplied at the current time step (infinite capacity can be represented by a very large number )</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <optional>\n"
      "        <element name=\"max_inv_size\">\n"
      "            <a:documentation>total maximum inventory size of the k-facility</a:documentation>\n"
      "            <data type=\"double\"/>\n"
      "        </element>\n"
      "    </optional>\n"
      "    <element name=\"k_factor_in\">\n"
      "        <a:documentation>conversion factor that governs the behavior of the k-facility's input commodity capacity</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "    <element name=\"k_factor_out\">\n"
      "        <a:documentation>conversion factor that governs the behavior of the k-facility's output commodity capacity</a:documentation>\n"
      "        <data type=\"double\"/>\n"
      "    </element>\n"
      "</interleave>\n";
  };

  virtual Json::Value annotations() {
    Json::Value root;
    Json::Reader reader;
    bool parsed_ok = reader.parse(
      "{\"name\":\"cyclus::KFacility\",\"entity\":\"facility\",\"p"
      "arents\":[\"cyclus::Facility\"],\"all_parents\":[\"Econo"
      "micEntity\",\"cyclus::Agent\",\"cyclus::Facility\",\"cyc"
      "lus::Ider\",\"cyclus::StateWrangler\",\"cyclus::TimeLi"
      "stener\",\"cyclus::Trader\"],\"vars\":{\"in_commod\":{\"to"
      "oltip\":\"input commodity\",\"doc\":\"commodity that the"
      " k-facility "
      "consumes\",\"schematype\":\"token\",\"uilabel\":\"Input Co"
      "mmodity\",\"uitype\":\"incommodity\",\"type\":\"std::strin"
      "g\",\"index\":0,\"shape\":[-"
      "1],\"alias\":\"in_commod\"},\"recipe_name\":{\"shape\":[50"
      "],\"tooltip\":\"in-commodity recipe "
      "name\",\"doc\":\"recipe name for the k-facility's in-"
      "commodity\",\"schematype\":\"token\",\"uilabel\":\"Input R"
      "ecipe\",\"uitype\":\"recipe\",\"type\":\"std::string\",\"ind"
      "ex\":1,\"alias\":\"recipe_name\"},\"out_commod\":{\"toolti"
      "p\":\"output commodity\",\"doc\":\"commodity that the "
      "k-facility "
      "supplies\",\"schematype\":\"token\",\"uilabel\":\"Output C"
      "ommodity\",\"uitype\":\"outcommodity\",\"type\":\"std::str"
      "ing\",\"index\":2,\"shape\":[-"
      "1],\"alias\":\"out_commod\"},\"in_capacity\":{\"tooltip\":"
      "\"input commodity capacity\",\"doc\":\"number of "
      "commodity units that can be taken at each timestep"
      " (infinite capacity can be represented by a very "
      "large number)\",\"uilabel\":\"Incoming Throughput\",\"ty"
      "pe\":\"double\",\"index\":3,\"shape\":[-"
      "1],\"alias\":\"in_capacity\"},\"out_capacity\":{\"tooltip"
      "\":\"output commodity capacity\",\"doc\":\"number of "
      "commodity units that can be supplied at each "
      "timestep (infinite capacity can be represented by "
      "a very large number)\",\"uilabel\":\"Outgoing Throughp"
      "ut\",\"type\":\"double\",\"index\":4,\"shape\":[-"
      "1],\"alias\":\"out_capacity\"},\"current_capacity\":{\"de"
      "fault\":0,\"tooltip\":\"current output "
      "capacity\",\"doc\":\"number of output commodity units "
      "that can be supplied at the current time step "
      "(infinite capacity can be represented by a very "
      "large number )\",\"uilabel\":\"Current Capacity\",\"type"
      "\":\"double\",\"index\":5,\"shape\":[-"
      "1],\"alias\":\"current_capacity\"},\"max_inv_size\":{\"de"
      "fault\":1e+299,\"tooltip\":\"k-facility maximum "
      "inventory size\",\"doc\":\"total maximum inventory "
      "size of the k-facility\",\"uilabel\":\"Maximum Invento"
      "ry\",\"type\":\"double\",\"index\":6,\"shape\":[-"
      "1],\"alias\":\"max_inv_size\"},\"inventory\":{\"capacity\""
      ":\"max_inv_size\",\"type\":[\"cyclus::toolkit::ResBuf\","
      "\"cyclus::Resource\"],\"index\":7,\"shape\":[-1,-"
      "1]},\"k_factor_in\":{\"tooltip\":\"input "
      "k-factor\",\"doc\":\"conversion factor that governs "
      "the behavior of the k-facility's input commodity "
      "capacity\",\"uilabel\":\"Input K-"
      "Factor\",\"type\":\"double\",\"index\":8,\"shape\":[-"
      "1],\"alias\":\"k_factor_in\"},\"k_factor_out\":{\"tooltip"
      "\":\"output k-factor\",\"doc\":\"conversion factor that "
      "governs the behavior of the k-facility's output "
      "commodity capacity\",\"uilabel\":\"Output K-"
      "Factor\",\"type\":\"double\",\"index\":9,\"shape\":[-"
      "1],\"alias\":\"k_factor_out\"}},\"doc\":\"A facility "
      "designed for integration tests that both provides "
      "and consumes commodities. It changes its request "
      "and offer amounts based on a power law with "
      "respect to time.\"}", root);
    if (!parsed_ok) {
      throw cyclus::ValueError("failed to parse annotations for cyclus::KFacility.");
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
    ->AddVal("in_commod", in_commod, &cycpp_shape_in_commod)
    ->AddVal("recipe_name", recipe_name, &cycpp_shape_recipe_name)
    ->AddVal("out_commod", out_commod, &cycpp_shape_out_commod)
    ->AddVal("in_capacity", in_capacity, &cycpp_shape_in_capacity)
    ->AddVal("out_capacity", out_capacity, &cycpp_shape_out_capacity)
    ->AddVal("current_capacity", current_capacity, &cycpp_shape_current_capacity)
    ->AddVal("max_inv_size", max_inv_size, &cycpp_shape_max_inv_size)
    ->AddVal("k_factor_in", k_factor_in, &cycpp_shape_k_factor_in)
    ->AddVal("k_factor_out", k_factor_out, &cycpp_shape_k_factor_out)
    ->Record();
  };

  #pragma cyclus note {"doc": "A facility designed for integration tests "                               "that both provides and consumes commodities"                               ". It changes its request and offer amounts "                               "based on a power law with respect to time."}
#line 48 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  virtual std::string str();

  virtual void Tick();

  virtual void Tock();

  /// @brief Responds to each request for this source facility's commodity.
  /// If a given request is more than this facility's capacity, it will offer
  /// its capacity.
  virtual std::set<cyclus::BidPortfolio<cyclus::Material>::Ptr>
      GetMatlBids(
          cyclus::CommodMap<cyclus::Material>::type& commod_requests);

  /// @brief respond to each trade with a material made from this facility's
  /// recipe
  ///
  /// @param trades all trades in which this trader is the supplier
  /// @param responses a container to populate with responses to each trade
  virtual void GetMatlTrades(
      const std::vector< cyclus::Trade<cyclus::Material> >& trades,
      std::vector<std::pair<cyclus::Trade<cyclus::Material>,
      cyclus::Material::Ptr> >& responses);

  /// @brief Request Materials of their given commodity. Note
  /// that it is assumed the facility operates on a single resource type!
  virtual std::set<cyclus::RequestPortfolio<cyclus::Material>::Ptr>
      GetMatlRequests();

  /// @brief Request Products of their given
  /// commodity. Note that it is assumed the facility operates on a single
  /// resource type!
  virtual std::set<cyclus::RequestPortfolio<cyclus::Product>::Ptr>
      GetProductRequests();

  /// @brief Place accepted trade Materials in their Inventory
  virtual void AcceptMatlTrades(
      const std::vector< std::pair<cyclus::Trade<cyclus::Material>,
      cyclus::Material::Ptr> >& responses);

  /// @brief Place accepted trade Materials in their Inventory
  virtual void AcceptProductTrades(
      const std::vector< std::pair<cyclus::Trade<cyclus::Product>,
      cyclus::Product::Ptr> >& responses);

  // --- KFacility Members ---
  /// @brief creates a material object to offer to a requester
  /// @param target the material target a request desires
  cyclus::Material::Ptr GetOffer(const cyclus::Material::Ptr target) const;

  /// @brief sets the output commodity name
  /// @param name the commodity name
  inline void commodity(std::string name) { out_commod = name; }

  /// @return the output commodity
  inline std::string commodity() const { return out_commod; }

  /// @brief sets the capacity of a material generated at any given time step
  /// @param capacity the production capacity
  inline void capacity(double capacity) {
    out_capacity = capacity;
    current_capacity = out_capacity;
  }

  /// @return the production capacity at any given time step
  inline double capacity() const { return out_capacity; }

  /// @brief sets the name of the recipe to be produced
  /// @param name the recipe name
  inline void recipe(std::string name) { recipe_name = name; }

  /// @return the name of the output recipe
  inline std::string recipe() const { return recipe_name; }

  /// @return the current timestep's capacity
  inline double CurrentCapacity() const { return current_capacity; }

  /// @brief determines the amount to request
  inline double RequestAmt() const { return in_capacity; }

  /// @ return the conversion factor input
  inline double KFactorIn() const { return k_factor_in; }

  /// @brief sets the conversion factor input
  /// @param new conversion factor
  inline void KFactorIn(double k_factor) { k_factor_in = k_factor; }

  /// @ return the conversion factor for output
  inline double KFactorOut() const { return k_factor_out; }

  /// @brief sets the conversion factor for output
  /// @param new conversion factor
  inline void KFactorOut(double k_factor) { k_factor_out = k_factor; }

 private:
  /// This facility has one output commodity and one input commodity
  #pragma cyclus var {     "tooltip": "input commodity",				           "doc": "commodity that the k-facility consumes",		           "schematype": "token",					           "uilabel": "Input Commodity",				           "uitype": "incommodity"   }
#line 151 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  std::string in_commod;
  std::vector<int> cycpp_shape_in_commod;

#line 152 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  /// Name of the recipe this facility uses.
  #pragma cyclus var {     "shape": [50],      "tooltip": "in-commodity recipe name",				    "doc": "recipe name for the k-facility's in-commodity",		    "schematype": "token",						    "uilabel": "Input Recipe",						    "uitype": "recipe"   }
#line 162 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  std::string recipe_name;
  std::vector<int> cycpp_shape_recipe_name;
#line 163 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"


  #pragma cyclus var {     "tooltip": "output commodity",				           "doc": "commodity that the k-facility supplies",		           "schematype": "token",					           "uilabel": "Output Commodity",				           "uitype": "outcommodity"   }
#line 171 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  std::string out_commod;
  std::vector<int> cycpp_shape_out_commod;

#line 172 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  /// The capacity is defined in terms of the number of units of the
  /// recipe that can be provided each time step.  A very large number
  /// can be provided to represent infinte capacity.
  /// In and out commodity capacities are defined.
  #pragma cyclus var {     "tooltip": "input commodity capacity",				    "doc": "number of commodity units that can be taken at each timestep "             "(infinite capacity can be represented by a very large number)",     "uilabel": "Incoming Throughput"			   }
#line 183 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double in_capacity;
  std::vector<int> cycpp_shape_in_capacity;
#line 184 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"


  #pragma cyclus var {     "tooltip": "output commodity capacity",			          "doc": "number of commodity units that can be supplied at each timestep "            "(infinite capacity can be represented by a very large number)",     "uilabel": "Outgoing Throughput"					  }
#line 191 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double out_capacity;
  std::vector<int> cycpp_shape_out_capacity;

#line 192 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  /// The output capacity at the current time step.
  #pragma cyclus var {     "default": 0,							    "tooltip": "current output capacity",				    "doc": "number of output commodity units that can be supplied at "            "the current time step (infinite "		            "capacity can be represented by a very large number )", 	    "uilabel": "Current Capacity"		  }
#line 202 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double current_capacity;
  std::vector<int> cycpp_shape_current_capacity;
#line 203 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"


  #pragma cyclus var {     "default": CY_LARGE_DOUBLE,     "tooltip": "k-facility maximum inventory size",     "doc": "total maximum inventory size of the k-facility",     "uilabel": "Maximum Inventory"			       }
#line 210 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double max_inv_size;
  std::vector<int> cycpp_shape_max_inv_size;

#line 211 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  #pragma cyclus var {'capacity': 'max_inv_size'}
  cyclus::toolkit::ResBuf<cyclus::Resource> inventory;
  std::vector<int> cycpp_shape_inventory;

#line 214 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"

  /// Conversion factors for input and output amounts.
  #pragma cyclus var {     "tooltip": "input k-factor",					    "doc": "conversion factor that governs the behavior "		           "of the k-facility's input commodity capacity",     "uilabel": "Input K-Factor"		      }
#line 222 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double k_factor_in;
  std::vector<int> cycpp_shape_k_factor_in;
#line 223 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"


  #pragma cyclus var {     "tooltip": "output k-factor",					    "doc": "conversion factor that governs the behavior "		           "of the k-facility's output commodity capacity",     "uilabel": "Output K-Factor"				      }
#line 230 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
  double k_factor_out;
  std::vector<int> cycpp_shape_k_factor_out;

#line 231 "/workspaces/congenial-waddle/cyclus/agents/k_facility.h"
};

}  // namespace cyclus

#endif  // CYCLUS_AGENTS_K_FACILITY_H_