// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include <cstdint>

namespace glz
{
   // format
   static constexpr uint32_t binary = 0;
   static constexpr uint32_t json = 10;
   static constexpr uint32_t ndjson = 100; // new line delimited JSON
   static constexpr uint32_t json_schema = 1000;
   static constexpr uint32_t csv = 10000;

   // layout
   static constexpr uint32_t rowwise = 0;
   static constexpr uint32_t colwise = 1;
}
