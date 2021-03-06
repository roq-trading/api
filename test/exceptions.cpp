/* Copyright (c) 2017-2021, Hans Erik Thrane */

#include <gtest/gtest.h>

#include "roq/exceptions.h"

using namespace roq;
using namespace roq::literals;

TEST(exceptions, simple_1) {
  auto ok = false;
  try {
    throw NotReadyException("something's not right"_sv);
  } catch (std::exception &) {
    ok = true;
  }
  EXPECT_TRUE(ok);
}

TEST(exceptions, simple_2) {
  auto ok = false;
  try {
    throw NotReadyException("something's not right"_sv);
  } catch (Exception &) {
    ok = true;
  }
  EXPECT_TRUE(ok);
}

TEST(exceptions, simple_3) {
  auto ok = false;
  try {
    throw NotReadyException("something's not right"_sv);
  } catch (RuntimeError &) {
    ok = true;
  }
  EXPECT_TRUE(ok);
}

TEST(exceptions, simple_4) {
  auto ok = false;
  try {
    throw NotReadyException("something's not right"_sv);
  } catch (NotReady &) {
    ok = true;
  }
  EXPECT_TRUE(ok);
}
