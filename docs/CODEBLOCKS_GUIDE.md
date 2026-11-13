# Code::Blocks Guide: Create a C Console Application

## Creating a New Project

1. Open Code::Blocks.
2. Click **File > New > Project**.
3. Select **Console application** and click **Go**.
4. Choose **C** and click **Next**.
5. Enter a project title, for example `exercise01_hello_kioto`.
6. Choose a folder to save the project.
7. Select the **GNU GCC Compiler**.
8. Click **Finish**.

Code::Blocks creates a project with a `main.c` file.

## Writing Your Code

1. In the **Management** panel on the left, double-click `main.c`.
2. Replace the contents with your exercise code (copy from the starter file in `src/`).
3. Save with `Ctrl + S`.

## Compiling

- Press `Ctrl + F9` or click **Build > Build**.
- Check the **Build log** at the bottom. It should say `0 errors, 0 warnings`.

## Running

- Press `Ctrl + F10` or click **Build > Run**.
- A console window opens showing your program output.
- The window closes when the program finishes. Add `getchar();` before `return 0;` if you want it to stay open (optional).

## Common Problems

| Problem | Fix |
|---|---|
| `gcc is not recognized` | Add MinGW `bin` folder to PATH (see WINDOWS_SETUP.md). |
| `undefined reference to WinMain` | You created a GUI project. Recreate as Console application. |
| Console closes immediately | Run from Code::Blocks using Build > Run, not by double-clicking the `.exe`. |
| Warnings about unused variables | Use your variables or remove them. |

## Important

- Commit only your `.c` source files, never the `.exe` or project files.
- Test every program before committing.