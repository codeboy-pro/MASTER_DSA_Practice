# 🚀 Quick Git Setup Guide

This guide will help you initialize and push this repository to GitHub.

## Prerequisites

✅ Git installed on your system  
✅ GitHub account created  
✅ Repository created on GitHub (if not already done)

## Steps to Upload to GitHub

### 1. Initialize Git Repository

```bash
# Navigate to your project directory
cd "c:\Users\PRADIP MAITY\OneDrive\Desktop\150 DAY DSA\Code part"

# Initialize git (if not already initialized)
git init
```

### 2. Configure Git (First Time Only)

```bash
# Set your username
git config --global user.name "Your Name"

# Set your email
git config --global user.email "your.email@example.com"
```

### 3. Add All Files to Git

```bash
# Add all files to staging area
git add .

# Check status
git status
```

### 4. Create Initial Commit

```bash
# Commit with a message
git commit -m "Initial commit: Organized DSA practice code with 150+ programs"
```

### 5. Connect to GitHub Repository

```bash
# Add remote repository (replace with your GitHub repo URL)
git remote add origin https://github.com/codeboy-pro/DSA.git

# Verify remote
git remote -v
```

### 6. Push to GitHub

```bash
# Push to main branch
git branch -M main
git push -u origin main
```

## 📝 Common Git Commands

### After Making Changes

```bash
# Check what files changed
git status

# Add specific file
git add filename.cpp

# Add all changed files
git add .

# Commit changes
git commit -m "Description of changes"

# Push to GitHub
git push
```

### Creating a New Branch

```bash
# Create and switch to new branch
git checkout -b feature/new-feature

# Push new branch to GitHub
git push -u origin feature/new-feature
```

### Updating from GitHub

```bash
# Pull latest changes
git pull origin main
```

## 🔐 Authentication

### Using Personal Access Token (Recommended)

1. Go to GitHub Settings → Developer settings → Personal access tokens
2. Generate new token with `repo` access
3. Use token as password when pushing

### Using SSH (Alternative)

```bash
# Generate SSH key
ssh-keygen -t ed25519 -C "your.email@example.com"

# Add SSH key to ssh-agent
ssh-add ~/.ssh/id_ed25519

# Copy public key and add to GitHub
# Settings → SSH and GPG keys → New SSH key
```

## 📂 What Gets Uploaded?

✅ All `.cpp` source files  
✅ README.md  
✅ LICENSE  
✅ CONTRIBUTING.md  
✅ ORGANIZATION_GUIDE.md  
❌ `.exe` files (excluded by .gitignore)  
❌ `.vscode` folder (excluded by .gitignore)  
❌ Temporary files (excluded by .gitignore)

## 🆘 Troubleshooting

### Error: "Repository not found"

- Check if repository URL is correct
- Verify you have access to the repository

### Error: "Authentication failed"

- Use Personal Access Token instead of password
- Check if your credentials are correct

### Error: "Updates were rejected"

```bash
# Pull latest changes first
git pull origin main --rebase
git push
```

## 📚 Resources

- [Git Documentation](https://git-scm.com/doc)
- [GitHub Guides](https://guides.github.com/)
- [Git Cheat Sheet](https://education.github.com/git-cheat-sheet-education.pdf)

---

**Need Help?** Open an issue on GitHub or check the documentation!
