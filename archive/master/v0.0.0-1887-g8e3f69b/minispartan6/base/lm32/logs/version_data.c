
#ifndef PLATFORM_MINISPARTAN6
#error "Version mismatch - PLATFORM_MINISPARTAN6 not defined!"
#endif
const char* board = "minispartan6";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "8e3f69b2caa7b75f6bce76be4cbbf55769f866b1";
const char* git_branch = "master";
const char* git_describe = "v0.0.0-1887-g8e3f69b-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

