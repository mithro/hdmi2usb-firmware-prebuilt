
#ifndef PLATFORM_ATLYS
#error "Version mismatch - PLATFORM_ATLYS not defined!"
#endif
const char* board = "atlys";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "ad21565544aee91f80d7619a7f9af55da2af1fbd";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1886-gad21565-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

