/*
 * options_tab.hpp
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

#ifndef __OPTIONS_TAB_HPP__
#define __OPTIONS_TAB_HPP__

#include <borealis.hpp>

#include "root_view.hpp"
#include "eta_progress_display.hpp"

namespace nxdt::views
{
    /* Update file dialog. */
    class OptionsTabUpdateFileDialog: public brls::Dialog
    {
        private:
            nxdt::tasks::DownloadFileTask download_task;
            std::string success_str;

        public:
            OptionsTabUpdateFileDialog(std::string path, std::string url, bool force_https, std::string success_str);
    };

    /* Update application frame. */
    class OptionsTabUpdateApplicationFrame: public brls::StagedAppletFrame
    {
        private:
            nxdt::tasks::DownloadDataTask json_task;
            char *json_buf = NULL;
            size_t json_buf_size = 0;
            UtilsGitHubReleaseJsonData json_data = {0};

            brls::Label *wait_lbl = nullptr;                /// First stage.
            brls::List *changelog_list = nullptr;           /// Second stage.
            EtaProgressDisplay *update_progress = nullptr;  /// Third stage.

            nxdt::tasks::DownloadFileTask nro_task;

            void DisplayChangelog(void);
            void DisplayUpdateProgress(void);

        protected:
            void layout(NVGcontext* vg, brls::Style* style, brls::FontStash* stash) override;
            bool onCancel(void) override;

        public:
            OptionsTabUpdateApplicationFrame(void);
            ~OptionsTabUpdateApplicationFrame(void);
    };

    class OptionsTab: public brls::List
    {
        private:
            RootView *root_view = nullptr;

            bool display_notification = true;
            brls::menu_timer_t notification_timer = 0.0f;
            brls::menu_timer_ctx_entry_t notification_timer_ctx = {0};

            void DisplayNotification(std::string str);
        public:
            OptionsTab(RootView *root_view);
            ~OptionsTab(void);
    };
}

#endif  /* __OPTIONS_TAB_HPP__ */
