#ifndef __hda_report_H__
#define __hda_report_H__

#include <app.h>
#include <Elementary.h>
#include <system_settings.h>
#include <efl_extension.h>
#include <dlog.h>

#include <sensor.h>
#include <bluetooth.h>
#include <time.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "hda_report"

#define SQLITE3_LOG_TAG "SQLITE3_EVENT"

#if !defined(PACKAGE)
#define PACKAGE "org.example.hda_report"
#endif

#endif /* __hda_report_H__ */
