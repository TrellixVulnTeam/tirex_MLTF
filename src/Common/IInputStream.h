// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2022 Tirex & Tirex Devs
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstddef>

namespace common {

class IInputStream {
public:
  virtual ~IInputStream() { }
  virtual size_t readSome(void* data, size_t size) = 0;
};

}
