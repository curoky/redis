load("@com_curoky_rules_pkg//bazel:copts.bzl", "DEFAULT_C_COPTS")

cc_library(
    name = "lua-extra",
    srcs = [
        "lua/src/fpconv.c",
        "lua/src/fpconv.h",
        "lua/src/lua_bit.c",
        "lua/src/lua_cjson.c",
        "lua/src/lua_cmsgpack.c",
        "lua/src/lua_struct.c",
        "lua/src/strbuf.c",
        "lua/src/strbuf.h",
    ],
    copts = DEFAULT_C_COPTS + [
        "-std=c11",
        "-I.",
        "-D_POSIX_C_SOURCE=199506L",
        "-D_XOPEN_SOURCE=700",
        "-D_DEFAULT_SOURCE",
        "-D_BSD_SOURCE",
        "-D_GNU_SOURCE",
        "-Wno-int-conversion",
        "-Wno-incompatible-pointer-types",
        "-Wno-implicit-function-declaration",
        "-Wno-int-to-pointer-cast",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_lua_lua//:lua",
    ],
)
