#pragma once

#include "module.h"

namespace noaa
{
    namespace amsu
    {
        class NOAAAMSUDecoderModule : public ProcessingModule
        {
        protected:
            std::atomic<size_t> filesize;
            std::atomic<size_t> progress;

        public:
            NOAAAMSUDecoderModule(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
            void process();
            void drawUI(bool window);

        public:
            static std::string getID();
            static std::vector<std::string> getParameters();
            static std::shared_ptr<ProcessingModule> getInstance(std::string input_file, std::string output_file_hint, std::map<std::string, std::string> parameters);
        };
    } // namespace AMSU
} // namespace noaa