
#ifndef PLATFORM_PIPISTRELLO
#error "Version mismatch - PLATFORM_PIPISTRELLO not defined!"
#endif
const char* board = "pipistrello";

#ifndef TARGET_BASE
#error "Version mismatch - TARGET_BASE not defined!"
#endif
const char* target = "base";

const char* git_commit = "8037a62c595c6ccdd774e6cf12a294ad06cee410";
const char* git_branch = "dependabot/submodules/third_party/litex-27d37f";
const char* git_describe = "v0.0.0-1886-g8037a62-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

