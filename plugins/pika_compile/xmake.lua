task("pikaCompile")
    set_category("plugin")

    -- 设置插件的命令行选项
    set_menu {
        usage = "xmake pikaCompile [options]",
        description = "PikaScript Compile",
        options = {
            {'H', "show-help", "k", nil, "Display help information for the PikaScript."},
            {'f', "file", "kv", nil, "Specify the input file to compile."},
            {'o', "output", "kv", nil, "Specify the output file."},
            {'c', "compile-file", "kv", nil, "Compile only."},
            {},
            {nil, "contents", "vs", nil, "The options for the compile command."}
        }
    }

    -- 设置运行脚本
    on_run(function ()
        import("core.base.option")

        local pika_path = "./pikapython"
        local compile_exe = "rust-msc-latest-win10.exe"
        local args = {}

        -- 检查是否请求帮助信息
        if option.get("show-help") then
            print("Usage: xmake pika_compile [options]")
            print("PikaScript Compile")
            print("Options:")
            print("  -H, --show-help        Display help information.")
            print("  -f FILE, --file=FILE   Specify the input file to compile.")
            print("  -o OUTPUT, --output=OUTPUT Specify the output file.")
            print("  -c COMPILE-FILE, --compile-file=COMPILE-FILE Compile only.")
            print("      contents ...       The options for the compile command.")
            return
        end

        -- 获取输入文件参数
        local input_file = option.get("compile-file")
        if input_file then
            table.insert(args, "-c")
            table.insert(args, input_file)
        end

        -- 获取输出参数
        local output = option.get("output")
        if output then
            table.insert(args, "-o")
            table.insert(args, output)
        end

        -- 获取文件参数
        local file = option.get("file")
        if file then
            table.insert(args, file)
        end

        -- 获取其他内容参数
        local contents = option.get("contents")
        if contents then
            for _, content in ipairs(contents) do
                table.insert(args, content)
            end
        end

        -- 打印最终的 args 列表
        print("PikaScript Compile with arguments:", table.concat(args, " "))
        os.cd(pika_path)

        -- 执行程序
        os.execv(compile_exe, args)
    end)




task("pikaPackage")
    set_category("plugin")

    -- 设置插件的命令行选项
    set_menu {
        usage = "xmake pikaPackage [options]",
        description = "PikaPackage management",
        options = {
            {'P', "push-changes", "k", nil, "Push package changes to upstream."},
            {'H', "show-help", "k", nil, "Display help information."},
            {}
        }
    }

    -- 设置运行脚本
    on_run(function ()
        import("core.base.option")
        local pika_path = "./pikapython"
        local package_exe = "pikaPackage.exe"
        local args = {}

        -- 检查是否请求帮助信息
        if option.get("show-help") then
            print("Usage: " .. package_exe .. " [OPTION]...")
            print("  (No arguments): run install function")
            print("  -P, --push-changes: push package changes to upstream")
            print("  -H, --show-help: display help")
            return
        end

        -- 检查是否需要推送更改
        if option.get("push-changes") then
            table.insert(args, "--push-changes")
        end

        -- 执行程序
        print("Executing: " .. package_exe .. " " .. table.concat(args, " "))
        os.cd(pika_path)
        os.execv(package_exe, args)
    end)

