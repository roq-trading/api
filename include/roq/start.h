/* Copyright (c) 2017-2021, Hans Erik Thrane */

/* !!! THIS FILE HAS BEEN AUTO-GENERATED !!! */

#pragma once

#include <fmt/chrono.h>

#include <chrono>
#include <string_view>

#include "roq/chrono.h"
#include "roq/compat.h"
#include "roq/event.h"
#include "roq/format.h"
#include "roq/literals.h"
#include "roq/message_info.h"
#include "roq/numbers.h"
#include "roq/span.h"
#include "roq/string_buffer.h"

namespace roq {

//! Signals a start event
struct ROQ_PUBLIC Start final {};

}  // namespace roq

template <>
struct fmt::formatter<roq::Start> : public roq::formatter {
  template <typename Context>
  auto format(const roq::Start &value, Context &context) {
    using namespace roq::literals;
    return roq::format_to(context.out(), R"({{}})"_sv);
  }
};
template <>
struct fmt::formatter<roq::Event<roq::Start> > : public roq::formatter {
  template <typename Context>
  auto format(const roq::Event<roq::Start> &event, Context &context) {
    using namespace roq::literals;
    return roq::format_to(
        context.out(),
        R"({{)"
        R"(message_info={}, )"
        R"(start={})"
        R"(}})"_sv,
        event.message_info,
        event.value);
  }
};
