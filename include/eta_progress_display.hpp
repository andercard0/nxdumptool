/*
 * eta_progress_display.hpp
 *
 * Copyright (c) 2020-2024, DarkMatterCore <pabloacurielz@gmail.com>.
 *
 * This file is part of nxdumptool (https://github.com/DarkMatterCore/nxdumptool).
 *
 * nxdumptool is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * nxdumptool is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef __ETA_PROGRESS_DISPLAY_HPP__
#define __ETA_PROGRESS_DISPLAY_HPP__

#include <borealis.hpp>

namespace nxdt::views
{
    /* Used to hold progress info. */
    typedef struct {
        size_t size;        ///< Total process size.
        size_t current;     ///< Number of bytes processed thus far.
        int percentage;     ///< Progress percentage.
        double speed;       ///< Current speed expressed in bytes per second.
        std::string eta;    ///< Formatted ETA string.
    } EtaProgressInfo;

    /* Used to display the progress of a running task. Shows a progress bar, a spinner, a percentage value, the process speed and an ETA value. */
    class EtaProgressDisplay: public brls::View
    {
        private:
            brls::ProgressDisplay *progress_display = nullptr;
            brls::Label *size_lbl = nullptr, *speed_eta_lbl = nullptr;

            std::string GetFormattedSizeString(double size);

        protected:
            /* Set class as non-copyable and non-moveable. */
            NON_COPYABLE(EtaProgressDisplay);
            NON_MOVEABLE(EtaProgressDisplay);

            void draw(NVGcontext* vg, int x, int y, unsigned width, unsigned height, brls::Style* style, brls::FrameContext* ctx) override;
            void layout(NVGcontext* vg, brls::Style* style, brls::FontStash* stash) override;

        public:
            EtaProgressDisplay(void);
            ~EtaProgressDisplay(void);

            void setProgress(const EtaProgressInfo& progress);

            void willAppear(bool resetState = false) override;
            void willDisappear(bool resetState = false) override;
    };
}

#endif  /* __ETA_PROGRESS_DISPLAY_HPP__ */
