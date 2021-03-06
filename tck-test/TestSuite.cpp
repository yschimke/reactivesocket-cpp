// Copyright 2004-present Facebook. All Rights Reserved.

#include "TestSuite.h"
#include <glog/logging.h>

namespace reactivesocket {
namespace tck {

bool TestCommand::valid() const {
  // there has to be a name to the test and at least 1 param
  return params_.size() >= 2;
}

void Test::addCommand(TestCommand command) {
  CHECK(command.valid());
  commands_.push_back(std::move(command));
}

} // tck
} // reactive socket
