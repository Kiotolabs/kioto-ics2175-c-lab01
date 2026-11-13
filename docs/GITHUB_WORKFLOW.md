# GitHub Workflow: Fork, Branch, Commit and Pull Request

## Concepts (read once)

- **Fork:** your own server-side copy of the lecturer's repository under your GitHub account.
- **Branch:** a parallel line of work inside a repository (e.g. `student/REGNO/lab01`).
- **Commit:** a saved snapshot of your changes with a message.
- **Pull Request (PR):** a request to merge your branch into the lecturer's `main` branch.

This is the mandatory submission workflow for ICS 2175 Laboratory 01. No command-line Git is
required; use **GitHub Desktop**.

## Step 1: Fork

1. Open the official repository in your browser.
2. Click **Fork** (top right).
3. Create the fork under your own GitHub account.

## Step 2: Clone

1. Open **GitHub Desktop**.
2. Click **File > Clone repository**.
3. Select your fork and choose a local folder.
4. Click **Clone**.

## Step 3: Create a Branch

1. In GitHub Desktop, click **Current Branch > New Branch**.
2. Name it using this format:

   ```
   student/REGISTRATION_NUMBER/lab01
   ```

   Example: `student/ENE-01-1234-26/lab01`
3. Click **Create Branch**.

## Step 4: Complete the Exercises

Edit the starter files in `src/`, add your personalised calculation and update your report.

## Step 5: Commit (at least three meaningful commits)

Make at least three commits, for example:

1. `Complete Hello Kioto exercise`
2. `Implement variables and data types`
3. `Complete personalised calculation and report`

In GitHub Desktop: write a summary, then click **Commit to student/.../lab01**.

## Step 6: Push

Click **Push origin** to push your feature branch to your fork.

## Step 7: Pull Request

1. Open your fork on GitHub in the browser.
2. Click **Compare & pull request**.
3. Set the base repository to the lecturer's original repository and base branch to `main`.
4. Set the head repository to your fork and branch to `student/REGISTRATION_NUMBER/lab01`.
5. Use this PR title format:

   ```
   ICS2175 LAB01 - REGISTRATION_NUMBER - FULL_NAME
   ```

   Example: `ICS2175 LAB01 - ENE-01-1234-26 - Jane Doe`
6. Fill in the pull request template.
7. Click **Create pull request**.

## Step 8: Lecturer Review

Your lecturer reviews your code, tests, report and evidence. They may request changes.
Update your branch and push again; the pull request updates automatically.

## Student Onboarding Procedure

1. Create a free GitHub account (if you do not have one).
2. Open https://github.com/Kiotolabs/kioto-ics2175-c-lab01.
3. Click **Fork** and create the fork under your own account. No invitation or write access is needed.
4. Continue with the steps above (clone, branch, commit, push, pull request).

## Lecturer Review and Grading

1. Open the pull request and check the GitHub Actions validation summary.
2. Review code, report and evidence in the PR.
3. Use **Request changes** to ask for fixes; students push to the same branch and the PR updates.
4. Approve and merge only after all issues are resolved.
5. Apply the rubric from the instructor repository.
6. Final grading (including personalised expected values) uses the trusted Kioto grading engine.

## Important Rules

- Target branch must be `main`.
- Do **not** merge your own pull request.
- Do **not** commit executable files.
- Keep all work on your feature branch, not on `main`.