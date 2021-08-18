load("@com_curoky_rules_pkg//bazel:copts.bzl", "DEFAULT_C_COPTS", "DEFAULT_LINKOPTS")

cc_library(
    name = "ae",
    hdrs = ["ae_epoll.c"],
)

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
]

cc_library(
    name = "redis-core",
    srcs = glob(
        [
            "*.c",
            "*.h",
        ],
        exclude = [
            "ae_evport.c",
            "ae_kqueue.c",
            "ae_select.c",
            "ae_epoll.c",
            "cli_common.c",
            "redis-benchmark.c",
            "redis-cli.c",
            "server.c",
            "scripting.c",
        ],
    ),
    copts = copts,
    visibility = ["//visibility:public"],
    deps = [
        ":ae",
        "@com_github_lua_lua//:lua",
        "@com_github_redis_hiredis//:hiredis",
    ],
)

cc_binary(
    name = "redis-server",
    srcs = [
        "scripting.c",
        "server.c",
        "server.h",
    ],
    copts = copts,
    linkopts = DEFAULT_LINKOPTS,
    visibility = ["//visibility:public"],
    deps = [
        ":redis-core",
        "//deps:lua-extra",
        "@com_github_lua_lua//:lua",
    ],
)
