# Windows Setup: Code::Blocks and GCC

This guide installs the tools you need for ICS 2175 Laboratory 01 on Windows 10/11.

## What You Will Install

- **Code::Blocks** – a beginner-friendly C IDE.
- **GCC** – the C compiler (bundled with Code::Blocks as MinGW).

## Step 1: Download Code::Blocks

1. Open your browser and go to the official Code::Blocks download page.
2. Download the installer that **includes MinGW** (file name contains `mingw`).  
   Example: `codeblocks-20.03mingw-setup.exe`.
3. Save the file to your `Downloads` folder.

## Step 2: Install Code::Blocks

1. Double-click the installer.
2. Click **Next** on the welcome screen.
3. Accept the licence agreement.
4. Keep the default installation folder: `C:\Program Files\CodeBlocks`.
5. Make sure **MinGW** / **GCC** is selected in the components list.
6. Click **Install** and wait for completion.
7. Click **Finish**.

## Step 3: Verify GCC

1. Press `Win + R`, type `cmd` and press Enter.
2. Type:

   ```
   gcc --version
   ```

3. If you see a version number, GCC is working.  
   If you see "not recognized", add `C:\Program Files\CodeBlocks\MinGW\bin` to your system `PATH`:
   - Search Windows for **Environment Variables**.
   - Edit **Path** under System variables.
   - Add `C:\Program Files\CodeBlocks\MinGW\bin`.
   - Restart the command prompt and try again.

## Step 4: First Launch

1. Open **Code::Blocks** from the Start menu.
2. If asked to choose a default compiler, select **GNU GCC Compiler**.
3. Click **OK**.

You are now ready. Continue to `CODEBLOCKS_GUIDE.md`.