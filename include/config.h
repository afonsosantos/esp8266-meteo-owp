#include <Arduino.h>

#define WIFI_SSID "MEO-BA4073" // WiFi SSID (network name)
#define WIFI_PASS "4E31D86D1E" // WiFi Password

#define NTP_SERVER "0.pt.pool.ntp.org"

String OPEN_WEATHER_MAP_APP_ID = "29691ae819dcc5112f5e6e83174f9d12";
String OPEN_WEATHER_MAP_LOCATION_ID = "2263823";

#define TZ 0      // (utc+) TZ in hours
#define DST_MN 60 // use 60mn for summer time in some countries
const uint8_t MAX_FORECASTS = 4;
const boolean IS_METRIC = true;
const int UPDATE_INTERVAL_SECS = 10 * 60; // Update every 10 minutes

// Pick a language code from this list:
// Arabic - ar, Bulgarian - bg, Catalan - ca, Czech - cz, German - de, Greek - el,
// English - en, Persian (Farsi) - fa, Finnish - fi, French - fr, Galician - gl,
// Croatian - hr, Hungarian - hu, Italian - it, Japanese - ja, Korean - kr,
// Latvian - la, Lithuanian - lt, Macedonian - mk, Dutch - nl, Polish - pl,
// Portuguese - pt, Romanian - ro, Russian - ru, Swedish - se, Slovak - sk,
// Slovenian - sl, Spanish - es, Turkish - tr, Ukrainian - ua, Vietnamese - vi,
// Chinese Simplified - zh_cn, Chinese Traditional - zh_tw.
String OPEN_WEATHER_MAP_LANGUAGE = "pt";

// Adjust according to your language
const String WDAY_NAMES[] = {"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"};
const String MONTH_NAMES[] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};