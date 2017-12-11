
#ifndef PLATFORM_ARTY
#error "Version mismatch - PLATFORM_ARTY not defined!"
#endif
const char* board = "arty";

#ifndef TARGET_NET
#error "Version mismatch - TARGET_NET not defined!"
#endif
const char* target = "net";

const char* git_commit = "d78cc607a66330285ec9ba0f7ae8d4e01309e306";
const char* git_branch = "dependabot/submodules/third_party/litedram-a09b7a";
const char* git_describe = "v0.0.0-1886-gd78cc60-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

