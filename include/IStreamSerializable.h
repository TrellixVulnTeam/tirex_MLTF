// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2022 Tirex & Tirex Devs
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <sstream>

namespace cn {

class IStreamSerializable {
public:
  virtual void save(std::ostream& os) = 0;
  virtual void load(std::istream& in) = 0;
};

}
