
#ifndef PLATFORM_ARTY
#error "Version mismatch - PLATFORM_ARTY not defined!"
#endif
const char* board = "arty";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "3c81b58f70bb39180e13c05633b2d1f1d476bdcd";
const char* git_branch = "dependabot/submodules/third_party/litex-4c82eb";
const char* git_describe = "v0.0.0-1886-g3c81b58-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

