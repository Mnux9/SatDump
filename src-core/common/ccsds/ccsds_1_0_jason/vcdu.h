#pragma once

#include <cstdint>
#include <vector>

namespace ccsds
{
    namespace ccsds_1_0_jason
    {
        // Struct representing a VCDU
        struct VCDU
        {
            uint8_t version;
            uint8_t spacecraft_id;
            uint8_t vcid;
            uint32_t vcdu_counter;
            bool replay_flag;
        };

        // Parse VCDU from CADU
        VCDU parseVCDU(uint8_t *cadu);

    } // namespace libccsds
} // namespace proba