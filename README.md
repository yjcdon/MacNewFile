<div align="center">

<img src="./MacNewFile/Assets.xcassets/AppIcon.appiconset/add (1) (1)-modified.png" width="100" height="100">

# MacNewFile
[![License](https://img.shields.io/github/license/yjcdon/MacNewFile?color=007ec6)](https://github.com/yjcdon/MacNewFile/blob/main/LICENSE)
![macOS](https://img.shields.io/badge/macOS-13.0+-A2AAAD)

</div>

从 Windows 切换到 Mac 后，最让人不爽的是无法在 Finder（文件管理器）右键创建新文件。

所以做了 **MacNewFile**！

轻量简洁，在 Finder 任意位置右键就能创建新文件。

**注意**：不支持 iCloud 目录，因为 macOS Sonoma+ 移除了 FinderSync 对 iCloud 的支持。

## 功能

右键菜单创建文件：
- Text（文本）
- Markdown
- Word
- Excel
- PPT

其他功能：
- **复制路径** - 右键文件复制完整路径，右键文件夹复制目录路径
- **打开终端** - 优先打开 Ghostty，未安装则打开 Terminal

适配深色/浅色模式。

禁用应用：点击菜单栏的 MacNewFile 图标，选择"Quit"；或在 `系统设置 -> 通用 -> 登录项与扩展` 关闭。

---

# 安装（v3.2.0）

本版本改动：
- 移除 Pages、Numbers、Keynote 支持
- 移除 Finder 工具栏按钮
- 移除意大利语本地化
- 简化菜单名称

新增功能：
- **智能复制路径**：右键文件复制完整路径，右键文件夹复制目录路径
- **Ghostty 支持**：优先打开 Ghostty，未安装回退到 Terminal
- **模板方式创建**：Word/Excel/PPT 使用模板，兼容 WPS

## 手动构建

1. 克隆本仓库

2. 用 Xcode 打开 `MacNewFile.xcodeproj`

3. 在 Xcode 中配置签名：
   - 选择 `MacNewFile` target，修改 `Team` 为你的 Apple ID
   - 选择 `MacNewFileFinderExtension` target，修改 `Team` 为你的 Apple ID

4. 构建项目：`Product -> Build` (Cmd+B)

5. 将 `Products/MacNewFile.app` 移到 `/Applications`

6. 运行：
   ```bash
   xattr -cr /Applications/MacNewFile.app
   killall Finder
   open /Applications/MacNewFile.app
   ```

## 卸载

删除 `/Applications/MacNewFile.app`，可用 AppCleaner 清理扩展残留。

---

## 调试

- 移除隔离属性：`xattr -cr /Applications/MacNewFile.app`
- 重启 Finder：`killall Finder`
- 检查系统设置的隐私与安全性

---

## License

GNU GPL v3 License

[English README](./README_EN.md)