<div align="center">

<img src="./MacNewFile/Assets.xcassets/AppIcon.appiconset/add (1) (1)-modified.png" width="100" height="100">

# MacNewFile
[![License](https://img.shields.io/github/license/GarfieldFluffJr/MacNewFile?color=007ec6)](https://github.com/GarfieldFluffJr/MacNewFile/blob/main/LICENSE)
![macOS](https://img.shields.io/badge/macOS-13.0+-A2AAAD)
[![Homebrew](https://img.shields.io/badge/Homebrew-supported-F97316)](https://brew.sh/)
[![Release](https://img.shields.io/github/v/release/GarfieldFluffJr/MacNewFile?color=2ea44f)](https://github.com/GarfieldFluffJr/MacNewFile/releases)

![Project Views](https://hits.sh/github.com/GarfieldFluffJr/MacNewFile.svg?label=Project%20Views&color=007ec6)
[![Stars](https://img.shields.io/github/stars/GarfieldFluffJr/MacNewFile?style=flat&color=FFD700)](https://github.com/GarfieldFluffJr/MacNewFile/stargazers)

</div>

One of the many things that pissed me off after switching from Windows to Mac was that I couldn't create a new text file or word document off of a right click in Finder (file explorer).

So I made **MacNewFile**!!

MacNewFile is lightweight and simple. You right click anywhere in Finder (or on your desktop) and you get a menu to create new files!

<div align="center">
<img src="./assets/MacNewFile Demo sped up.gif" width="600" alt="MacNewFile Demo">
</div>

**Please note:** This only doesn't work on directories inside of your iCloud, since Apple fully removed support for FinderSync in 2019.

## Features
- Create files from Finder right-click menu:
    - Text
    - Markdown
    - Word
    - Excel
    - PPT

- **Copy path** - right-click on file to copy its full path, on folder to copy folder path

- **Open terminal** - opens Ghostty first, falls back to Terminal if not installed

- Light/dark mode compatible

- To disable the app, click the MacNewFile icon in the menu bar and click "Quit"
    - Or go to `System Settings -> General -> Login & Extensions -> File Providers / File System Extensions` and turn it off

# Installation

- **[Manual Build [v3.2.0]](#manual-download)**

v3.2.0 includes all core functionality. Note that this fork removes some features from the original:
- Removed Apple Pages, Numbers, and Keynote support
- Removed Finder toolbar button
- Removed Italian localization
- Simplified menu item names

New features in v3.2.0:
- **Smart copy path**: Copy file path when right-clicking on a file, directory path when on a folder
- **Ghostty support**: Opens Ghostty terminal first, falls back to Terminal if not installed
- **Template-based Office files**: Word, Excel, PPT files are created from templates for better compatibility with WPS

## Manual Build

### Install

1. Clone this repository

2. Open `MacNewFile.xcodeproj` in Xcode

3. In Xcode, go to `Signing & Capabilities` for both targets:
   - Select `MacNewFile` target
   - Change `Team` to your Apple ID
   - Select `MacNewFileFinderExtension` target
   - Change `Team` to your Apple ID

4. Build the project: `Product -> Build` (Cmd+B)

5. Find the built app in `Products/MacNewFile.app`, move to `/Applications`

6. Run: 
   ```bash
   xattr -cr /Applications/MacNewFile.app
   killall Finder
   open /Applications/MacNewFile.app
   ```

### Uninstall

Delete `/Applications/MacNewFile.app`. Use `AppCleaner` to remove extension bundles.

- **[Jump to Debugging](#debugging)**
- **[Jump to Contributions and Issues](#contributions-and-issues)**

## Debugging
- Move app out of quarantine: `xattr -dr com.apple.quarantine /Applications/MacNewFile.app`

- Restart Finder: `killall Finder`

- Go through Settings Privacy and Security

## Contributions and Issues

Do you have a new idea you want to implement? Feel free to contribute! 

Fork the repository and make the project your own. Or, if you'd like to contribute to this project, submit a pull request when you're done. See **[CONTRIBUTING.md](./CONTRIBUTING.md)** for more details.

Or if you'd like to **suggest changes**, **[submit a github issue](https://github.com/GarfieldFluffJr/MacNewFile/issues)**.

You can also reach me by email if you have any questions: **louieyin6@gmail.com**

## My Promise as a Developer

- **I don't vibe-code my projects**

- This is not malware, everything is pushed to this repo which you can review

- It is **very easy to install and delete**, I steal no data, or hide anything on your device

- This app does not hide in the background, I tested this with my own MacBook, Activity Monitor shows no activity once the application is quit

    - You can view if it is running in `System Settings -> General -> Login Items & Extensions -> File Providers / File System Extensions`

- I try to be as transparent as possible, and explain why certain security bypasses or unorthodox installation methods are necessary.

- **My projects are fully Open Source**. I don't make my projects cost any money to my users. MacOS and Apple in general lacks an open source community and I hope to make it better. Despite Apple requiring almost every developer to pay $100 USD per year just to develop (which is outrageous), I will do whatever I can to keep developing and distributing for free and bypass these ridiculous Apple security requirements.

## Support

Thanks for making it this far in the readme. If you found this tool particularly useful for you, please consider giving me a star on github, it's free and means a lot to me.

You can also choose to [Buy me a Coffee](https://buymeacoffee.com/garfieldfluffjr) if you really think I made a positive impact on you.

## License

GNU GPL v3 License - see [LICENSE](./LICENSE) for details.
