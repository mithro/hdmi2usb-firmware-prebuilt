
#ifndef PLATFORM_ATLYS
#error "Version mismatch - PLATFORM_ATLYS not defined!"
#endif
const char* board = "atlys";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "df01395510a40cb00c89bcb2b57cc60e2076506e";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1881-gdf01395-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

