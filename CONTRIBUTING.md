# Contributing to 150 Days DSA Challenge

First off, thank you for considering contributing to this repository! 🎉

## How Can I Contribute?

### 🐛 Reporting Bugs

If you find a bug in any program:

1. Check if the bug has already been reported in Issues
2. If not, create a new issue with:
   - Clear title and description
   - Steps to reproduce
   - Expected vs actual behavior
   - Code snippet if applicable

### 💡 Suggesting Enhancements

Have an idea to improve the code or add new features?

1. Open an issue with the tag `enhancement`
2. Describe your suggestion clearly
3. Explain why it would be useful

### 📝 Code Contributions

#### Pull Request Process

1. **Fork the repository**
   ```bash
   git clone https://github.com/codeboy-pro/DSA.git
   cd DSA
   ```

2. **Create a new branch**
   ```bash
   git checkout -b feature/YourFeatureName
   ```

3. **Make your changes**
   - Write clean, readable code
   - Add comments where necessary
   - Follow the existing code style

4. **Test your code**
   ```bash
   g++ -o test your_file.cpp
   ./test
   ```

5. **Commit your changes**
   ```bash
   git add .
   git commit -m "Add: Brief description of your changes"
   ```

6. **Push to your fork**
   ```bash
   git push origin feature/YourFeatureName
   ```

7. **Create a Pull Request**
   - Go to the original repository
   - Click "New Pull Request"
   - Select your branch
   - Describe your changes

## 📋 Code Style Guidelines

### C++ Code Standards

- Use meaningful variable and function names
- Add comments to explain complex logic
- Follow consistent indentation (4 spaces or 1 tab)
- Include header comments explaining the program's purpose

#### Example:

```cpp
/*
 * Program: Binary Search Implementation
 * Description: Searches for an element in a sorted array
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;  // Element not found
}
```

### File Naming Conventions

- Use descriptive names: `binary_search.cpp` ✅ not `bs.cpp` ❌
- Use lowercase with underscores
- Place files in appropriate folders

### Folder Organization

When adding new files:

- **Arrays/** - Array-related problems
- **Recursion/** - Recursive solutions
- **Sorting/** - Sorting algorithms
- **Searching/** - Search algorithms
- **Matrix/** - 2D array problems
- And so on...

## 🧪 Testing

Before submitting:

1. ✅ Code compiles without errors
2. ✅ Code runs correctly with test cases
3. ✅ No memory leaks (if using dynamic memory)
4. ✅ Edge cases are handled

## 📚 Adding New Topics

If you want to add a new topic:

1. Create a new folder with a descriptive name
2. Add at least 3-5 programs on that topic
3. Update README.md to include the new topic
4. Update ORGANIZATION_GUIDE.md

## 💬 Communication

- Be respectful and constructive
- Ask questions if you're unsure
- Help others when you can

## 🙏 Recognition

All contributors will be recognized in the README.md file.

Thank you for contributing! 🚀

---

**Happy Coding!** 💻
