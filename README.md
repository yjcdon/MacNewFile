# MacNewFile

[English](./README_EN.md) | 中文

从 Windows 切换到 Mac 后，最让人不爽的是无法在 Finder（文件管理器）右键创建新文件。

所以做了 **MacNewFile**！

## 功能

- 📝 快速创建新文件：Text、Markdown、Word、Excel、PPT
- 📍 智能复制路径：右键文件复制完整路径，右键文件夹复制目录路径
- 💻 打开终端：优先 Ghostty，未安装则打开 Terminal
- 🌙 适配深色/浅色模式

> ⚠️ 不支持 iCloud 目录（macOS Sonoma+ 移除了 FinderSync 对 iCloud 的支持）

## 安装

### 从 Release 下载（推荐）

1. 前往 [Releases](https://github.com/yjcdon/MacNewFile/releases) 页面
2. 下载最新版本的 `MacNewFile-vX.X.X.zip`
3. 解压后将 `MacNewFile.app` 移到 `/Applications`
4. 运行以下命令：
   ```bash
   xattr -cr /Applications/MacNewFile.app
   killall Finder
   open /Applications/MacNewFile.app
   ```

### 从源码构建

1. 克隆本仓库：
   ```bash
   git clone https://github.com/yjcdon/MacNewFile.git
   cd MacNewFile
   ```

2. 用 Xcode 打开 `MacNewFile.xcodeproj`

3. 配置签名（两个 target 都要改）：
   - `MacNewFile` → Signing & Capabilities → Team → 你的 Apple ID
   - `MacNewFileFinderExtension` → Signing & Capabilities → Team → 你的 Apple ID

4. 构建：`Product → Build` (⌘B)

5. 安装：
   ```bash
   # 将产物移到 Applications
   cp -r ~/Library/Developer/Xcode/DerivedData/MacNewFile-*/Build/Products/Release/MacNewFile.app /Applications/
   
   # 移除隔离属性并运行
   xattr -cr /Applications/MacNewFile.app
   killall Finder
   open /Applications/MacNewFile.app
   ```

## 禁用应用

- 点击菜单栏的 MacNewFile 图标，选择"Quit"
- 或在 `系统设置 → 通用 → 登录项与扩展` 关闭

## 卸载

删除 `/Applications/MacNewFile.app`，可用 [AppCleaner](https://freemacsoft.net/appcleaner/) 清理扩展残留。

## 调试

如果遇到问题：

- 移除隔离属性：`xattr -cr /Applications/MacNewFile.app`
- 重启 Finder：`killall Finder`
- 检查 `系统设置 → 隐私与安全性` 是否有提示

## License

[GNU GPL v3](./LICENSE)