/**
* router API generated from router.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* PortsBase.h
*
*
*/

#pragma once

#include "../serializer/PortsJsonObject.h"

#include "../PortsSecondaryip.h"



#include "polycube/services/cube.h"
#include "polycube/services/port.h"

#include "polycube/services/utils.h"
#include "polycube/services/fifo_map.hpp"

#include <spdlog/spdlog.h>

using namespace polycube::service::model;

class Router;
class Ports;

class PortsBase: public polycube::service::Port {
 public:
  PortsBase(polycube::service::Cube<Ports> &parent,
      std::shared_ptr<polycube::service::PortIface> port);

  virtual ~PortsBase();
  virtual void update(const PortsJsonObject &conf);
  virtual PortsJsonObject toJsonObject();

  /// <summary>
  /// IP address and prefix of the port
  /// </summary>
  virtual std::string getIp() = 0;
  virtual void setIp(const std::string &value) = 0;

  /// <summary>
  /// Additional IP addresses for the port
  /// </summary>
  virtual std::shared_ptr<PortsSecondaryip> getSecondaryip(const std::string &ip) = 0;
  virtual std::vector<std::shared_ptr<PortsSecondaryip>> getSecondaryipList() = 0;
  virtual void addSecondaryip(const std::string &ip, const PortsSecondaryipJsonObject &conf) = 0;
  virtual void addSecondaryipList(const std::vector<PortsSecondaryipJsonObject> &conf);
  virtual void replaceSecondaryip(const std::string &ip, const PortsSecondaryipJsonObject &conf);
  virtual void delSecondaryip(const std::string &ip) = 0;
  virtual void delSecondaryipList();

  /// <summary>
  /// MAC address of the port
  /// </summary>
  virtual std::string getMac() = 0;
  virtual void setMac(const std::string &value) = 0;

  std::shared_ptr<spdlog::logger> logger();
 protected:
  Router &parent_;
};
