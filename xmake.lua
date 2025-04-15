-- project setting
set_project("pika_python_startup")
set_xmakever("2.9.1")

set_version("0.1.0", {build = "%Y%m%d%H%M"})
set_description("PikaPython startup code for PikaScript")
set_license("MIT")

--set_warnings("all","error")
set_languages("c99")

-- 针对MinGW 添加特定选项
if is_host("windows") then
    add_cxflags("-Wno-unknown-pragmas","-Wno-error=attributes","-Wattributes","-Wno-error=unused-variable","-Wno-maybe-uninitialized")
end

option("pika_startup_type")
    set_default("START_FROM_FIRMWARE") -- 默认值 ,作为宏，需要大写
    set_showmenu(true)
    set_description("Set the startup type",
                "   - start_from_firmware",
                "   - run_single_file",
                "   - run_multi_files",
                "   - start_from_lib")
option_end()

add_plugindirs("plugins")

add_requires("libsdl2", {system = false})
add_repositories("my-repo repo")

--add_requires("lvgl v8.3.1", {configs = {color_depth = "32", use_log = true, lv_tick_custom = true, lv_use_fs_stdio = true}})

add_requires("lvgl")




add_rules("mode.debug", "mode.release")



target("pikapython")
    set_kind("binary")
    add_includedirs("pikapython/pikascript-api","pikapython/pikascript-core","pikapython/pikascript-lib/PikaStdLib")


    add_includedirs("src/lvgl","src/lvgl/lv_drivers-8.3.0","src/lvgl/lv_drivers-8.3.0/sdl","src/lvgl/demo/widgets")
    add_includedirs("$(buildir)/$(plat)/$(arch)/$(mode)", {public = true})
    
    
    add_files("src/**.c|sdl_demo.c|simulator.c") -- 这里禁用sdl_demo.c和simulator.c文件参与编译
   -- add_defines("DEBUG")
    add_files("pikapython/**.c")
    add_packages("lvgl","libsdl2")
   
    
    add_defines("$(pika_startup_type)") --自定义条件编译

    set_configdir("$(buildir)/$(plat)/$(arch)/$(mode)")
    add_configfiles("pika.config.h.in")

    add_headerfiles("$(buildir)/$(plat)/$(arch)/$(mode)/pika.config.h", {prefixdir = "pika"})

    after_build(function (target)
        -- 获取当前构建的文件路径
        local src_file = target:targetfile()
        -- 指定目标目录
        local dest_dir = "pikapython"
        -- 确保目标目录存在
        os.mkdir(dest_dir)
        -- 移动文件
        os.cp(src_file, path.join(dest_dir, path.filename(src_file)))
        print("Moved " .. src_file .. " to " .. dest_dir)

        --import("core.project.task")
        --task.run("pika_compile")
    end)
--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro defination
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--

