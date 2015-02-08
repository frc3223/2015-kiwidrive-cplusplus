#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include <Commands/Command.h>
#include "OI.hpp"
#include "Subsystems/drive.hpp"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase : public Command {
 public:
  CommandBase(std::string name);
  CommandBase();
  static void init();
  // Create a single static instance of all of your subsystems
  static OI *oi_;
  static Drive *drive_;
};

#endif
