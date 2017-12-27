
#ifndef PLATFORM_OPSIS
#error "Version mismatch - PLATFORM_OPSIS not defined!"
#endif
const char* board = "opsis";

#ifndef TARGET_NET
#error "Version mismatch - TARGET_NET not defined!"
#endif
const char* target = "net";

const char* git_commit = "ad21565544aee91f80d7619a7f9af55da2af1fbd";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1886-gad21565-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

