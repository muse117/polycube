/**
* router API generated from router.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "RouterJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

RouterJsonObject::RouterJsonObject() {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_routeIsSet = false;
  m_arpTableIsSet = false;
}

RouterJsonObject::RouterJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_portsIsSet = false;
  m_routeIsSet = false;
  m_arpTableIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("ports")) {
    for (auto& item : val["ports"]) {
      PortsJsonObject newItem{ item };
      m_ports.push_back(newItem);
    }

    m_portsIsSet = true;
  }

  if (val.count("route")) {
    for (auto& item : val["route"]) {
      RouteJsonObject newItem{ item };
      m_route.push_back(newItem);
    }

    m_routeIsSet = true;
  }

  if (val.count("arp-table")) {
    for (auto& item : val["arp-table"]) {
      ArpTableJsonObject newItem{ item };
      m_arpTable.push_back(newItem);
    }

    m_arpTableIsSet = true;
  }
}

nlohmann::json RouterJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_ports) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["ports"] = jsonArray;
    }
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_route) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["route"] = jsonArray;
    }
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_arpTable) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["arp-table"] = jsonArray;
    }
  }

  return val;
}

std::string RouterJsonObject::getName() const {
  return m_name;
}

void RouterJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool RouterJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



const std::vector<PortsJsonObject>& RouterJsonObject::getPorts() const{
  return m_ports;
}

void RouterJsonObject::addPorts(PortsJsonObject value) {
  m_ports.push_back(value);
  m_portsIsSet = true;
}


bool RouterJsonObject::portsIsSet() const {
  return m_portsIsSet;
}

void RouterJsonObject::unsetPorts() {
  m_portsIsSet = false;
}

const std::vector<RouteJsonObject>& RouterJsonObject::getRoute() const{
  return m_route;
}

void RouterJsonObject::addRoute(RouteJsonObject value) {
  m_route.push_back(value);
  m_routeIsSet = true;
}


bool RouterJsonObject::routeIsSet() const {
  return m_routeIsSet;
}

void RouterJsonObject::unsetRoute() {
  m_routeIsSet = false;
}

const std::vector<ArpTableJsonObject>& RouterJsonObject::getArpTable() const{
  return m_arpTable;
}

void RouterJsonObject::addArpTable(ArpTableJsonObject value) {
  m_arpTable.push_back(value);
  m_arpTableIsSet = true;
}


bool RouterJsonObject::arpTableIsSet() const {
  return m_arpTableIsSet;
}

void RouterJsonObject::unsetArpTable() {
  m_arpTableIsSet = false;
}


}
}
}

