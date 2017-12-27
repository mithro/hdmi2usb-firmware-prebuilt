
#ifndef PLATFORM_MINISPARTAN6
#error "Version mismatch - PLATFORM_MINISPARTAN6 not defined!"
#endif
const char* board = "minispartan6";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "e19fb1fc07d499b25c3945ca5bf39582a469f389";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1888-ge19fb1f-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

