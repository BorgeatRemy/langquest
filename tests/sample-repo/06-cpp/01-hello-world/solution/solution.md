---
title    = "Hello, C++!"
hints    = [
    "Just return the string literal directly.",
    "Use std::string as the return type.",
    "Make sure punctuation and capitalization match exactly.",
]
keywords = []
---

## Explanation

C++ functions specify their return type before the function name. The `std::string` type from the `<string>` header holds text data.

```cpp
#include <string>

// greeting returns the classic greeting string.
std::string greeting() {
    return "Hello, World!";  // Return the exact string
}
```

**Key concepts:**
- `std::string` - the standard string type (from `<string>` header)
- `return` - explicitly returns a value
- `#include` - brings in library headers
- Catch2 `REQUIRE()` - assertion macro that fails the test if the condition is false