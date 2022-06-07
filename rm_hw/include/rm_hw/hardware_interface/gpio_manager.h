//
// Created by yezi on 2021/9/9.
//

#pragma once

#include <XmlRpcValue.h>
#include <fcntl.h>
#include <map>
#include <poll.h>
#include <ros/ros.h>
#include <string>
#include <rm_common/hardware_interface/gpio_interface.h>

class GpioMangager
{
public:
  explicit GpioMangager();
  ~GpioMangager();

  void setGpioDirection(rm_control::GpioData gpioData);
  void readGpio();
  void writeGpio();

  std::vector<rm_control::GpioData> gpio_state_values;
  std::vector<rm_control::GpioData> gpio_command_values;
};
