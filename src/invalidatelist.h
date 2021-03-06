// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2019 Altebet.io / CCBC Team
// Developed by TFinch / Aviator
//
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_INVALIDATELIST_H
#define BITCOIN_INVALIDATELIST_H


#include "amount.h"
#include "chain.h"
#include "chainparams.h"
#include "coins.h"
#include "net.h"
#include "pow.h"
#include "primitives/block.h"
#include "primitives/transaction.h"
#include "script/script.h"
#include "script/sigcache.h"
#include "script/standard.h"
#include "sync.h"
#include "tinyformat.h"
#include "txmempool.h"
#include "uint256.h"
#include "undo.h"
#include "main.h"
#include <vector>
#include <algorithm>

#include <algorithm>
#include <exception>
#include <map>
#include <set>
#include <stdint.h>
#include <string>
#include <utility>
#include <vector>

#include <boost/unordered_map.hpp>

/** Run through the list of bad address generated by exploiter */
bool BadActor(const CTransaction& tx, CValidationState& state);
bool QuestionedActors(const CTransaction& tx, CValidationState& state);


#endif // BITCOIN_INVALIDATELIST_H